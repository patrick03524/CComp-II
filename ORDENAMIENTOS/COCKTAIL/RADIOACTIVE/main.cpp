#include <iostream>

using namespace std;

void swap_p(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void ord_Cocktail(int *a, int n)
{
    bool comp = true;
    int ar_start  = 0;
    int ar_end = n-1;

    while (comp == true)
    {
        comp = false;
        for (int i = ar_start ; i < ar_end; i++){
            if (*(a+i) > *(a+i+1)){
                swap_p(*(a+i), *(a+i+1));
                comp = true;
            }
        }
        if (comp == false){
                break;
        }
        --ar_end;
        comp = false;
        for (int i = ar_end - 1; i >= ar_start ; i--){
            if (*(a+i) > *(a+i+1)){
                swap_p(*(a+i), *(a+i+1));
                comp = true;
            }
        }
        ++ar_start ;
    }
}

void printArray(int *a, int n)
{
    cout << "{ ";
    for (int i=0; i<n; i++){
        cout <<*(a+i)<<" ";
    }
    cout <<"}"<<endl;
}

int main()
{
    int arr[] = {6,7,1,3,2,4};
    //int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int *p = arr;
    cout <<"Array Ingresado :";
    printArray(p,n);
    ord_Cocktail(p,n);
    cout <<"Array Ordenado :";
    printArray(p,n);

    return 0;
}
