#include<iostream>
using namespace std;
 
 class quiz
 {
    int count;
    int count1;   //related to technical background
    int count2;   //arts background
    int count3;   //health background
    
    public :      
    
    quiz()        //default constructor
    {
        count=0;
        count1=0;
        count2=0;
        count3=0;
    }

    void question()
    {
    
    cout<<endl<<endl<<"Enter answer from 1 to 5"<<endl;
    cout<<endl<<"How would you rate your ablility to analyze and solve complex technical problem ?: "<<endl;
    repeat();
    count1=count1+count;
    
    cout<<endl<<endl<<"Enter answer from 1 to 5"<<endl<<endl;
    cout << "What is your opinion about your skills at creativity and innovation of new things?Rate according to options? " << endl;
    
    repeat();
    count2=count2+count;


    cout<<endl<<endl<<"Enter answer from 1 to 5"<<endl;
    
    cout << "Do you like  to know or are interested about our human body system?" << endl;
    
    repeat();
    count3=count3+count;
    
    cout<<endl<<endl<<"Enter answer from 1 to 5"<<endl;
    cout << "Do you have a keen interest in creative writing or any artistic skills?" << endl;
    
    repeat();
    count2=count2+count;

    cout<<endl<<endl<<"Enter answer from 1 to 5"<<endl;
    cout << "Do you like to take care of your family,friends when they are ill or are suffering from any disease?" << endl;
    
   repeat();
    count3=count3+count;


    cout<<endl<<endl<<"Enter answer from 1 to 5"<<endl;
    cout << "Are you fond of exploring new updations related to technical areas?" << endl;
    
    repeat();
    count1=count1+count;

     cout<<endl<<endl<<"Enter answer from 1 to 5"<<endl;
    cout << " Are you interested in singing or dancing or any other similar hobbies?" << endl;
    
    repeat();
    count2=count2+count;
    
     cout<<endl<<endl<<"Enter answer from 1 to 5"<<endl;
    cout << "Do you have any interest in any of the programming language?" << endl;
    
    repeat();
    count1=count1+count;
    
     cout<<endl<<endl<<"Enter answer from 1 to 5"<<endl;
    cout << "Are you quite good at understanding medical terms?" << endl;
    
    repeat();
    count3=count3+count;
    
     cout<<endl<<endl<<"Enter answer from 1 to 5"<<endl;
    cout << "Do you like to do painting?" << endl;
    
    repeat();
    count2=count2+count;
    
     cout<<endl<<endl<<"Enter answer from 1 to 5"<<endl;
    cout << "Are you curious about the human body system and their functions?" << endl;
    
    repeat();
    count3=count3+count;
    
     cout<<endl<<endl<<"Enter answer from 1 to 5"<<endl;
    cout << "Do you take care of animals? and are very fond of them and want to work for their health?" << endl;
    repeat();
    count3=count3+count;
    
     cout<<endl<<endl<<"Enter answer from 1 to 5"<<endl;
    cout << "Are you capable of analyzing the problems or any querries related to technical things only?" << endl;
    repeat();
    count1=count1+count;
    
    cout<<endl<<endl<<"Enter answer from 1 to 5"<<endl;
    cout << "Are you good at Maths problems?" << endl;
    repeat();
    count1=count1+count;
    
     cout<<endl<<endl<<"Enter answer from 1 to 5"<<endl;
    cout << "Are you a creative person?" << endl<<endl;
    repeat();
    count2=count2+count;
    }
    

    void result()
    {
        float per1,per2,per3;
        int n=25;
        // n=count1+count2+count3;
        per1=(count1*100)/n;
        cout<<endl<<endl<<"Your Alignment towards Technical sector in percentage : %"<<per1<<endl;
        per2=(count2*100)/n;
        cout<<"Your Alignment towards Arts sector in percentage:  %"<<per2<<endl;
        per3=(count3*100)/n;
        cout<<"Your Alignment towards Health sector in percentage:  %"<<per3<<endl;
        
        if(count1>count2 && count1>count3)
        {
                
                repeatres("Technical");
                cout<<"1.Engineering"<<endl<<"2.Software development"<<endl<<"3.Cyber security"<<endl<<"4.Information technology(IT)"<<endl<<"5.Aritificial Intelligence"<<endl<<endl;
            
        }

        else if(count2>count1 && count2>count3)
        {
                repeatres("Arts");
                cout<<"1.Visual Arts"<<endl<<"2.Performing Arts "<<endl<<"3.Design "<<endl<<"4.Digital Arts "<<endl<<"5.Artistic Research"<<endl<<endl;
        }
        else if(count1==count2 && count2==count3 && count1==count3)
        {
            cout<<endl<<endl<<"******Thank you for participating in the career counselling test.*******"<<endl<<endl;
            cout<<endl<<"You are equally interested in all three sectors."<<endl<<"You can explore any sector"<<endl<<"To get more specific answer enter precise inputs."<<endl;
        }
        else
        {
                repeatres("Health");
                cout<<"1.Medicine and Surgery"<<endl<<"2.medical research"<<endl<< "3.nursing"<<endl<<"4. Dentistry"<<endl<<"5.Nutrition and Dietetics"<<endl<<endl;
               
        }
    }

    void repeatres(string sector)
    {
        cout<<endl<<endl<<"******Thank you for participating in the career counselling test.*******"<<endl<<endl;
                cout<<"** Your Field of interest is "<<sector<<" **"<<endl;
                cout<<" After carefully analyzing your responses, it appears that you have a strong affinity for the "<<sector<<" sector."<<endl;
                cout<<"Your answers consistently reflected a keen interest and compatibility with various aspects."<<endl;
                cout<<"This suggests that pursuing a career in the "<<sector<<" sector could be a fulfilling and rewarding path for you."<<endl<<endl;
                cout<<"Considering your preferences, I would recommend exploring opportunities within the "<<sector<<"sector, such as follows:"<<endl;
    }
    void repeat()
    {
        cout <<endl<< "1: Strong dislike" << endl;
        cout << "2: Dislike" << endl;
        cout << "3: Neutral" << endl;
        cout << "4: Like" << endl;
        cout << "5: Strong like"<<endl << endl;
        cout<<"Answer : ";

    cin>>count;
    if(count<0 || count>5)
    {
        cout<<endl<<"Your answer dosen't lie in 1-5"<<endl<<"Please Enter correct answer : ";
        cin>>count;
    }
    }

 };
 
int main()
{
    quiz q;
    cout<<endl<<endl<<"        ************* WELCOME TO CAREER GUIDANCE HELPER ************";
    cout<<endl<<endl<<" ------Welcome to the Career Test, we invite you to take now our Free Career Quiz.------";

    cout<<endl<<"       What career is right for you? Discover the jobs that fit your personality."; 
    cout<<endl<<"       Take the #1 Career Test for recruitment assessment tests:";
    cout<<endl<<"       Personality, recruitment & skills tests tailored to your job position to help you succeed. ";
    cout<<endl<<"       The free career test will help you take the right decision. Prepare your job interviews.";
    cout<<endl<<"       Match your interest profile and start exploring careers. The result is amazing!"<<endl;

    cout<<endl<<" ------You will get the best careers & jobs that fit your personality, and the professions that match your top interests.------";
    q.question();
    q.result();

    return 0;
}