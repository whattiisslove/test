#include <iostream>


int lenStr(char* str)
{
    int i = 0;
    while (str[i] != '\0')
        i+= 1;

    return i;
}



void reverse(char* str)
{
    char tmp;
    int i = 0, length = lenStr(str);
    int REACHED_HALF = length / 2;

    while (i != REACHED_HALF)
    {
        
        tmp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = tmp;

        i += 1;
    }


}


int main()
{
    char str[5] = "arar";
    std::cout << str << '\n';
    reverse(str);
    std::cout << str << '\n';
    return 0;
}
