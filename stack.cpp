#include <iomanip>
#include <iostream>
#include <stack>

using namespace std;
void printStack(stack <int> s) 
{ 
    while (!s.empty()) 
    { 
        cout << s.top()<<endl; 
        s.pop(); 
    } 
   
} 
int main()
{
    stack <int> s;
    cout<<"inserting 1,2,3 "<<endl;
    s.push(1);
    s.push(2);
    s.push(3);
    
    cout<<"size "<<s.size()<<endl;
    printStack(s);
    
    cout<<"pop "<<endl;
    s.pop();
    cout<<"size "<<s.size()<<endl;
    printStack(s);

    return 0;
}