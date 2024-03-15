#include <bits/stdc++.h>
using   namespace std;
int main()
{
    long long a,b,L,H,i,dem=0,tich,bcnn,sodu;
    cout<<"Nhap L,H=";
    cin>>L>>H;
    cout<<"Nhap a,b=";
    cin>>a>>b;
    tich=a*b;
        //Cach 1: So diem 4/6
    /*for (i=L;i<=H;i++)
    {
        if ((i %a==0) and (i%b==0))
            dem++;
    }

     //Cach 2: So diem 5/6
     while (a!=b)
        if (a>b) a=a-b;
        else
            b=b-a;
    bcnn=tich/b;
    dem= (H-L+1)/bcnn;
    cout<<"So luong can tim la: "<<dem;
    */
    //Cach 3: So diem 6/6
     while (b!=0)
     {
         sodu=a%b;
         a=b;
         b=sodu;
    }

    bcnn=tich/a;
    dem= (H-L+1)/bcnn;
cout<<"so can tim la:"<<dem;
}
