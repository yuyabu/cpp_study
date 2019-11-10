#include "Vector.h"

Vector::Vector(int s)
    :elem{new double[s]},sz{s}
{

}

double& Vector::operator[](int i)
{
    //if(i<0 || size() <= i)throw out_of_range{"Vector::operator[]"};
    //例外型out_of_rangeの定義が必要っぽい

    return elem[i];
}
int Vector::size(){
    return sz;
}
