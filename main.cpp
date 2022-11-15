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
<<<<<<< HEAD
    _factorial_is<Factorial<5>::value> __;
=======
    _factorial_is<Factorial<10>::value> __;
>>>>>>> 512ec4f (Brought some beauty to this grey cruel worlllddd)
    return 0;
}