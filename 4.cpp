#include <iostream>
using namespace std;

int main()
{
    system("chcp 65001");
    
    char ch ='a';
    
    cout << ch << endl;
    
    cout << "char所占的内存大小为：" << sizeof(ch) << "字节" << endl;
    
    return 0;
}
    
    
