#include <stddef.h>
#include <vector>
#include <semaphore>
#include <mutex>
#include <thread>

template <typename Data, ptrdiff_t MaxDataSlots = 100>
class RingBuffer : public std::vector<Data> {



    std::counting_semaphore<MaxDataSlots> storable{MaxDataSlots};
    std::counting_semaphore<MaxDataSlots> readable{0};
    std::mutex storeMutex;
    std::mutex readMutex;


    using size_type = std::vector<Data>::size_type;
    struct Index : std::atomic<size_type> {
        Index(auto i)
        { this->store(i); }
        void operator ++ () {
            auto v = this->load();
            ++v %= MaxDataSlots;
            this->store(v);
        }
    };
    Index nextStorable = 0;
    Index nextReadable = 0;



    public:

    RingBuffer(size_t count = MaxDataSlots) : std::vector<Data>(count)
    { /* Empty */}

    void store(const Data& t) {
        storable.acquire();
        {
            std::lock_guard lock{storeMutex};
            this->at(nextStorable) = t;
            ++nextStorable;
        }
        readable.release();
    }

    Data read() {
        Data t;
        readable.acquire();
        {
            std::lock_guard lock{readMutex};
            t = this->at(nextReadable);
            ++nextReadable;
        }
        storable.release();
        return t;
    }



};