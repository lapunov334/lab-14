#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
#include<time.h>
main() {
	
	
	const int maxSize=50;
	int a[maxSize],x,k=0,n,b[maxSize],c[maxSize],m,j=0,i;
	srand(time(0));
	printf("Vvedite razmer macciva A [1..50]\n");
	scanf("%d",&n);
	while(n<1 || n>50)
		{
			printf("Ne correctni vvod dannix");
			scanf("%d",&n);
		}	
	for(i=0; i<n; i++)
		{		
			a[i]=rand()%101-50;
		}
	for(j=0; j<n-1; j++)
	{
		for(i=0; i<n-1; i++)
		{
			if(a[i]>a[i+1])
			{
				x=a[i];
				a[i]=a[i+1];
				a[i+1]=x;
			}								
		}
	}
	printf("\n");
	printf("Massiv A: \n");
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	////////////////////////////////////////Massiv B inter
	printf("Vvedite razmer macciva B [1..50]\n");
	scanf("%d",&m);
	while(m<1 || m>50)
		{
			printf("Ne correctni vvod dannix");
			scanf("%d",&m);
		}	
	for(i=0; i<m; i++)
		{		
			b[i]=rand()%101-50;
		}
	for(j=0; j<m-1; j++)
	{
		for(i=0; i<m-1; i++)
		{
			if(b[i]<b[i+1])
			{
				x=b[i];
				b[i]=b[i+1];
				b[i+1]=x;
			}								
		}
	}
	printf("\n");
	printf("Massiv B: \n");
	for(i=0; i<m; i++)
	{
		printf("%d ",b[i]);
	}
	/////////////////////////////////
	printf("\n");
	for(i=0; i<n; i++)
	{
		c[k]=a[i];
		k++;
	}
	for(i=0; i<m; i++)
	{
		c[k]=b[i];
		k++;
	}
	int gg,g,l;
	for(i=0; i<k; i++)
	{
		gg=c[i];
		for (j=i+1; j<k; j++)
		{
			if(gg==c[j])
			{
				for(g=j; g<k; g++)
				{
					c[g]=c[g+1];
				}
				k--;
			}
		}
	}
	for(j=0; j<k-1; j++)
	{
		for(i=0; i<k-1; i++)
		{
			if(c[i]<c[i+1])
			{
				x=c[i];
				c[i]=c[i+1];
				c[i+1]=x;
			}								
		}
	}
	/////////////////////////////////Massiv C inter
	printf("\n");
	printf("Massiv C: \n");
	for(i=0; i<k; i++)
	{
		printf("%d ",c[i]);
	}
	
	return 0;
}
