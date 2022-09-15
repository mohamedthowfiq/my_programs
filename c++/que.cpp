#include <iostream>
#include <deque>

int main()
{
    std::deque<std::string> q;

    q.push_back("thowfiq");
    q.push_back("sangar");
    q.push_back("maari");
    q.push_back("rahuman");
    q.push_back("vpra");

    for(std::string i : q)
    {
        std::cout << i << std::endl;
    }
    
    return 0;
}