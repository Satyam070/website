#include<iostream> 
#include<stdlib.h>
int findMajorityElement(int arr[], int n) {
	int count = 0;
    int ans = 0;
    // konsa element bachta haii cancelling ke baad
    //use store kra liya haii ans me.
    for(int i =0; i< n; i++)
    {
        if(count == 0)
            ans = arr[i];
        if(ans == arr[i])
            count++;
        else
            count--;
    }
    //ab us element ko count krna haii jo ans me haii
    count = 0;
    for(int i =0; i<n; i++)
    {
        if(arr[i]==ans)
            count++;
    }
    
    // uske baad check krna haii ki vo element n/2 se jada aaya haii ki nhi.
    if(count <= n/2)
        return -1;
     return ans;
}

int main()
{
    int arr[5] = {1,3,1,2,1};
    int a= findMajorityElement(arr,5);
    printf("%d",a);
}