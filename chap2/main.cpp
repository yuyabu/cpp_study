#include<iostream>
#include "Vector.h"

void hellowolrd();
void some_function();
void init_syntax();
void auto_init();
void const_test();
constexpr int square(int v);
void condition_test();
void copy_fct();
void enum_test();
void invariant_test();
enum class Traffic_light;
Traffic_light& operator++(Traffic_light& t);
int main(){
    hellowolrd();
    some_function();
    init_syntax();
    auto_init();
    const_test();
    //condition_test(); //入力を求められてうざいのでコメントアウト
    copy_fct();
    enum_test();
    invariant_test();
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
void pointer_test(){

}
void copy_fct(){
    int v1[10] = {0,11,22,33,44,55,66,77,88,99};
    int v2[10];
    for (auto i=0;i!=10; ++i){
        v2[i]=v1[i];
    }
    for (auto &x:v2){
        std::cout << x << std::endl;//88
    }
}

enum class Color{red,blue,green};
enum Week {sun,man,tus,wed,the,fri,sat};

enum class Traffic_light{green,yellow,red};
/**
 * 前置インクリメント
 * @param t
 * @return
 */
Traffic_light& operator++(Traffic_light& t){
    switch(t){
        case Traffic_light::green:  return  t = Traffic_light::yellow;
        case Traffic_light::yellow: return t = Traffic_light::red;
        case Traffic_light::red:    return    t = Traffic_light::green;
    }
}

void enum_test(){
    Color col = Color::red;
    //Color col2 = 0;//error
    /**
     * enum classにint型の代入はできない。以下のエラーメッセージがでる。
     * Cannot initialize a variable of type 'Color' with an rvalue of type 'int'
     */

    //if(col==0){}
    /**
     * enum classはintと比較できない。
     * Cannot initialize a variable of type 'Color' with an rvalue of type 'int'
     */
    Week week = sun;
    if (week == 0){
        /**
         * enumとintの比較は可能。
         */
        std::cout << "Week:Sun is 0!!!" << std::endl;
    }
    //week = 1;
    /**
     * enumに対してintは比較はできるが、代入は無理みたいだ。
     * assigning to 'Week' from incompatible type 'int'
     */

    Traffic_light t = Traffic_light::red;
    ++t;
    ++t;

    if(t ==Traffic_light::yellow){
        std::cout << "light is yellow!" << std::endl;
    }
}
void invariant_test(){
    try{
        Vector v(-27);
    }
    catch(std::length_error){
        std::cout << "負数を処理" << std::endl;
    }
    catch(std::bad_alloc){
        std::cout << "記憶領域不足を処理" << std::endl;
    }
}