#include <bits/stdc++.h>

using namespace std;
void printarray(vector<int> array)
{
    for(auto k=array.begin();k!=array.end();k++)
    {
        cout<<" "<<*k;
    }
    cout<<endl;
}
void swap(int loc,int dest,vector<int> &arr)
{
    cout<<endl<<"loc ="<<arr.at(loc)<<" dest="<<arr.at(dest)<<endl;
    int temp=arr.at(loc);
    arr.at(loc)=arr.at(dest);
    arr.at(dest)=temp;
    printarray(arr);
}

void swapLeft(int size,vector<int> &arr)
{
    
    for(int d=0;d<size-1;d++)
    {
        swap(d,d+1,arr);
    }

}

vector<int> rotateLeft(int d, vector<int> &arr) {
    vector<int> temparr;
     for(int i=0;i<arr.size();i++)
     {
         temparr.push_back(-1);
     }
     int n=arr.size();
    for(int i=0;i<n;i++)
    {
        temparr.at((i+n-d)%n)=arr.at(i);
    }
    printarray(temparr);
    return temparr;    
}

int main()
{
    vector<int> array;
    array.push_back(1);
    array.push_back(2);
    array.push_back(3);
    array.push_back(4);
    array.push_back(5);
    array= rotateLeft(4,array);
    
    return 0;
}