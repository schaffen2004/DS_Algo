#include<bits/stdc++.h>

int main(){
    int n;
    std::cin >> n;
    int a[n];
    for(int i =0;i<n;i++)
        std::cin>> a[i];

    for(int i = 1;i<n;i++)
    {
        // check location for i
        int j = i;
        while(j > 0 && a[i]<a[j-1]) j--;

        int temp = a[i];
        for(int k = i;k > j;k--)
            a[k]= a[k-1];
        a[j] = temp;
    }
    for(int i =0;i< n;i++)
        std::cout<< a[i]<<' ';
}