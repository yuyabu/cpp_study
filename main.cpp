#include<iostream>

void hellowolrd();
void some_function();
void init_syntax();

int main(){
    hellowolrd();
    some_function();
    init_syntax();
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
void init_syntax(){
    int i1 = 7.2;//i1は7になる（驚いたかな？）
    //int i2 {7.2};//エラー：浮動小数点から整数への変換
    //int i3 = {7.2};//エラー：浮動小数点から整数への変換（=は省略可）
    std::cout << i1 << std::endl;//7
}