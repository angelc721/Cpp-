
#include <iostream>
using namespace std; 

class findArea
{
    public: 
    findArea(){}
    findArea(int x)
    {
        cout<<x<<endl; 
    }
    findArea(int w, int h)
    {
        cout<<h*w<<endl; 
    }
    findArea(int b1, int b2, int h)
    {
        cout<<b1*b2*h<<endl; 
    }
};
int main()
{
    findArea(10);
    findArea(10,20);
    findArea(10,20,30); 
    return 0; 
}