#include <iostream>
#include "array.h"


template<class T, class T1> arrays<T, T1>::arrays(int size)
{
    data = new T[size];
    if (data == NULL)
    {
        std::cerr << "Error memory ---- exit program" << std::endl;
        std::exit(1);
    }
    arrays::size = size;
    arrays::index = 0;
}

template<class T, class T1> T1 arrays<T,T1>::sum()
{
    T1 sum = 0;
    for (int i = 0; i < index; i++) sum += data[i];
    return(sum);
}

template<class T, class T1> T arrays<T, T1>::average_value() {
    T1 sum = 0;
    if (index == 0)
        return sum;
    for (int i = 0; i < index; i++) {
        sum += data[i];
    }
    return (sum / index);
}

template<class T, class T1> void arrays<T, T1>::show_array()
{
    for (int i = 0; i < index; i++) std::cout << data[i] << ' ';
    std::cout << std::endl;
}

template<class T, class T1> int arrays<T,T1>::add_value(T value)
{
    if (index == size) return(-1); // массив полон 
    else
    {
        data[index] = value;
        index++;
        return(0); // успешно 
    }
}

template arrays<int, long>;
template arrays<float, float>;