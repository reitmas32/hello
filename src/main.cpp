#include <iostream>

#include <concepts>

struct Component
{
    int eid = 0;
};

struct MyCmp : Component
{
};

template <class T>
requires std::is_base_of<Component, T>::value 
void print_cmp(Component *cmp)
{
    std::cout << cmp->eid << '\n';
    return;
}

int main(int argc, char const *argv[])
{
    MyCmp my_cmp;
    print_cmp<MyCmp>(&my_cmp);
    return 0;
}
