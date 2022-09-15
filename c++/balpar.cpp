#include <iostream>
#include <stack>

int main()
{
    std::stack<char> s;
    std::string input;
    
    std::cin >> input;

    for(char i : input)
    {
        if(i == '(')
        {
            s.push(i);
        }
        else
        {
            s.pop();
        }
    }

    if(s.empty())
    {
        std::cout << "Balanced Parenthsis" << std::endl;
    }

    return 0;
}