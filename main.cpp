#include<iostream>

void hellowolrd();
void some_function();
void init_syntax();
void auto_init();
void const_test();
constexpr int square(int v);
void condition_test();

int main(){
    hellowolrd();
    some_function();
    init_syntax();
    auto_init();
    const_test();
    condition_test();
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
void auto_init(){
    int i1 = 7;
    auto i2 = 7;
    std::cout << i2 << std::endl;
}
void const_test(){
    const int i=7;
    //i++; エラー
    const int i2 = square(6);
    std::cout << i2 << std::endl;
}
constexpr int square(int v){
    return v*v;
}
void condition_test(){
    std::cout << "y or n?\n";

    char answer =0;
    std::cin >>answer;

    if (answer=='y')
        std::cout << "yes" << std::endl;
    else if(answer =='n')
        std::cout << "No" << std::endl;
    else
        std::cout << "other" << std::endl;
}