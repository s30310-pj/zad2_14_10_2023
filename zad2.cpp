#include <iostream>

using namespace std;

int slices, guests, leftover;

int main()
{
    cout<<"Podaj liczbe gosci: ";
    cin>>guests;
    if ( guests%2 == 0 ){
        slices = guests/2;
        cout<<"Kazdy z gosci otrzyma "<<slices<<" kawalkow"<<endl;
    }
    else if (guests%2 == 1 ){
        slices = guests/2;
        leftover = guests/slices;
        cout<<"Kazdy z gosci otrzyma "<<slices<<" kawalkow, "<<leftover<<" zostanie dla organizatora"<<endl;
    }

    return 0;
}
