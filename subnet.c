#include<stdio.h>
#include<math.h>
#include<stdlib.h>
// subnet address
void subnetadd(int *arr,int *octet){
    int subnet[4];
    for(int i=0;i<4;i++){
        subnet[i] = arr[i] & octet[i];
    }
    printf("%d.%d.%d.%d",subnet[0],subnet[1],subnet[2],subnet[3]);
}
void bintodec(int *bin,int *sub,int n){
    int exponent = 7;
    int decimal=0;
    for (int i = 0; i < 8; i++) {
        sub[0] += bin[i] * pow(2, exponent);
        exponent--;
    }
    // printf("%d ",decimal);
    exponent = 7;
    decimal=0;
    for (int i = 8; i < 16; i++) {
        sub[1] += bin[i] * pow(2, exponent);
        exponent--;
    }
    // printf("%d ",decimal);
    exponent = 7;
    decimal=0;
    for (int i = 16; i < 23; i++) {
        sub[2] += bin[i] * pow(2, exponent);
        exponent--;
    }
    // printf("%d ",decimal);
    exponent = 7;
    decimal=0;
    for (int i = 24; i < 32; i++) {
        sub[3] += bin[i] * pow(2, exponent);
        exponent--;
    }
    // printf("%d ",decimal);
}
void insert1(int *bin,int lenofsubnet){
    for(int i=0;i<lenofsubnet;i++){
        bin[i] = 1;
    }
}
int lenofsubnetid(int len,int numofnets){
    int ans;
    ans = len + log2(numofnets);
    return ans;
}

int lengthofnetid(char class){
    if(class == 'A'){
        return 8;
    }
    else if(class == 'B'){
        return 16;
    }
    else if(class == 'C'){
        return 24;
    }
}
// function to find class
int findclass(int *octet){
    if(octet[0]>=0&&octet[0]<=127){
        return 'A';
    }
    else if(octet[0]>=128&&octet[0]<=191){
        return 'B';
    }
    else if(octet[0]>=192&&octet[0]<=223){
        return 'C';
    }
    else if(octet[0]>=224&&octet[0]<=239){
        return 'D';
    }
}
// function to print octets
void printotc(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
// Function to convert string ip to int ip
void strtoint(char *ip,int *octet){
    int i=0,j=0;
    int count = 0;
    while(ip[i] && count<4){
        if(ip[i]=='.'){
            i++;
        }
        else{
            octet[count] = atoi(&ip[i]);
            count++;
            while(ip[i] && ip[i]!='.'){
                i++;
            }
        }
    }
    // printotc(octet,4);
}

// main function
int main(){
    char ip[15];
    puts("Enter ip address : ");
    gets(ip);
    
    int octet[4];
    strtoint(ip,octet);
    // printotc(octet,4);
    
    char class = findclass(octet);
    // printf("%c",class);

    int len = lengthofnetid(class);

    int numofnets;
    printf("\nEnter number of networks : ");
    scanf("%d",&numofnets);

    int lenofsubnet = lenofsubnetid(len,numofnets);

    int bin[32]={0};
    insert1(bin,lenofsubnet);
    // printotc(bin,32);

    int sub[4]={0};
    bintodec(bin,sub,32);
    printf("\nMask is : ");
    printotc(sub,4);
    printf("\nSubnet address is : ");
    subnetadd(sub,octet);
    return 0;
}