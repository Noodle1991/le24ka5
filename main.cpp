#include "iostream"

template<int n>
struct Factorial {
    static const int value = n * Factorial<n - 1>::value;
};


template<>
struct Factorial<0> {
    static const int value = 1;
};

template<int>
struct _factorial_is;

int main( )
{
    _factorial_is<Factorial<5>::value> __;
    return 0;
}