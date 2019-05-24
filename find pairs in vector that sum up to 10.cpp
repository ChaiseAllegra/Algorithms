#include <iostream>
#include<vector>
using namespace std;
vector<double> pairs10(vector<double>vec)
{
    vector<double>pairVec;
    for(int i=0; i<vec.size();i++)
    {
        for(int j=0; j<vec.size();j++)
        {
            if(vec.at(i)+vec.at(j)==10)
            {
                pairVec.push_back(vec.at(i));
                pairVec.push_back(vec.at(j));
            }
        }
    }
    return pairVec;
}
int main()
{
    vector<double> num {2,5,6,4,8};
    vector<double> tmp;
    
    tmp=pairs10(num);
    
    cout<<"Pairs that sum up to 10"<<endl;
    for(int i=0;i<tmp.size();i+=2)
        cout<<tmp.at(i)<<", "<<tmp.at(i+1)<<endl;
}