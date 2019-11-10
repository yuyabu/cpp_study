#include "Vector.h"
#include <stdexcept>
using namespace std;
Vector::Vector(int s)
    :elem{new double[s]},sz{s}
{
    if(s<0) {
        throw length_error{""};
    }
    elem = new double[s];
    sz=s;

}

double& Vector::operator[](int i)
{
    if(i<0 || size() <= i)throw std::out_of_range{"Vector::operator[]"};

    return elem[i];
}
int Vector::size(){
    return sz;
}
