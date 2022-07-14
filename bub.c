#include<stdio.h>    
int main ()    
{    
        int n,i, j,temp; 
        
        printf ("Enter the size of the array");  
        scanf("%d",&n);  
        int a[n];
        
        // Accept the elements into the array
        printf("Enter the elements");    
        for(i = 0; i < n; i++)    
        {    
            scanf("%d",&a[i]);    
        }  
        
        // sort the array
        for(i = 0; i < n-1; i++)    
        {    
          for(j = 0; j < n-1-i; j++)    
            {    
                if(a[j] > a[j+1])    
                {    
                    temp = a[j];    
                    a[j] = a[j+1];    
               		a[j+1] = temp;
                }  
            }     
        }     
         printf("sorted array is \n");    
        for(i = 0; i < n; i++)    
        {    
            printf("%d ",a[i]);    
        } 
        	int f=0;
        	int l=n-1;
        	int key;
        	printf("enter the key value");
        	scanf("%d",&key);
        	while(f<=l)
       		{
       			int m=(f+l)/2;
       			if (a[m]==key)
       		
       			{	
        			printf("%d is found at location %d",key,m+1);
  					     return 0; 
  			     }
  			     else if(key>a[m])
  			     {
  			     	f=m+1;
  			     }
  			     else
  			     {
  			     	l=m-1;
  			     }
  			    } 
  			   printf("Key m not found");
  			   return 1;
  }
  			     
