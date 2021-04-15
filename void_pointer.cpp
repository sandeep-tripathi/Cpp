/** The void pointer, also known as the generic pointer,
 *  is a special type of pointer that can be pointed at objects of any data type!
 *  A void pointer is declared like a normal pointer, 
 * using the void keyword as the pointers' type: **/

#include <iostream>
 
enum class Type
{
    INT,
    FLOAT,
    CSTRING
};
 
void printValue(void *ptr, Type type)  // type as extra argument of generic type
{
    // We need to either cast or use switch statment to pass the type of the pointer as extra argrument
    switch (type)
    {
        case Type::INT:
            std::cout << *static_cast<int*>(ptr) << '\n'; // cast to int pointer and perform indirection
            break;
        case Type::FLOAT:
            std::cout << *static_cast<float*>(ptr) << '\n'; // cast to float pointer and perform indirection
            break;
        case Type::CSTRING:
            std::cout << static_cast<char*>(ptr) << '\n'; // cast to char pointer (no indirection)
            // std::cout knows to treat char* as a C-style string
            // if we were to perform indirection through the result, then we'd just print the single char that ptr is pointing to
            break;
    }
}
 
int main()
{
    int nValue{ 5 };
    float fValue{ 7.5f };
    char szValue[]{ "Sandy" };
 
    printValue(&nValue, Type::INT);
    printValue(&fValue, Type::FLOAT);
    printValue(szValue, Type::CSTRING);
 
    return 0;
}
