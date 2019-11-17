#include<iostream>
#include<string>
#include<vector>

using namespace std;
int check(string s)
{
	int len = s.size();
	int score = 0;
	int alpha = 0;
	int Alpha = 0;
	int num = 0;
	int mark = 0;

	//ÃÜÂë³¤¶È
	if (len <= 4){
		score += 5;
	}
	else if (len>=5&&len <= 7){
		score += 10;
	}
	else if (len>= 8){
		score += 25;
	}

//Í³¼Æ´óÐ¡Ð´×ÖÄ¸¡¢Êý×Ö¡¢×Ö·û
	for (int i = 0; i < len; i++){
		if (s[i] >= 'a'&&s[i] <= 'z'){
			alpha = 1;
		}

		else if (s[i] >= 'A'&&s[i] <= 'Z'){
			Alpha = 1;
		}

		else if (s[i] >= '0' && s[i] <= '9'){
			num += 1;
		}

		else{
			mark += 1;
		}
	}
	//×ÖÄ¸
		if (alpha == 0 && Alpha == 0){
			score += 0;
		}
		else if ((alpha != 0 && Alpha == 0) || (alpha == 0 && Alpha != 0)){
			score += 10;
		}
		else if (alpha != 0 && Alpha != 0){
			score += 25;
		}

		//Êý×Ö
		if (num == 0){
			score += 0;
		}
		else if (num==1){
			score += 10;
		}
		else if (num > 1){
			score += 25;
		}

		//·ûºÅ
		if (mark == 0){
			score += 0;
		}
		else if (mark == 1){
			score += 10;
		}
		else if (mark > 1){
			score += 25;
		}
		//½±Àø
		if (alpha != 0 && Alpha != 0 && (num != 0) && (mark != 0)){
			score += 5;
		}
		else if ((alpha != 0 || Alpha != 0) && (num != 0) && (mark != 0)){
			score += 3;
		}
		else if ((alpha!=0 || Alpha != 0) && (num != 0)){
			score += 2;
		}	
		return score;
}

int main()
{
	string s;
	while (getline(cin, s)){
		int ret=check(s);
		switch (ret / 10){
		case 9:
			cout <<"VERY_SECURE" << endl;
			break;

		case 8:
			cout << "SECURE" << endl;
			break;

		case 7:
			cout << "VERY_STRONG" << endl;
			break;

		case 6:
			cout << "STRONG" << endl;
			break;

		case 5:
			cout << "AVERAGE" << endl;
			break;

		default:{
					if (ret>=25)
					cout << "WEAK" << endl;

					else cout << "VERY_WEAK" << endl;
		}
	}
  }
	system("pause");
	return 0;
}