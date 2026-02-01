// PROGRAM TO CALCULATE SUM AND PRODUCT ALL NUMBERS IN ARRAY
#include <iostream>
using namespace std;
int main(){
    int nums[]={10,20,30,40,50};
    int size = 5;
    int sum = 0;
    int product = 1;
    for(int i=0;i<size;i++){
        sum +=nums[i];
        product *=nums[i];

    }
    cout<<"Sum = "<<sum<<endl;
    cout<<"Product = "<<product<<endl;
    return 0;

}
    


// PROGRAM TO SWAP THE MAX AND MIN NUMBERS IN AN ARRAY
#include <iostream>
using namespace std;
int main(){
    int nums[]= {23,45,12,67,34,89,5};
    int size = 7;
    int maxIndex = 0;
    int minIndex = 0;
    for(int i=1;i<size;i++){
        if(nums[i]>nums[maxIndex]){
            maxIndex = i;
        }
        if(nums[i]<nums[minIndex]){
            minIndex = i;
        }
    
    }
    // swap max and min
    int temp = nums[maxIndex];
    nums[maxIndex] = nums[minIndex];
    nums[minIndex] = temp;
    cout<<"Array after swapping max and min elements: ";
    for(int i=0;i<size;i++){
        cout<<nums[i]<<" ";
    }
    return 0;


}




// PROGRAM TO PRINT ALL THE UNIQUE VALUES IN AN ARRAY
#include <iostream>
using namespace std;
int main()
{
    int nums[] = {10,20,10,30,40,20,50,30};
    int size = 8;
    cout << "Unique values in the array: ";
    for (int i = 0; i < size; i++)
    {
        bool isUnique = true;
        for (int j = 0; j < i; j++)
        {
            if (nums[i] == nums[j])
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique)
        {
            cout << nums[i] << " ";
        }
    }
}




// PROGRAM TO PRINT INTERSECTION OF TWO ARRAYS
#include <iostream>
using namespace std;
int main(){
    int arr1[] = {10,20,30,40,50};
    int arr2[] = {30,40,50,60,70};
    int size1 = 5;
    int size2 = 5;

    cout<<"Intersection of two arrays: ";
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            }
        }
    }
    return 0;
}
