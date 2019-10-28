#include<iostream>

void hellowolrd();
void some_function();

int main(){
    hellowolrd();
    some_function();
}

void hellowolrd(){
    std::cout << "Hello, World!\n";
}
void some_function()//値を返却しない関数
{
    double d = 2.2;//浮動小数点数を初期化
    int i = 7;//整数を初期化
    d = d + i;//dに加算結果を代入
    i = d * i;//iに積を代入（double型のd*iをintに切捨て）
    std::cout << i << std::endl;//64
}