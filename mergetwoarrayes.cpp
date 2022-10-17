#include<bits/stdc++.h>
using namespace std;

int a1[]={14,7,3,12};
int s1=sizeof(a1)/sizeof(a1[0]);
int a2[]={9,11,6,2};
int s2=sizeof(a2)/sizeof(a2[0]);
vector<int>v;
int j=0,i=0;
 
int main(){
	
	int len=s1+s2;
	
	while(v.size() <= len){
		
			if(a1[i]==a2[j]){
				
				v.push_back(a1[i]);
				v.push_back(a2[j]);
				
				i++;
				j++;
				
				continue;
			}
			else if(  a1[i] <a2[j] ){
				
				v.push_back(a1[i]);
				i++;
			    continue;
			    
			}else{
				if(a2[j] < a1[i] ){
					
				v.push_back(a1[j]);
				j++;
				continue;
				
				}
			
			}
		}

	
	for(int k =0 ; k<v.size() ; k++)
	cout<<v[k]<<" ";
	
	return 0;
}
