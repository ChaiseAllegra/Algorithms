#include <iostream> 
#include <iomanip>
#include <string>

using namespace std;

string it_reverse(char *arr, string word)
{    //iterative reversal
    int count=0;

    for(int i=word.size()-1; i>=0;i--)
    {
        arr[i]=word[count];
        count++;
    }
    string tmp=arr;
    return tmp;
}

string rec_reverse(string str, string word, int i)
{   //recursive reversal
    int n = str.length(); 
    if(i>=str.size()) 
        return str;
    str[i]=word[n - i - 1]; 
    return rec_reverse(str, word, i + 1); 
}

char unique_char(string word)
{
    char tmp;
    bool uni=true;
    for(int i=0; i<word.size();i++)
    {
        for(int j=i+1; j<word.size();j++)
        {
            if(word[i]==word[j])
            {
                uni=false;
                break;
            }
        }
        if(uni)
        {
            tmp=word[i];
            break;
        }
        else
            uni=true;
    }
    return tmp;
}

int main()
{
    char arr[10];
    string word="abaybabaxb", tmp=word;
    cout<<"original word: "<<word<<endl;
    cout<<endl;
    cout<<"iterative reversal result: "<<it_reverse(arr,word)<<endl;
    cout<<endl;
    cout<<"recursive reversal result: "<<rec_reverse(tmp,word,0)<<endl;
    cout<<endl;
    cout<<"first non duplicate character in the string: "<<unique_char(word)<<endl;
}