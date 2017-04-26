#include <iostream>
#include <stdlib.h>

int main(int argc, const char ** argv)
{
    char buff[1000];
    
    std::cout << "Enter the expression. "<<std::endl;
    //std::cout << "3자리 숫자를 입력해 주세요"<<std::endl;
    std::cin.getline(buff, 1000, '\n');
    
    //string oprnd = str.Substring(0,3);
    //int oprnd_1 = atoi(buff.Left(3));
    //int oprnd_2 = atoi(buff[4:6]);
    
    char opr = buff[3];
    
    std::cout <<oprnd<<std::endl;
    //std::cout <<buff[4:6]<<std::endl;
    std::cout <<opr<<std::endl;
    
    /*
    
    std::cout << "연산자를 입력해 주세요"<<std::endl;
    std::cin.getline(buff, 1000, '\n');
    char opr = buff[0];
    
    std::cout << "3자리 숫자를 입력해 주세요"<<std::endl;
    std::cin.getline(buff, 1000, '\n');
    int oprnd_2 = atoi(buff);
    std::cout << oprnd_1 << opr << oprnd_2 <<std::endl;    
    
    
    if (buff[0]== '*')
        opr = 1;
    else if (buff[0] == +)
        opr = 2;
    else if (buff[0] == -)
        opr = 3;
    else if (buff[0] == /)
        opr = 4;    
    
    switch(opr)
    {
        case 1:
        std::cout << oprnd_1 * oprnd_2 <<std::endl;
        break;
        case 2:
        std::cout << oprnd_1 + oprnd_2 <<std::endl;
        break;
        case 3:
        std::cout << oprnd_1 - oprnd_2 <<std::endl;
        break;
        case 4:
        std::cout << oprnd_1 / oprnd_2 <<std::endl;
        break;
    }
    
    std::cout << "결과값 입니다."<<std::endl;

    std::cout << swith(opr) <<std::endl;
    */
    return 0;
}