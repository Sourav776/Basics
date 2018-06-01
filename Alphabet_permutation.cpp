#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
//string res[121];
//int k;
int last;

/****************************************************************/

char arr[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

void back_tracking(char *arr,int begin,int end)
{
    if(last==0) return;
  if(begin==end&&last)
    {
    for(int i=0;i<=end;i++) printf("%c",arr[i]);
    printf("\n");
    last--;
    }
  else
  {
      for(int i=begin;i<=end;i++)
      {
          swap(arr[begin],arr[i]);
          back_tracking(arr,begin+1,end);
          swap(arr[begin],arr[i]);
      }
  }

}

int main()
{
    int T,k=1,end,begin;
    scanf("%d",&T);
    while(T--)
    {
    begin=0;
    scanf("%d %d",&end,&last);
    //int begin=0,end=a.size()-1;
    printf("Case %d:\n",k++);
    back_tracking(arr,begin,end-1);
  //  for(int i=0;i<k;i++) cout<<res[i]<<endl;
    }
    return 0;
}
