//
//  main.cpp
//  19.11.12
//
//  Created by s20181105879 on 2019/11/12.
//  Copyright © 2019 s20181105879. All rights reserved.
//

#include <iostream>
#include <string.h>

using namespace std;
long n;
struct node {
    long len;
    long flag;
};
struct node s[110][110];
long ss[110];
long s1[110];
//long findmax(long t)
//{
//    long max=10000;
//    long tt;
//    for(long i=0;i<n;i++)
//    {
//        if(s[t][i].len>0 && s[t][i].flag<max)
//        {
//            max=s[t][i].len;
//            tt=i;
//        }
//    }
//
//
//
//    return tt;
//}
//void bfs(long t)
//{
//    s1[t]=1;
//    long max=10000;
//    long v;
//    while(1)
//    {
//
//        v=findmax(t);
//
//
//
//
//
//
//    }
//
//
//
//
//
//
//    for(long i=0;i<n;i++)
//    {
//        if(s[t][i].len>0 && s[t][i].flag<max)
//        {
//            max=s[t][i].len;
//            tt=i;
//        }
//    }
//
//
//}
long findmin(long t)
{
    long max=10000000000000000;
    long tt=0;
    for(long i=0;i<n;i++)
    {
        if(s[t][i].len>0 && s[t][i].len<max && s[t][i].flag==0)
        {
            tt=i;
        }
    }
    return tt;
}



int main() {
    cout<<"jghdf"<<endl;
    cin>>n;
    long q,si,l,j;
    for(long i=0;i<n*(n-1)/2;i++)
    {
        cin>>q>>si>>l>>j;
        s[q][si].len=l;
        s[q][si].flag=j;
        s[si][q].len=l;
        s[si][q].flag=j;
        if(j==1)
        {
            ss[q]++;
            ss[si]++;
        }
    }
    for(long i=0;i<n;i++)
    {
        if(ss[i]!=0)
        {
            s1[i]=1;
        }
    }
    long v;
    long long sum=0;
    for(long i=1;i<n;i++)
    {
        if(s1[i]==0)
        {
            //cout<<i<<endl;
            v=findmin(i);
            if(v==0)
            {
                cout<<sum<<endl;
                return 0;
            }
            //cout<<v<<endl<<endl;
            sum+=s[i][v].len;
            s1[i]=1;
        }
    }
    cout<<sum<<endl;

    
    
    return 0;
}

/*
4
1 2 1 1
1 3 4 0
1 4 1 1
2 3 3 0
2 4 2 1
3 4 5 0
 
 */
