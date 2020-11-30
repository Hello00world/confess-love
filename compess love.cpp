#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

void reverseStr(string&str) 
{ 
    int n = str.length(); 
  
    // Swap character starting from two 
    // corners 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
} 

void speak(string word, string love){
	string buff = "";
	
	reverseStr(love);
	for (string::iterator it = love.begin(); it != love.end(); it++){
		buff.insert(0, string(1,*it));
		string temp= "\r";
		for (int i = 0; i < buff.size() - 1; i++){
			temp += " ";
		}
		cout << temp;
		cout << "\r" << buff;
		Sleep(150);
	}
	
	string word_buff = "";
	for (string::iterator it = word.begin(); it != word.end(); it++){
		word_buff.append(string(1,*it));
		string temp= "\r";
		for (int i = 0; i < buff.size() - 1; i++){
			temp += " ";
		}
		cout << temp;
		cout << "\r" << word_buff + buff;
		Sleep(50);
	}
	buff.insert(0, word_buff);
	cout << endl;
}


int main(){	
	speak("       Hey Girl !!!", "                             ----         ----");
	speak("      Do you know....", "                         --------     --------");
	speak("   Every day,I always...", "                    ------------ ------------");
	speak("        Miss you,", "                            -----------------------");
	speak("     Miss your smile,", "                          -------------------");
	speak("     Miss your voice,", "                            ---------------");
	speak("     Miss your eyes,...", "                             ---------");
	speak(" And today,I want to tell you that:", "                   -----");
	speak("       'I LOVE YOU'", "                                    ---");
	speak("         'FOREVER'       ", "                               -");
}
