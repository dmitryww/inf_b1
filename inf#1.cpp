#include <iostream>
#include <fstream>

int main()
{
    std::string line;

    std::ifstream in("вход.txt"); // открываем файл для чтения
    if (in.is_open())
    {
        while (getline(in, line))
        {
            std::cout << line << std::endl;
        }
    }
    in.close(); //закрываем файл
}
