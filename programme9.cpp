#include<iostream>
using namespace std;
   // classe Test
class Test
{
private:
    static int count;
public:
    Test& call(); 
};
  
int Test::count = 0;
  
Test& Test::call()
{
    Test::count++;
    cout << Test::count << " ";
    return *this;
}
  
  // fonction main
int main()
{
    Test test;
    test.call().call().call().call() ;
    return 0;
}



