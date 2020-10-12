#include<bits/stdc++.h>
using namespace std;

int down(vector<int> &v, int num) {
	int lo = 0, hi = v.size() - 1;
	while (lo <= hi) {
		int mid = (lo + hi) / 2;
		if (v[mid] < num) lo = mid + 1;
		else if (v[mid] >= num) hi = mid - 1;
	}
	if (hi < 0) return -1;
	return v[hi];
}

int up(vector<int> &v, int num) {
	int lo = 0, hi = v.size() - 1;
	while (lo <= hi) {
		int mid = (lo + hi) / 2;
		if (v[mid] <= num) lo = mid + 1;
		else if (v[mid] > num) hi = mid - 1;
 	}
	if (lo >= v.size()) return -1;
	return v[lo];
}


int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        int first=down(v,a);
        int second=up(v,a);
        if(first==-1)cout<< "X";
        else cout<< first;
        if(second==-1)cout<< " X"<<endl;
        else cout<< " "<<second<<endl;
    }
}
