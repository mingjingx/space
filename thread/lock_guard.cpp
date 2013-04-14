#include <thread>
#include <iostream>
#include <vector>
#include <mutex>

struct Counter {
    int value;
    
    Counter() : value(0) {}

    void increment(){
        ++value;
    }

    void decrement(){
        if(value == 0){
            throw "Value cannot be less than 0";
        }

        --value;
    }
};

struct ConcurrentCounter {
    std::mutex mutex;
    Counter counter;

    void increment(){
        mutex.lock();
        counter.increment();
        mutex.unlock();
    }

    void decrement(){
        mutex.lock();
        counter.decrement();        
        mutex.unlock();
    }
};

int main()
{
	Counter counter;
	std::vector<std::thread> threads;
	for(int i = 0; i < 15; ++i) {
		threads.push_back(std::thread([&counter]() {
			for(int i = 0; i < 10000; ++i) {
				counter.increment();
			}
		}));
	}
	for(auto& thread : threads) {
		thread.join();
	}
	std::cout << counter.value << std::endl;
	return 0;
}
