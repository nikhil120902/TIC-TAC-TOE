 #include<bits/stdc++.h>

using namespace std;
  
#define  rep(i,a,b) for(int i=a;i<b;i++)
 
char a[9];
char pleyer_turn ='X'; 
void display(){
	
     cout<<"      |     tik tok tik     | "<<endl; 
	cout<<"           "<<a[1]<<" "<<a[2]<<" "<<a[3]<<endl;
	cout<<"           "<<a[4]<<" "<<a[5]<<" "<<a[6]<<endl;
	cout<<"           "<<a[7]<<" "<<a[8]<<" "<<a[9]<<endl;

}
 int player(){
  
if(a[1]==a[2]&&a[2]==a[3]||a[4]==a[5]&&a[5]==a[6]||a[7]==a[8]&&a[8]==a[9]||a[1]==a[4]&&a[4]==a[7]||a[2]==a[5]&&a[5]==a[8]||a[3]==a[6]&&a[6]==a[9]||a[1]==a[5]&&a[5]==a[9]||a[3]==a[5]&&a[5]==a[7])
{
 		if(pleyer_turn=='X'){
 				cout<<"player[O] is win "<<endl;
 				  
 				return 0;
			  	 
 
		 }	
		 else{
 				cout<<"player[X] is win "<<endl;
 			 
 			 return 0;
 	 
 				
		 }
 		
	 
}
	else{
	
 	if(pleyer_turn=='X' ){
 		cout<<"player[X] ";
 		int s;
 		cin>>s;
 		if(a[s]!='O'||a[s]!='X'){
		 
 		a[s]='X';
 		pleyer_turn='O';
 }
 else{
 	cout<<"player[X] ";
 	pleyer_turn='X';
 }
 		 display();
   player();
	 }
 else {
	 		cout<<"player[O] ";
	 			int s;
 		cin>>s;
 			if(a[s]!='O'||a[s]!='X'){
			 
 		a[s]='O';
 		pleyer_turn='X';
 }
 else{
 	pleyer_turn='O';
 }
 		 display();
   player();
	 }
}
}
  
signed main(){
 
	rep(i,1,10){
	a[i]='0'+i;
	}
 	
   display();
   player();
  

    return 0;
}
