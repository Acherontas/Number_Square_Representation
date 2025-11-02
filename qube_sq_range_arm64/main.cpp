#include <iostream>
#include "math.h"
#include "iomanip"
using namespace std;

int main(int argc,char** argv)
{
    long long int xpi=0;
    cout<<"enter number \n";
    xpi=stold(argv[1]);
    long double xpik=0;
    long long int xp=0;
    xpik=sqrt(xpi);
    long double fractpart,intpart;
    fractpart=modf(xpik,&intpart);
    xp=intpart;
    cout<<"the sq is " << xpik << "  with intpart " << xp  <<"\n";
    long long int xt=0;
    long long int mxt=0;
    long long int xmt=0;
    int lpos=0;
    int xts=1;
    int fn=0;
    int mpos=0;
    for(int i=1;i<=xpi;i+=xp)
    {
      xt=i+xp;
      mxt=0;
      xmt=i;
      mxt=i;
      fn=0;
      cout<<xts << " :: ";
      cout<< "--> " ;
      while(xmt<=xt-1){cout<< mxt << " " ; mxt+=1; xmt+=1; lpos=xts; if(xmt==xpi+1){fn+=1;  break;}}
      cout<<"\n";
      xts+=1;
    }
    if(xts<=xp){cout<<"non usable\n";}
    if(fn==1){
            cout<<"last pos " << lpos <<" with main pos " << xp <<"\n";
    }
    return 0;
}
