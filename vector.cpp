#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <char> vect(3,'o'), v2(5,'i');

    cout<< vect.size()<<endl;

    for (int i=0;i<vect.size();i++)
    {
        cout<< vect[i]<<" ";
        cout<<endl;
    }

   /* vect.push_back('f');
    vect.push_back('u');
    vect.push_back('c');
     for (int i=0;i<vect.size();i++)
    {
        cout<< vect.at(i)<<" ";
        cout<<endl;
    }

    vect.pop_back();
    for (int i=0;i<vect.size();i++)
    {
        cout<< vect.at(i)<<" ";
        cout<<endl;
    }*/

   /* cout<<vect.empty()<<endl;
    vect.clear();
    cout<<vect.empty()<<endl;

    vect.swap(v2); */

    vector <char>::iterator i;
    cout<<"vector1: ";
    for (i=vect.begin();i<vect.end();i++)
    {
        cout<< *i<<" ";
    }
   /* cout<<endl;
    for (int i=0;i<v2.size();i++)
    {
        cout<< v2.at(i)<<" ";
    } */
    system("pause");
    return 0;
}