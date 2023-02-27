#pragma once
//here we insert the class 

class myClass{

private: 

	char name[50];
	int mathGrade;
	int englishGrade;
	int historyGrade;

public:

	void setName(const char name[50]);
	void setMathGrade(float input);
	void setEnglishGrade(float input);
	void setHistoryGrade(float input);
	

	char* getName();
	float getMathGrade();
	float getEnglishGrade();
	float getHistoryGrade();

	float getAverageGrade();
	




};

