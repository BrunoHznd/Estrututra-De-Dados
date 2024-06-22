#include <cstdlib>
#include <iostream>
 
using namespace std;
 
int main(int argc, char *argv[])
{
    int v[100], x, i, aux, c;
    x=1;i=0; c=0;
    while(x!=0 && i<100){
               cout<<"Digite um número \n";
               cin>>x;
               if(x!=0){
               v[i]=x;               
               i++;
               }
               }
    for(int y=0; y<i-1; y++){
            if(v[y]== v[i-1])
               c++;
            }
    cout<<c<<"\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}