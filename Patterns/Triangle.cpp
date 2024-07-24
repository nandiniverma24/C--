//https://www.naukri.com/code360/problems/triangle_6573690?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM

#include<bits/stdc++.h>
using namespace std;

void triangle(int n) {
	// Write your code here
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
}

int main()
{
    int n;
    cin>>n;

    triangle(n);

    return 0;
}
