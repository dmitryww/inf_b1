#include <iostream>
#include <fstream>

int main()
{
    std::string line;

    std::ifstream in("����.txt"); // ��������� ���� ��� ������
    if (in.is_open())
    {
        while (getline(in, line))
        {
            std::cout << line << std::endl;
        }
    }
    in.close(); //��������� ����
}
