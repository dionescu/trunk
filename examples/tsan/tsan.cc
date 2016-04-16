#include <iostream>
#include <thread>

static int x = 0;

void check() {
  if (x == 1) {
    std::cout << "x changed" <<  std:: endl;
  }
}

void change() {
  x = 1;
}

int main() {
  std::thread t1(check);
  std::thread t2(change);
  t1.join();
  t2.join();
}
