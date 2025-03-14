#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    auto a = msg.begin();
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    cout << msg[msg.size() -1 ] << endl;
}