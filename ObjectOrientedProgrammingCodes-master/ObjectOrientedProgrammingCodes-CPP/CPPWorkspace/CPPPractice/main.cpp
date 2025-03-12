#include <iostream>

int main()
{
    try
    {
        std::cout<< "Enter your favorite number"<< std::endl;
        int fav_number;
        std::cin >> fav_number;
        std::cout << "Amazaing!! That's my favorite number"<<std::endl;
        std::cout << "No really!!"<< fav_number <<" is my favorite number."<<std::endl;

        return 0;
    }
    catch(const std::exception e)
    {
        //std::cout<<"";
        return -1;
    }
}