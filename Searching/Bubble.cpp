//
// Created by laphv on 12/12/2024.
#include<bits/stdc++.h>

int main(){
    int n;
    std::cin >> n;
    int a[n];
    for(int i =0;i< n;i++)
        std::cin>> a[i];

    for (int i = 0; i < n; i++)
        for (int j = 0 ; j < n - 1; j++)
            if(a[j] > a[j+1])
                std::swap(a[j], a[j+1]);
    
    for(int i =0;i< n;i++)
        std::cout<< a[i]<<' ';
}
