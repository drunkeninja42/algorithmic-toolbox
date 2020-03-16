#include <iostream>
#include<stdio.h>
#include<vector>
#include<cmath>
#include<string>
#include<bits/stdc++.h>
using namespace std;
long long maxwiseproduct(const vector<long long> &numbers )
{
    long long result = 0;
    int n = numbers.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(numbers[i]*numbers[j]>result)
            {
                result = numbers[i]*numbers[j];
            }
        }
    }
    return result;
}

long long maxwiseproduct_fast(vector<long long> &numbers)
{
    int n = numbers.size();
    int max_index_1 = -1;
    for(int i =0;i<n;i++)
    {
        if((max_index_1 == -1)||(numbers[i]>numbers[max_index_1]))
        {
            max_index_1 = i;
        }
    }
    int max_index_2 = -1;
    for(int j=0;j<n;j++)
    {
        if((j!=(max_index_1))&&((max_index_2 == -1)||(numbers[j]>numbers[max_index_2])))
        {
            max_index_2 = j;
        }
    }
    return numbers[max_index_1] * numbers[max_index_2];
}



int main()
{
    int n;
    cin>>n;
    vector<long long> numbers(n) ;
    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }
    long long answer_1 = maxwiseproduct_fast(numbers);
    cout<<answer_1;
}