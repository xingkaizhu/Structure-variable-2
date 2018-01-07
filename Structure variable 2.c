#include <stdio.h>
int main()
{   int m,n,i,k,l,t,j;int s[100],q[100];
	struct studentthpe 
	{
		  char name[20];
		  int p;
		  int b;		  
	} a[100];
 scanf("%d",&n);	
for(i=0;i<n;i++)
  {
  	scanf(" %s",a[i].name);
  	scanf(" %d",&a[i].p);
  	scanf(" %d",&a[i].b);  
	s[i]=a[i].p+a[i].b;  
	q[i]=s[i]; 
  }
for(i=0;i<n-1;i++)
 {
 	 m=q[i];t=i;
 	 for(k=i+1;k<n;k++)
	{  
		if(q[k]>m)
		{
		  m=q[k];
		  t=k;		   	
		}
    }
   l=q[i];
	q[i]=q[t];
	q[t]=l;	
		
	
	}
  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
 if(s[j]==q[i])
 {
 	printf("%s ",a[j].name); 
 	printf("%d\n",s[j]);
 }
  	
 
	return 0;
}

