#include<iostream>
using namespace std;
void permutation(char permu[],int start,int num)
{
    if(start == num )
    {
        cout<<endl<<permu;
    }
    else
    {
        for(int i=start; i<num; i++)
        {
            swap(permu[start],permu[i]);
            permutation(permu,start+1,num);
            swap(permu[start],permu[i]);
        }
    } 
}
void makestring(int num)
{
    char permu[num+1],alpha='A';
    int i=0;
    permu[num] = '\0';
    for(i=0; i<num; i++)
    {
        permu[i] = alpha++;
    }
    permutation(permu,0,num);
}
int main()
{
    int num;
    cout<<"Enter number of characters: ";
    cin>>num;
    makestring(num);
    cout<<endl;
    return 0;
}