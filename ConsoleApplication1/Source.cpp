#include <iostream>
using namespace std;

	/* 課題：「Gitと仲良くなるための、練習用のプログラムを作る。」
	 * 内容：がく君は、彼女にプレゼントを買おうとバイトをしています。
	 * しかしながら、毎日素数の数ずつ金額をお母さんに渡す必要があります。
	 * プレゼントの金額をn円としたときに、購入するのに必要な日数を求めるプログラムを作りましょう。
	 * 条件：毎日お母さんに渡すお金は1番目の素数「2」、2番目の素数「３」とどんどん増えてゆきます。
	 * 　　　給料は、毎日800円/時給の金額がもらえるものとして、勤務時間をm時間とします。
	 */

int calculation(int n,int m) {

	int count = 0;
	int N = 100;//最大値
	int time = 800;//時給
	int money = 0;
	int day=1;//日

	for(int i = 1; i <= N; i++){//一日ごとの素数
		for(int j = 1; j <= i; j++){

			if(i % j == 0)
				count++;

			if(count > 2)
				break;
		}

		if(count == 2) {}

	}

	while(money <= n) {
		day++;
		money = day*time*m-count;
	}

	return day;

}

int main() {

	int m;
	int n;
	cin >> m >> n;
	int day = 1;
	cout << calculation(m, n);
	cin.get();

	return 0;

}