#include <iostream>
#include "math.h"
#include "iomanip"
#include "quick_unquick.h"
using namespace std;

int main(int argc,char** argv)
{
    long long int xpi=0;
    cout<<"enter number \n";
    xpi=stold(argv[1]);
    quick_unquick *quqick=new quick_unquick();
    cout<<"enter 1 for quick method or 2 for unquick \n";
    int qck=0;
    qck=stoi(argv[2]);
    if(qck==2){
            quqick->unquick(xpi);
    }
    if(qck==1){
            quqick->quick(xpi);
    }
    return 0;
}
