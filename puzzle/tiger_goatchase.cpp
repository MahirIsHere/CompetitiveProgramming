#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int main() {
    /*
	int goat1pos =1,2,3,4,5,6,7,8;
	int goat2pos =1,2,3,4,5,6,7,8;
	int goat3pos =1,2,3,4,5,6,7,8;
	int tigerpos =1,2,3,4,5,6,7,8;
	*/
	int goat1pos,goat2pos,goat3pos;
	int newgoat1pos,newgoat2pos,newgoat3pos,newtigerpos;
	int currenttigerpos,currentgoat1pos,currentgoat2pos,currentgoat3pos;
	
	string tiger,goat1,goat2,goat3;
	string startingposition,chosenanimal;
	
		cout<<"Enter goat starting position: left or right"<<endl;
		cin>>startingposition;
		if (startingposition=="right") {
			newgoat1pos = 6;
			newgoat2pos = 7;
			newgoat3pos = 8;
			
		cout<<"Which moves first tiger or goat"<<endl;
		cin>>chosenanimal;

		if((startingposition=="right" && chosenanimal=="tiger")) {
			cout<<"Enter position of tiger"<<endl;
			cin>>newtigerpos;
	
		if((newtigerpos>9)&&(newtigerpos==6||7||8)) {
			cout<<"invalidposition for tiger"<<endl;
			}
			else {
			cout<<"tiger position is: "<<newtigerpos<<endl; 
			cout<<"goat positions are: "<<"goat1 = "<<newgoat1pos<<" goat2 = "<<newgoat2pos<<" goat3 = "<<newgoat3pos<<endl;
			}
        };
        
        if(startingposition=="right" && chosenanimal=="goat") {
			cout<<"Enter position of goat1"<<endl;
			cin>>newgoat1pos;	
			if(newgoat1pos>9) {
			cout<<"invalid position"<<endl;
			}
			
			if (newgoat1pos = 6) {
				cout<<"aready existing"<<endl;
			}
			
			if(newgoat1pos =7||8) {
				cout<<"goat unit existing"<<endl;
			}
			
			else {
				cout<<"goat position is moved to: "<<newgoat1pos<<endl;
			}
        };
			
if (startingposition=="left") {
			newgoat1pos = 1;
			newgoat2pos = 2;
			newgoat3pos = 3;
		cout<<"Which moves first tiger or goat"<<endl;
		
		if(startingposition=="left" && chosenanimal=="tiger") {
			cout<<"Enter position of tiger"<<endl;
			cin>>newtigerpos;
		}
			if((newtigerpos>9)&&(newtigerpos==1||2||3)) {
			cout<<"invalidposition for tiger"<<endl;
			}
			
			else {
			cout<<"tiger position is: "<<newtigerpos<<endl;
			cout<<"goat positions are: "<<"goat1 = "<<newgoat1pos<<" goat2 = "<<newgoat2pos<<" goat3 ="<<newgoat3pos<<endl;
			}
};
			
			if(startingposition=="left" && chosenanimal=="goat") {
			cout<<"Enter position of goat1"<<endl;
			cin>>newgoat1pos;

			 if(newgoat1pos>9) {
			cout<<"invalidposition"<<endl;
			}
			 if (newgoat1pos = 1) {
				cout<<"aready existing"<<endl;
			}
			 if(newgoat1pos =2||3) {
				cout<<"goat unit existing"<<endl;
			}
			else {
				cout<<"goat position is moved to: "<<newgoat1pos<<endl; 
			    }
            };
            
            
	//moving the pieces right side;
	//tiger turn first
	
	cout<<"Tiger's first turn"<<endl;
		if(startingposition=="right" && chosenanimal=="tiger" && newtigerpos==4) {
	cout<<"currentpostion of tiger = "<<newtigerpos<<endl;
	cout<<"Enter new tiger position "<<endl;
	cin>>currenttigerpos;
	 if((currenttigerpos==3)||(currenttigerpos==5)) {
	    cout<<"valid move "<<" tiger moved to"<<currenttigerpos<<endl;
			cout<<"goat positions are: "<<"goat1 ="<<newgoat1pos<<" goat2 = "<<newgoat2pos<<" goat3 = "<<newgoat3pos<<endl;
	}
	else {
	    cout<<"invalid position"<<endl;
	    return 1;
	    }
	    swap(currenttigerpos,newtigerpos);
    }
    
    if(startingposition=="right" && chosenanimal=="tiger" && newtigerpos==5) {
	cout<<"currentpostion of tiger = "<<newtigerpos<<endl;
	cout<<"Enter new tiger position "<<endl;
	cin>>currenttigerpos;
	 if((currenttigerpos==3)||(currenttigerpos==4)) {
	    cout<<"valid move "<<" tiger moved to "<<currenttigerpos<<endl;
			cout<<"goat positions are: "<<"goat1 ="<<newgoat1pos<<" goat2 = "<<newgoat2pos<<" goat3 = "<<newgoat3pos<<endl;
	}
	else {
	    cout<<"invalid position"<<endl;
	    return 1;
	    }
	    swap(currenttigerpos,newtigerpos);
    }
    cout<<"End of Turn"<<endl;
    
  //always win condition if tiger's first move is 4->5 or 5->4 because 1 goat has to move in these position
    cout<<"Goat's 1st turn"<<endl;
    if(startingposition=="right" && chosenanimal=="tiger" && newgoat1pos==6) {
    cout<<"Enter Goat1 position "<<endl;
	cin>>currentgoat1pos;
	 if((currentgoat1pos==4)||(currentgoat1pos==5)) {
	    cout<<"valid move "<<" goat1 moved to ="<<currentgoat1pos<<endl;
			cout<<"new goat positions are: "<<"goat1 ="<<currentgoat1pos<<" goat2 = "<<newgoat2pos<<" goat3 = "<<newgoat3pos<<endl;
	}
	if ((currentgoat1pos==6)||(currentgoat1pos==7)||(currentgoat1pos==8)) {
	    cout<<"Invalid and overlaps other goats";
	    return 1;
	}
	if (newtigerpos==currentgoat1pos) {
	    cout<<"goat1 is killed"<<endl;
	    cout<<"tiger wins"<<endl;
	    swap(currentgoat1pos,newgoat1pos);
	    cout<<"valid move "<<" tiger moved to = "<<currenttigerpos<<endl;
	    cout<<"GAME ENDED"<<endl;
	    return 1;
	}
	    swap(currentgoat1pos,newgoat1pos);
	   
    }
	    cout<<"Goat's turn ended"<<endl;
	    
	    cout<<"Tiger's 2nd turn"<<endl;
	    if(startingposition=="right" && chosenanimal=="tiger" && newtigerpos== 3) {
	cout<<"currentpostion of tiger = "<<newtigerpos<<endl;
	cout<<"Enter new tiger position "<<endl;
	cin>>currenttigerpos;
	 if((currenttigerpos==1)||(currenttigerpos==2)||(currenttigerpos==4)||(currenttigerpos==5)) {
	    cout<<"valid move "<<" tiger moved to +"<<currenttigerpos<<endl;
			cout<<"goat positions are: "<<"goat1 ="<<newgoat1pos<<" goat2 = "<<newgoat2pos<<" goat3 = "<<newgoat3pos<<endl;
	}
	else {
	    cout<<"invalid position"<<endl;
	    return 1;
	    }
	    swap(currenttigerpos,newtigerpos);
    }
    if(startingposition=="right" && chosenanimal=="tiger" && newtigerpos== 4) {
	cout<<"currentpostion of tiger = "<<newtigerpos<<endl;
	cout<<"Enter new tiger position "<<endl;
	cin>>currenttigerpos;
	 if((currenttigerpos==3)||(currenttigerpos==5)||(currenttigerpos==6)) {
	    cout<<"valid move "<<" tiger moved to +"<<currenttigerpos<<endl;
			cout<<"goat positions are: "<<"goat1 ="<<newgoat1pos<<" goat2 = "<<newgoat2pos<<" goat3 = "<<newgoat3pos<<endl;
	}
	if ((newgoat1pos-newgoat2pos==1)||(newgoat1pos-newgoat3pos==1)||(newgoat2pos-newgoat3pos==1)) {
	    cout<<"tiger can not take the kill"<<endl;
	}
	    else {
	        cout<<"invalid output"<<endl;
	        return 1;
		}
	    swap(currenttigerpos,newtigerpos);
    }
        cout<<"End of Tiger's 2nd Turn"<<endl;
		
		cout<<"Goat's 2nd turn"<<endl;
    if(startingposition=="right" && chosenanimal=="tiger" && newgoat1pos==4) {
    cout<<"Enter Goat1 position "<<endl;
	cin>>currentgoat1pos;
	 if((currentgoat1pos==3)||(currentgoat1pos==5)||(currentgoat1pos==6)) {
	    cout<<"valid move "<<" goat1 moved to ="<<currentgoat1pos<<endl;
			
	}
	cout<<"Enter Goat2 position "<<endl;
	if(startingposition=="right" && chosenanimal=="tiger" && newgoat2pos==7) {
	cin>>currentgoat2pos;
	 if(currentgoat2pos==6) {
	    cout<<"valid move "<<" goat2 moved to ="<<currentgoat2pos<<endl;
			
	}
	}
	cout<<"Enter Goat3 position "<<endl;
	cin>>currentgoat3pos;
	if(startingposition=="right" && chosenanimal=="tiger" && newgoat3pos==8) {
	 if(currentgoat3pos==6) {
	     cout<<"Enter Goat1 position "<<endl;
	}
	}
	
	if(currentgoat1pos==currentgoat2pos==currentgoat3pos) {
	    cout<<"invalid another on node"<<endl;
	    return 0;
	}
	cout<<"new goat positions are: "<<"goat1 ="<<currentgoat1pos<<" goat2 = "<<newgoat2pos<<" goat3 = "<<newgoat3pos<<endl;
	if (newtigerpos==currentgoat1pos) {
	    cout<<"goat1 is killed"<<endl;
	    cout<<"tiger wins"<<endl;
	    swap(currentgoat1pos,newgoat1pos);
	    cout<<"valid move "<<" tiger moved to = "<<currenttigerpos<<endl;
	    cout<<"GAME ENDED"<<endl;
	    return 1;
	}
	    swap(currentgoat1pos,newgoat1pos);
	    swap(currentgoat2pos,newgoat2pos);
	    swap(currentgoat3pos,newgoat3pos);
	   
    }
	    cout<<"Goat's turn ended"<<endl;
		}
	    //goat's turn first
	    if(startingposition=="right" && chosenanimal=="goat" && newgoat1pos==6) {
			cout<<"Enter new position of goat1"<<endl;
			cin>>newgoat1pos;
			
			if (newgoat1pos = 6) {
				cout<<"aready existing"<<endl;
			}
			
			if(newgoat1pos =7||8) {
				cout<<"goat unit existing"<<endl;
			}
			
			else {
				cout<<"goat position is moved to: "<<newgoat1pos<<endl;
			}
				if(newgoat1pos>9) {
			cout<<"invalid position"<<endl;
			}
        }
 return 0;
};


/*pseudo for checking goat wins*/
/*
void goatWinningCondition (currenttigerpos,currentgoat1pos,currentgoat2pos,currentgoat3pos) {
if((currenttigerpos ==1)&&(currentgoat1pos ==2)||(currentgoat2pos==3)||(currentgoat3pos==4)) {
cout<<"goat wins"<<endl;
if((currenttigerpos==2)&&(currentgoat1pos ==1)||(currentgoat2pos==3)||(currentgoat3pos==5))
cout<<"goat wins"<<endl;
if(currenttigerpos==4)&&(currentgoat1pos ==3)||(currentgoat2pos==5)||(currentgoat3pos==6))
cout<<"goat wins"<<endl;
if(currenttigerpos==5)&&(currentgoat1pos ==3)||(currentgoat2pos==4)||(currentgoat3pos==6))
cout<<"goat wins"<<endl;
if(currenttigerpos==7)&&(currentgoat1pos ==4)||(currentgoat2pos==6)||(currentgoat3pos==8))
cout<<"goat wins"<<endl;
if(currenttigerpos==8)&&(currentgoat1pos ==5)||(currentgoat2pos==6)||(currentgoat3pos==7))
cout<<"goat wins"<<endl;

 }
 }
    */