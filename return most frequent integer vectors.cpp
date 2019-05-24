#include <vector>
#include<iostream>
#include<iomanip>
using namespace std;
double highestInt(vector<double>vec)
{
    double prevCnt=0;
    double currCnt=0;
    double num=0;
    for(int i=0;i<vec.size();i++)
    {
        for(int j=0;j<vec.size();j++)
        {
            if(vec.at(j)==vec.at(i))
                currCnt++;
        }
        if(currCnt>prevCnt)
        {
            num=vec.at(i);
            prevCnt=currCnt;
        }
        currCnt=0;
        
    }
    return num;
}
int main()
{
    vector<double>nums {1,2,3,4,5,2,7,2,8,8,7,2,9,8,2};//2
    vector<double>nums2 {1,1,3,4,5,2,7,1,1,8,7,2,9,1,1};//1
    vector<double>nums3 {3,3,3,3,4,4,4,4,8};//3 and 4 tie
    vector<double>nums4 {3,3,3,3,4,4,4,4,8,3,4,4};//4
    
    cout<<"Most frequent integer in a vector"<<endl;
    cout<<highestInt(nums)<<endl;
    cout<<highestInt(nums2)<<endl;
    cout<<highestInt(nums3)<<endl;
    cout<<highestInt(nums4)<<endl;
}