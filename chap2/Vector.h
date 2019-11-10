

#ifndef UNTITLED1_VECTOR_H
#define UNTITLED1_VECTOR_H

#endif //UNTITLED1_VECTOR_H

class Vector{
public:
    Vector(int s);
    double& operator[](int i);
    int size();
private:
    double *elem;
    int sz;
};