#include <iostream>
#include <string>

using namespace std;
string* addEntry( string *dynamicarray, int &siz, string newentry);
string* deleteEntry(string *dynamicarray, int &size, string entryToDelete);


int main()
{
    string newentry;
    string entryToDelete;
    entryToDelete = "amir";
    cout<<"ENTER ELEMENT TO ADD :";
    cin>>newentry;
    cout<<"ENTER ELEMENT TO DELETE :";
    cin >>entryToDelete;
    int siz = 5;

    string* dynamicarray = new string[siz];

    dynamicarray[0]="Ahmed";
    dynamicarray[1]="Amir";
    dynamicarray[2]="Yasin";
    dynamicarray[3]="Abdo";
    dynamicarray[4]="Ayman";

    addEntry(dynamicarray, siz, newentry);
    deleteEntry(dynamicarray,siz, entryToDelete);


    return 0;
}
//Function that add new entry at the end of array and return new array
string* addEntry( string *dynamicarray, int &siz, string newentry)
{
    siz = 6;
    string * arr = new string[6];

    for (int i = 0 ; i < 5 ; i++)
    {
        arr[i]=dynamicarray[i];

    }

    arr[5]=newentry;
    cout<<"THAT IS THE ARRAY AFTER ADDING :";

    for(int j=0;j<6;j++)
    {
        cout << arr[j] << " ";
    }
    cout<<endl;

    return arr;
}
//Function that delete element from an array and return new array after deleting

string* deleteEntry(string *dynamicarray, int &siz, string entryToDelete)
{
    string *arr = new string[siz-1];
    int counter=0;

    for (int j=0 ; j<5 ; j++)
    {
        if (dynamicarray[j]==entryToDelete)
        {
            continue;
        }
        else if (dynamicarray[j]!=entryToDelete)
        {
            counter++;
        }

        if(counter==5)
        {
            cout<<"NOT FOUND";
            break;
        }



        arr [j] = dynamicarray [j];


    }
    if(counter<5)
    {
           cout<<"FOUND"<<endl;


    cout<<"THAT IS THE NEW ARRAY AFTER DELETING :";

    }


    for (int i =0 ;i<5 ; i++)
    {
        if(counter==5)
        {
            break;
        }

        cout << arr[i] <<"  ";
    }

    cout<<endl;
    return arr;

}
