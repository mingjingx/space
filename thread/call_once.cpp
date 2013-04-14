#include <thread>
#include <iostream>
#include <vector>
#include <mutex>

std::once_flag flag;
void do_something()
{
	std::call_once(flag, []() {
		std::cout << "Called once" << std::endl;
	});
	std::cout << "Called each time" << std::endl;
}
int main()
{
	std::thread t1(do_something);
	std::thread t2(do_something);
	std::thread t3(do_something);
	std::thread t4(do_something);
	t1.join();
	t2.join();
	t3.join();
	t4.join();
	return 0;
}
