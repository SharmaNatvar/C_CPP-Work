#include<iostream>

using namespace std;

class data{
	private:
		int stu_id;
		char stu_name[50];
		int stu_age;
		char stu_course[100];
		char stu_email[50];
		char stu_city[30];
		char stu_college[100];
	
	public:
		void setter(){
			cout<<"enter your id :";
			cin>>stu_id;
			
			cout<<"enter your name :";
			cin>>stu_name;
			
			cout<<"enter your age :";
			cin>>stu_age;
			
			cout<<"enter your course :";
			cin>>stu_course;
			
			cout<<"enter your email :";
			cin>>stu_email;
			
			cout<<"enter your city :";
			cin>>stu_city;
			
			cout<<"enter your college :";
			cin>>stu_college;
		}
		void getter(){
			cout<<"stu_id : " <<stu_id <<endl;
			cout<<"stu_name : " <<stu_name << endl;
			cout<<"stu_age : " <<stu_age << endl;
			cout<<"stu_email : " <<stu_email << endl;
			cout<<"stu_city : " <<stu_city << endl;
			cout<<"stu_collage : " <<stu_college << endl;
		}
};

int main(){
	int i;
	
	data obj;
	
	for(i=0; i<=4; i++){
		obj.setter();	
	}

	for(i=0; i<=4; i++){
		obj.getter();
	}	
	
	
	return 0;
}
