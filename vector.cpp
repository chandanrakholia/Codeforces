#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> vect1;
    int element;
    int n;
    cout<<"Enter no of elements: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter an element: ";
        cin>>element;
        vect1.push_back(element);
    }
    cout<<"Size of vect is "<<vect1.size()<<endl;
    cout<<"Before: ";display(vect1);
    vect1.pop_back();
    cout<<"After: ";display(vect1);
    vector<int> :: iterator iter = vect1.begin();
    vect1.insert(iter,566);
    display(vect1);
    cout<<vect1[0]<<endl;
    return 0;
}