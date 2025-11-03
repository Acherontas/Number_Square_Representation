#include "quick_unquick.h"
#include <iostream>
#include "math.h"
#include "iomanip"
#include "thread"
using namespace std;
//ctor
quick_unquick::quick_unquick(){}
//dtor
quick_unquick::~quick_unquick(){}
//copy ctor
quick_unquick::quick_unquick(const quick_unquick& other){}
// handle self assignment//assignment operator
quick_unquick& quick_unquick::operator=(const quick_unquick& rhs){if (this == &rhs) return *this; return *this;}

int quick_unquick::quick(long long int xbi){
    long double xpik=0;
    long long int xp=0;
    xpik=sqrt(xbi);
    long double fractpart,intpart;
    fractpart=modf(xpik,&intpart);
    xp=intpart;
    cout<<"the sq is " <<std::setprecision(10) << xpik << "  with intpart " << xp  <<"\n";
    long long int tmp_xp=0;
    tmp_xp=xp;
    long long int xt=0;
    long long int mxt=0;
    long long int xmt=0;
    long long int lpos=0;
    long long int xts=1;
    long long int fn=0;
    long long int mpos=0;
    cout<<xts <<" :: ";
    //for(int i=1;i<=xp;i++){cout<<i << " ";}
    fn=xp;
    cout<<"\n";
    long long int atr=3000;long long int tra=0;long long int xp_tmp=0;
    if(xbi>=atr){
        cout<<"i have to speed it up \n";
        cout<<"ur current xts ::== " << xp <<"\n";
        cout<<"enter new xts value smaller than above \n";
        long long int new_xts=0;
        cin>>new_xts;
        new_xts=xp-new_xts;
        cout<<"i generate new number for the specific row " << new_xts <<"\n";
        long long int new_number=0;
        new_number=new_xts*xp;
        new_number+=1;
        long long int start_point=0;
        start_point=new_number-xp;
        cout<<"of " << new_xts << " * " << xp << " ::== " << new_number << " \n";
        cout<<"starting with " << start_point << " ending with " << new_number << " and row of " << new_xts <<"\n";
        cout<<"passing value on xp ::== " << (new_xts+1) <<"\n";
        xp_tmp=new_number-1;
        xts=new_xts;
        tra=1;
        std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    }
    long long int i=0;
    long long int pvt=0;
    if(tra==0){i=(xp+1); pvt=xp;}
    if(tra==1){xp=(xp_tmp);i=xp;pvt=tmp_xp;}
    cout<<"using starting value of " << xp << " pivot of " << pvt << " last value of " << xbi <<" and xts " << xts <<"\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    for(i=(xp+1);i<=xbi;i+=pvt){
       xts+=1;
       mpos=i+pvt;
       mpos=mpos-1;
       if((i<xbi) && (mpos<xbi)){cout<<xts << " :: " << i << " ... " <<   mpos <<"\n";
                                    goto A;
                                }
       if((i<xbi) && (mpos==xbi)){cout<<xts << " :: " <<  i << " ... " <<  xbi <<"\n";
                                    goto A;
                                 }
       if((i==xbi) && (mpos>=xbi)){cout<<xts << " :: " << " ... "<< xbi << " ... " <<  mpos <<"\n";
                                    goto A;
                                  }
       if((i<xbi) && (xbi<mpos) && (mpos>xbi)){cout<<xts << " :: " << i << " ... " <<  xbi  << " ... " << mpos << "\n";
                                    goto A;
                                  }
       A:cout<<"";
    }
            if(tra==0){cout<<"last pos " << xts <<" with main pos " << xp <<"\n";}
            if(tra==1){cout<<"last pos " << xts <<" with main pos " << tmp_xp <<"\n";}
   return 0;
}

int quick_unquick::unquick(long long int xb){
    long double xpik=0;
    long long int xp=0;
    xpik=sqrt(xb);
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
    for(int i=1;i<=xb;i+=xp)
    {
      xt=i+xp;
      mxt=0;
      xmt=i;
      mxt=i;
      fn=0;
      cout<<xts << " :: ";
      cout<< "--> " ;
      while(xmt<=xt-1){cout<< mxt << " " ; mxt+=1; xmt+=1; lpos=xts; if(xmt==xb+1){fn+=1;  break;}}
      cout<<"\n";
      xts+=1;
    }
    if(xts<=xp){cout<<"non usable\n";}
    if(fn==1){
            cout<<"last pos " << lpos <<" with main pos " << xp <<"\n";
    }
   return 0;
}
