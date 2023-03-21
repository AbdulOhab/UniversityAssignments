#include <iostream>
#include <deque>

int main()
{
    std::deque<int> d = {7, 5, 16, 8};

    d.push_front(13);
    d.push_back(25);

    for(int n : d) {
        std::cout << n << '\n';
    }
}
