#include<iostream>
using namespace std;

int main()
{
    //deklaracja zmiennej n, tablicy z alfabetem angielskim i wyniku
    int n=0;
    cin>>n;
    char tablica [26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}; 
    string wyn="";
    //główna pętla
    while(n>0)
    {
        //jeżeli n jest większe od ilości liter
        if(n>26)
        {
            wyn=wyn+'z';
            n-=26;
        //jeżeli n jest mniejsze od ilości liter
        }else{
            wyn=wyn+tablica[n-1];
            n=0;
        }
    }
    //wypisanie wyniku
    cout<<wyn;
    return 0;
}