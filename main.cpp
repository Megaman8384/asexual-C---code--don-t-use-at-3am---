#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
    

    for(int i = 0; i < 100; i++)
    {
        cout << "use at your own risk." << "\n";
        system("clang++ main.cpp -o self_next && ./self_next");
    }
}
