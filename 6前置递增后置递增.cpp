#include <iostream>
using namespace std;

int main() {
    //前置递增：先++，在进行表达式计算
    int a1 =10;
    
    int b1 = ++a1*10;
    
    cout << a1 << " " << b1 << endl; // 11 110  

    //后置递增：先进行表达式计算，在++
    int a2 = 10;
    
    int b2 = a2++ * 10;
    
    cout << a2 << " " << b2 << endl; // 11 100  

    return 0;
}