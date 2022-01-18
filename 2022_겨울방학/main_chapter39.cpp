#include <iostream>
#include <bitset>
using namespace std;
int main() {
	/*bool item1_flag = false;
	bool item2_flag = false;
	bool item3_flag = false;
	bool item4_flag = false;*/

	//// event!
	//item1_flag = true;

	//// die! item2 los
	//item2_flag = false;

	//if (item3_flag == true) {
	//	// event
	//}

	//if (item3_flag == true && item4_flag == false) {
	//	item3_flag = false;
	//	item4_flag = true;
	//}

	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;

	cout << std::bitset<8>(opt0) << endl;
	cout << std::bitset<8>(opt1) << endl;
	cout << std::bitset<8>(opt2) << endl;
	cout << std::bitset<8>(opt3) << endl;

	unsigned char itemsFlag = 0;
	cout << "No item " << std::bitset<8>(itemsFlag) << endl;
	
	// item0 on
	itemsFlag |= opt0;
	cout << "item0 obtained " << std::bitset<8>(itemsFlag) << endl;

	// item3 on
	itemsFlag |= opt3;
	cout << "item3 obtained " << bitset<8>(itemsFlag) << endl;

	// item3 lost
	itemsFlag &= ~opt3;
	cout << "item3 lost " << bitset<8>(itemsFlag) << endl;

	// has item1 ?
	if (itemsFlag & opt1)
		cout << "Has item1" << endl;
	else
		cout << "Not have item1" << endl;

	// has item0 ?
	if (itemsFlag & opt0)
		cout << "Has item0" << endl;

	// obtain item 2, 3
	itemsFlag |= (opt2 | opt3);
	cout << bitset<8>(opt2 | opt3) << endl;
	cout << "Item 2, 3 obtained " << bitset<8>(itemsFlag) << endl;

	if ((itemsFlag & opt2) && !(itemsFlag & opt1)) {
		itemsFlag ^= opt2;
		itemsFlag ^= opt1;
	}
	cout << bitset<8>(itemsFlag) << endl;


	// bit mask
	const unsigned int redMask = 0xFF0000;
	const unsigned int greenMask = 0x00FF00;
	const unsigned int blueMask = 0x0000FF;

	unsigned int pixelColor = 0xDAA520;

	cout << bitset<32>(pixelColor) << endl;

	unsigned char blue;
	unsigned char red = (pixelColor & redMask) >> 16;
	unsigned char green = (pixelColor & greenMask) >> 8;
	blue = pixelColor & blueMask;
	cout << "red " << bitset<8>(red) << " " << int(red) << endl;
	cout << "green " << bitset<8>(green) << " " << int(green) << endl;
	cout << "blue " << bitset<8>(blue) << " " << int(blue) << endl;

	// Quiz 1
	unsigned char option_viewed = 0x01;
	unsigned char option_edited = 0x02;
	unsigned char option_liked = 0x04;
	unsigned char option_shared = 0x08;
	unsigned char option_deleted = 0x80;

	unsigned char my_article_flag = 0;
	
	// 기사를 봤을 때
	my_article_flag |= option_viewed;
	cout << "article viewed " << bitset<8>(my_article_flag) << endl;

	// 좋아요를 클릭했을 때
	my_article_flag |= option_liked;
	cout << "article liked " << bitset<8>(my_article_flag) << endl;

	// 좋아요를 다시 클릭했을 때
	my_article_flag &= ~(option_liked);
	cout << "article reliked " << bitset<8>(my_article_flag) << endl;

	// 본 기사를 삭제할 때
	my_article_flag &= ~(option_viewed);
	cout << "article deleted " << bitset<8>(my_article_flag) << endl;

	// Quiz 2
	// 드모르간 법칙 때문에 동일 작동
	
}
