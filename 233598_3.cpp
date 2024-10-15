#include<iostream>
using namespace std;
int main()
{   
	double english_marks,physics_marks,urdu_marks,average_marks_of_english,average_marks_of_physics,average_marks_of_urdu,average,total_marks_of_three_subjects;
	const int total_marks=100;
	
	cout<<"enter english marks: ";
	cin>>english_marks;
	cout<<"enter physics marks: ";
	cin>>physics_marks;
	cout<<"enter urdu marks: ";
	cin>>urdu_marks;
	
	total_marks_of_three_subjects=(english_marks+physics_marks+urdu_marks);

    average=(total_marks_of_three_subjects*100)/300;
    cout<<"average: "<<average<<endl;
    
    if(average>=90)
    {cout<<"A";
	}
    else if(average>=80)
    {cout<<"B";
	}
	else if(average>=70)
	{cout<<"C";
	}
	else if(average>=60)
	{cout<<"D";
    }
	else if(average<60)
	{ cout<<"F";
	}
	
}
