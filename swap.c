void swap_max(int arr[], int l, int pos)
{  
   int max=arr[pos];
   int t;
   
   for(int i=pos;i<l;i++)
   {  if(arr[i]>max)
      { max=arr[i];
        t=i;
      }
   }    
   if(max!=arr[pos])
   {int k=arr[pos];
   arr[pos]=arr[t];
   arr[t]=k;
   }
        
}         


void ssort(int arr[], int l)
{
  for(int i=0;i<l;i++)
  {  swap_max(arr,l,i);
  }
}
