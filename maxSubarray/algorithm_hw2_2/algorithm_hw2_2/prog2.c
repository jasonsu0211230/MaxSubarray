//
//  main.c
//  algorithm_hw2_2
//
//  Created by 蘇振瑋 on 2016/4/5.
//  Copyright © 2016年 蘇振瑋. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int findmax(int *a,int left,int right){
    
    if(right==left)return a[left];
    int middle=(left+right)/2;
    int leftans=findmax(a,left,middle);
    int rightans=findmax(a, middle+1, right);
    int leftmax=a[middle];
    int rightmax=a[middle+1];
    int sum=0;;
    int i=0;
    for(i=middle;i>=left;i--){
        sum=sum+a[i];
        if(sum>leftmax)leftmax=sum;
    }
    sum=0;
    for(i=middle+1;i<=right;i++){
        sum=sum+a[i];
        if(sum>rightmax)rightmax=sum;
    }
    if(rightans>leftans){
        if(rightans>rightmax+leftmax) return rightans;
        else return rightmax+leftmax;
    }
    else {
        if(leftans>rightmax+leftmax) return leftans;
        else return rightmax+leftmax;
    }
}
int main(int argc, const char * argv[]) {
    int b[10000];
    int n=0;
    
   
    
    int max=0;
    while(scanf("%d",&b[n])){
        if(b[n]==120)break;
        n++;
    }
    max=findmax(b,0,n-1);
    printf("%d\n",max);

    return 0;
}
