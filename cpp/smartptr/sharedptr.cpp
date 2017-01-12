#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;

int main()
{
  sharded_ptr<string> ptr1(new string("asdf"));
  return 0;
}
