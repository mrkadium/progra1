#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int num=1, anterior=0, cont=0;
    do{
        cout<< num <<"  ";
        cont = num;
        num += anterior;
        anterior=cont;

    }while(num<=30000);


    return 0;
}
