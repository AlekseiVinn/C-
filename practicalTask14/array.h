#include <iostream>

template<class T, class T1>
class arrays
{
public:
    arrays(int size);
    T1 sum();
    T average_value();
    void show_array();
    int add_value(T);

private:
    T* data;
    int size;
    int index;
};

