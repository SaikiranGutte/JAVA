#include <iostream>
using namespace std; 
    
int main(){
    int subjects, i;  
     float m1,m2,m3,m4,m5;
         cout << "Enter marks in m1\n";  
          cin >> m1;  
             if(m1>100) {
    	       for(m1=101;m1>=101;m1++){
               cout<<"marks cannot exceed 100\n";
               cout<<"enter valid marks of m1\n";
               cin >> m1;
               if(m1<=100) {
                 cout<<"Enter marks in m2\n";
                 break;
                           }
                                       }
    	                }
           else {
               cout<<"Enter marks in m3\n";
                }
         cin>>m3;
             if(m3>100) {
    	       for(m3=101;m3>=101;m3++) {
               cout<<"marks cannot exceed 100";
               cout<<"enter valid marks m3\n";
                cin>>m3;
               if(m3<=100) {
                 cout<<"enter marks obtained in m4\n";
                  break;
                           }
                                        }
                   
                       }                          
             else {
               cout<<"enter marks obtained in m4\n";
                    }
         cin>>m4;
             if(m4>100) {
    	       for(m4=101;m4>=101;m4++) {
                cout<<"marks cannot exceed 100\n";
                cout<<"enter valid marks of m4\n";
                cin>>m4;
                 if(m4<=100) {
                    cout<<"enter marks obtained in m5\n";
                     break;
                             }
                                        }
                         }
             else {
              cout<<"enter marks obtained in m5\n";
                  }
         cin>>m5;
             if(m5>100) {
    	        for(m5=101;m5>=101;m5++) {
                cout<<"marks cannot exceed 100\n";
                cout<<"enter valid marks of m5\n";
                cin>>m5;
                  if(m5<=100) {
 	                int agr = m1 + m2 + m3 + m4 + m5;
	                float per = (float)agr/5;
            cout<<"\nAggregate marks are :\n"<<agr<< " and percentage is \n"<<per;   
                break;
                               }	 
                                         }
                       }
            else {
    	        int agr = m1 + m2 + m3 + m4 + m5;
    	        float per = (float)agr/5;
                cout<<"\nAggregate marks are :\n"<<agr<< " and percentage is \n"<<per;     
   
                }
              		   
                        
         
	        
	           	  
     


    
    
} 
 