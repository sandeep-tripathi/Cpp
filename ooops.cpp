#include <iostream>
#include <list>
using namespace std;

// BASE CLASS WITH PRIVATE MEMBERS AND PUBLIC METHOD WITH MEMBERS SHARED WITH DERIVED CLASS AS PROTECTED
class YouTubeChannel {   // Base class
private:  //PRIVATE
	string Name;
	int SubscribersCount;
	list<string> PublishedVideoTitles;  // Not accesible to derived class
protected:  // PROTECTED
	string OwnerName;   // With protected: Member is accesible to derived class
    int ContentQuality;
public:  // Methods are all accesible to derived class
	YouTubeChannel(string name, string ownerName) {   //Constructor for base class
		Name = name;  // name is the one passed as parameter
		OwnerName = ownerName;
		SubscribersCount = 0;
        ContentQuality=0;
	}
	void GetInfo() {
		cout << "Name: " << Name << endl;
		cout << "OwnerName: " << OwnerName << endl;
		cout << "SubscribersCount: " << SubscribersCount << endl;
		cout << "Videos: " << endl;
		for (string videoTitle : PublishedVideoTitles) {
			cout << videoTitle << endl;
		}
	}
	void Subscribe() {
		SubscribersCount++;
	}
	void Unsubscribe() {
		if (SubscribersCount > 0)
			SubscribersCount--;
	}
	void PublishVideo(string title) {
		PublishedVideoTitles.push_back(title);  // push_back() is like append in python
	}
    void CheckAnalytics() {
		if(ContentQuality<2)
            cout<<Name<<" has bad quality content"<<endl;
        else cout<<Name<<" has great quality content"<<endl;
	}
};
//************************************************************************
// INHERITENCE
class CookingYouTubeChannel :public YouTubeChannel {  
public:
	CookingYouTubeChannel(string name, string ownerName):YouTubeChannel(name, ownerName) {  // Constructor for derived class
// Derived class(datatyepe variablename):BaseClass(variablename)
	}
	void Practice() {
		cout << OwnerName << " is practicing cooking, learning new recipes, experimenting with spices..." << endl;
        ContentQuality++;   // if viewer see you are practicing, your content quality will increase
	}
};
// POLYMORPHISM
class SingersYouTubeChannel :public YouTubeChannel {   // Derived class
public:
	SingersYouTubeChannel(string name, string ownerName):YouTubeChannel(name, ownerName) {  // Constructor for derived class

	}
 // Practice() method is differnt than derived class CookingYoutubeChannel()
	void Practice() {
		cout << OwnerName << " is singing, learning new songs, reciting..." << endl;
        ContentQuality++;
	}
};
 
int main()
{
	CookingYouTubeChannel cookingYtChannel("Amy's Kitchen", "Amy");
    SingersYouTubeChannel singersYtChannel("Sandy Singing","Sandy");
    cookingYtChannel.Practice();
    singersYtChannel.Practice();singersYtChannel.Practice();singersYtChannel.Practice();
//******************************************
    // POLYMORPHISM & POINTERS
    // Pointer of base class can be assigned address of derived class

    YouTubeChannel * yt1 = &cookingYtChannel;
    YouTubeChannel * yt2 = &singersYtChannel;
    // Invoking method using pointer

    yt1->CheckAnalytics(); // -> operator should be used for accesing pointer
    yt2->CheckAnalytics();
    
}