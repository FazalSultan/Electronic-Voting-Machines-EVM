#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Election{
private:
//  string P1="Now total Votes of PTI: ";
//  string P2="Now total Votes of PML: ";
//  string P3="Now total Votes of ANP: ";
//  string P4="Now total Votes of JUI: ";
//  string P5="Now total Votes of PPP: ";
  string Name;
  int total;
  string CNIC_No;
  int Age;
  char Gender;
  int Party;
public:
  int set_data(){
  cout<<"Enter Your Name: ";
  getline(cin,Name);
  int count = 0;
  for(int i=0;i < Name.length();i++){
  	if ((Name[i]>=97 && Name[i]<=122) || (Name[i] == 32) || 	(Name[i]>=65 && Name[i]<=90)){
  	count++;
	  }
  }
  if(count == Name.length()){
  	cout << "You Enter the valid Name " << endl;
  }
  else{
  	cout << "You Entered the invalid Name " << endl;
  	return 0;
  }				
  cout<<"Enter Your CNIC No: ";
  cin>>CNIC_No;
//  cout<<CNIC_No.length()<<endl;
//  cout<<CNIC_No[5]<<endl;
//  cout<<CNIC_No[13]<<endl;
  int count1 = 0;
  if(CNIC_No.length() != 15 && CNIC_No[13] != 45 && CNIC_No[5] != 45){
  	cout << "You Entered the Invalid CNIC Number"<<endl;
  }
  else{
  	for(int i = 0; i < CNIC_No.length(); i++){
  		if( i == 13 || i == 5){
       		continue;
		  }
		  
		  if(CNIC_No[i] >= 48 && CNIC_No[i] <= 57){
		  	count1++;
		  }
	  }
  }
  count1 += 2;
  if(count1 == CNIC_No.length()){
  	cout << "You Entered valid NIC Number " << endl;
  }
  else{
  	cout << "You Entered invalid NIC Number " << endl;
  	return 0;
  }
  cout<<"Enter Your Age: ";
  cin>>Age;
  if(Age>=18){
  	cout<<"You Are Eligebale for Casting Vote"<<endl;
  }
  else{
  	cout<<"You Are Not Eligebale for Casting Vote"<<endl;
  	return 0;
  }
  cout<<"Enter Your Gender: ";
  cin>>Gender;
  if(Gender=='F' || Gender=='f'|| Gender=='M' || Gender=='m'){
  	cout<<"OK"<<endl;
  }
  else{
  	cout<<"Something went wrong";
  	return 0;
  }
  	cout<<"\t\t\t---------------------------------------------------------------"<<endl;
  	cout<<"\t\t\t\tYour personal Information Are accepted Sucessfully:"<<endl;
  	cout<<"\t\t\t---------------------------------------------------------------"<<endl;
	}
	void PTI()
	{
		string line;
		string total_int = "";
	total = 0;
	ofstream f1, t;
	ifstream f2;
	f2.open("PTItotal.txt");
	if(!f2){
		t.open("PTItotal.txt");
		t << "Total votes Of PTI: " << 1 << endl;
		t.close();
//		t.open("PTItotal.txt",ios::trunc);
//        t.close();
	}
	else{
		
		int dum;
		getline(f2, line);
		for(int i = 0;i < line.length(); i++){
			if(line[i] >= 48 && line[i] <= 57){
				total_int += line[i];
			}
		}
		
		for(int i = 0; i < total_int.length(); i++){
			dum = int(total_int[i]) - 48;
			total = (total* 10) + dum;
		}
		t.open("PTItotal.txt");
		t << "Total votes Of PTI: " << total+1 << endl;
		t.close();
//		t.open("PTItotal.txt",ios::trunc);
//        t.close();
	}
    f1.open("PTI.txt",ios::app);
    f1<<Name<<endl;
    f1<<CNIC_No<<endl;
    f1.close();
//    f1.open("PTI.txt",ios::trunc);
//    f1.close();
    
//    f1.open("PTI.txt",ios::trunc);
//    f1.close();
//    f1.open("PTIvote.txt");
//    f1<< total << "\n";
//    f1.close();
    
	}
	void PML()
	{
    string line;
	string total_int = "";
	total = 0;
	ofstream f1, t;
	ifstream f2;
	f2.open("PMLtotal.txt");
	if(!f2){
		t.open("PMLtotal.txt");
		t << "Total Votes Of PML(N):"<<1<< endl;
		t.close();
//		t.open("PMLtotal.txt",ios::trunc);
//        t.close();
	}
	else{
		
		int dum;
		getline(f2, line);
		for(int i = 0;i < line.length(); i++){
			if(line[i] >= 48 && line[i] <= 57){
				total_int += line[i];
			}
		}
		
		for(int i = 0; i < total_int.length(); i++){
			dum = int(total_int[i]) - 48;
			total = (total* 10) + dum;
		}
		t.open("PMLtotal.txt");
		t << "Total Votes Of PML(N):"<< total+1 << endl;
		t.close();
//		t.open("PMLtotal.txt",ios::trunc);
//        t.close();
	}
    f1.open("PML(N).txt",ios::app);
    f1<<Name<<endl;
    f1<<CNIC_No<<endl;
    f1.close();
//    f1.open("PML(N).txt",ios::trunc);
//    f1.close();

//	total = 0;
//	total += 1;
//    f2.open("PMLvote.txt");
//    f2<< total << "\n";
//    f2.close();
    	
	}
	void ANP()
	{
    string line;
	string total_int = "";
	total = 0;
	ofstream f1, t;
	ifstream f2;
	f2.open("ANPtotal.txt");
	if(!f2){
		t.open("ANPtotal.txt");
		t << "Total Votes Of ANP: " << 1 << endl;
		t.close();
//		t.open("ANPtotal.txt",ios::trunc);
//        t.close();
	}
	else{
		
		int dum;
		getline(f2, line);
		for(int i = 0;i < line.length(); i++){
			if(line[i] >= 48 && line[i] <= 57){
				total_int += line[i];
			}
		}
		
		for(int i = 0; i < total_int.length(); i++){
			dum = int(total_int[i]) - 48;
			total = (total* 10) + dum;
		}
		t.open("ANPtotal.txt");
		t << "Total Votes Of ANP: " << total+1 << endl;
		t.close();
//		f1.open("ANPtotal.txt",ios::trunc);
//        f1.close();
	}
    f1.open("ANP.txt",ios::app);
    f1<<Name<<endl;
    f1<<CNIC_No<<endl;
    f1.close();
//    f1.open("ANP.txt",ios::trunc);
//    f1.close();
//    total = 0;
//	total += 1;
//    f3.open("ANPvote.txt");
//    f3<< total << "\n";
//    f3.close();
	}
	void JUI()
	{
	string line;
	string total_int = "";
	total = 0;
	ofstream f1, t;
	ifstream f2;
	f2.open("JUItotal.txt");
	if(!f2){
		t.open("JUItotal.txt");
		t << "Total Votes Of JUI: " << 1 << endl;
		t.close();
//		t.open("JUItotal.txt",ios::trunc);
//        t.close();
	}
	else{
		
		int dum;
		getline(f2, line);
		for(int i = 0;i < line.length(); i++){
			if(line[i] >= 48 && line[i] <= 57){
				total_int += line[i];
			}
		}
		
		for(int i = 0; i < total_int.length(); i++){
			dum = int(total_int[i]) - 48;
			total = (total* 10) + dum;
		}
		t.open("JUItotal.txt");
		t << "Total Votes Of JUI: " << total+1 << endl;
		t.close();
//		t.open("JUItotal.txt",ios::trunc);
//        t.close();
		
	}
    f1.open("JUI.txt",ios::app);
    f1<<Name<<endl;
    f1<<CNIC_No<<endl;
    f1.close();
//    f1.open("JUI.txt",ios::trunc);
//    f1.close();
//    total = 0;
//	total += 1;
//    f4.open("JUIvote.txt");
//    f4<< total << "\n";
//    f4.close();
	}
	void PPP()
	{
	string line;
	string total_int = "";
	total = 0;
	ofstream f1, t;
	ifstream f2;
	f2.open("PPPtotal.txt");
	if(!f2){
		t.open("PPPtotal.txt");
		t << "Total Votes Of PPP: " << 1 << endl;
		t.close();
//		t.open("PPPtotal.txt",ios::trunc);
//        t.close();  
	}
	else{
		
		int dum;
		getline(f2, line);
		for(int i = 0;i < line.length(); i++){
			if(line[i] >= 48 && line[i] <= 57){
				total_int += line[i];
			}
		}
		
		for(int i = 0; i < total_int.length(); i++){
			dum = int(total_int[i]) - 48;
			total = (total* 10) + dum;
		}
		t.open("PPPtotal.txt");
		t << "Total Votes Of PPP: " << total+1 << endl;
		t.close();
//		t.open("PPPtotal.txt",ios::trunc);
//        t.close();
	}

 
    f1.open("PPP.txt",ios::app);
    f1<<Name<<endl;
    f1<<CNIC_No<<endl;
    f1.close();
//    f1.open("PPP.txt",ios::trunc);
//    f1.close();
}
void final()
 {
    string line1;
    string line2;
    string line3;
    string line4;
    string line5;
	ifstream c1;
	c1.open("PTItotal.txt");
	getline(c1,line1);
	c1.close(); 
	
	ifstream c2;
	c2.open("PMLtotal.txt");
	getline(c2,line2);
	c2.close(); 
	
	ifstream c3;
	c3.open("ANPtotal.txt");
	getline(c3,line3);
	c3.close(); 
	
	ifstream c4;
	c4.open("JUItotal.txt");
	getline(c4,line4);
	c4.close(); 
	
	ifstream c5;
	c5.open("PPPtotal.txt");
	getline(c5,line5);
	c5.close(); 
	
	ofstream j1;
	j1.open("ResultCard.txt",ios::app);
	j1<<"****------------------------------------ Welcome To Result Card------------------------------------****"<<endl;
//	j1.close();
//	j1.open("ResultCard.txt",ios::trunc);
	j1<<line1<<endl;
	j1<<line2<<endl;
	j1<<line3<<endl;
	j1<<line4<<endl;
	j1<<line5<<endl;
	j1.close();
	
	
//    total = 0;
//	total += 1;
//    f5.open("PPPvote.txt");
//    f5<< total << "\n";
//    f5.close();
}
		
};
int main()
{
	Election p1;
	
  	cout<<"\t\t\t---------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\tWELCOME TO ELECTRONIC VOTING SYSTEM"<<endl;
  	cout<<"\t\t\t---------------------------------------------------------------"<<endl;
  
int Q=p1.set_data();
if (Q==0){
	return 0;
}
cout<<"\t\t\t---------------------------------------------------------------"<<endl;
cout<<"\t\t\tThis is The List of The Following Parties And select Your Party:"<<endl;
cout<<"\t\t\t---------------------------------------------------------------"<<endl;
cout<<"PRESS 1 for PTI"<<endl;
cout<<"PRESS 2 for PML(N)"<<endl;
cout<<"PRESS 3 for ANP"<<endl;
cout<<"PRESS 4 for JUI"<<endl;
cout<<"PRESS 5 for PPP"<<endl;
cout<<endl;
int Party;
cout<<"Enter Your Party Name: ";
cin>>Party;
switch(Party){
	case 1:
	cout<<"You Casted the Vote to PTI";
	p1.PTI ();
	break;
	case 2:
	cout<<"You Casted the Vote to PML(N)";
	p1.PML();
	break;
	case 3:
	cout<<"You Casted the Vote to ANP";
	p1.ANP();
	break;
	case 4:
	cout<<"You Casted the Vote to JUI";
	p1.JUI();
	break;
	case 5:
	cout<<"You Casted the Vote to PPP";
	p1.PPP();
	break;
	default:
	cout<<"You Entered the Wrong Digits Sorry";
}
p1.final();

}

