#include<iostream>
using namespace std;
class vehicle{
	public:
		string colour;
		int model;
		int registration_number;
		void inputdetails(){
			
			cout<<"Enter the registration number :\n";
			cin>>registration_number;
			
			cout<<"\nEnter the model of the vehicle :\n";
			cin>>model;
			cout<<"\nEnter the colour of the vehicle :\n";
			cin.ignore();
			getline(cin, colour);
			
				
		}
		void displaydetails(){
			
			cout<<"\nRegistration number :"<<registration_number<<endl;
			cout<<"\nModel :"<<model<<endl;
			cout<<"\nColour :"<<colour<<endl;
			
		}
		
		
	};
	
		class car:public vehicle{
			public:
			int engineCC;
			
			void inputengineCC(){
				
				cout<<"\nEnter the engine size of the car :\n\n";
				cin>>engineCC;
				
				
			}
			
			void displayengineCC(){
			
			
				
				cout<<"\nEngineCC :"<<engineCC<<endl<<endl;
				
			}
	
		};
		class bike:public vehicle{
			public:
				int tyres;
				
			void input(){
				cout<<"\nEnter the number of tyres :"<<endl;
				cin>>tyres;
				
			}
			
			void display(){
			
				cout<<"\nNumber of tyres :"<<tyres<<endl;
			} 
			
		};
		
		class truck:public vehicle{
			
			public:
				int storage;
				
				void inputstorage(){
					
					cout<<"\nEnter the amount of luggae truck can store :";
					cin>>storage;
					
					
				}
				
				void displaystorage(){
					
					cout<<"\nStorage of truck :"<<storage;
					
				}
						
				
		};
		
		int main(){
			car c1;
			c1.inputdetails();
				cout<<"------DETAILS OF THE CAR-------\n";
			c1.displaydetails();
			c1.inputengineCC();
			c1.displayengineCC();
			bike b1;
			b1.inputdetails();
			cout<<"\n------DETAILS OF THE BIKE--------";
			b1.displaydetails();
			b1.input();
			b1.display();
			truck t1;
			t1.inputdetails();
			cout<<"\n-----DETAILS OF THE TRUCK-------";
			t1.displaydetails();
			t1.inputstorage();
			t1.displaystorage();
			return 0;
			
			
		
		}
		
		
		
		
		
		
		
		
		
		
		
		
	
	
