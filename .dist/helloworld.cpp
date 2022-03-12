#include <iostream>
using namespace std;
#include <thread>
void hello()
{
cout<<"Hello Concurrent World_kinda\n";
}
int main()
{
thread t(hello);
t.join();
}