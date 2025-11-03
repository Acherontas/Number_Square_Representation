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
    cout<<"enter 1 for quick method or 2 for unquick. if quick enter 1 0 or 2 and ur number  \n";
    cout<<"eg final form : 2785 1 0 or 2784 2 30 where 30 is the xts \n";
    long long int xt_out=0;
    int qck=0;
    qck=stoi(argv[2]);
    if(qck==1){
            quqick->quick(xpi);
    }
    if(qck==2){
            xt_out=stold(argv[3]);
            quqick->unquick(xpi,xt_out);
    }
    return 0;
}
