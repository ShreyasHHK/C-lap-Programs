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
        return 0; 
}    

