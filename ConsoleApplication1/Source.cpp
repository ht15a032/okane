#include <iostream>
using namespace std;

	/* �ۑ�F�uGit�ƒ��ǂ��Ȃ邽�߂́A���K�p�̃v���O���������B�v
	 * ���e�F�����N�́A�ޏ��Ƀv���[���g�𔃂����ƃo�C�g�����Ă��܂��B
	 * �������Ȃ���A�����f���̐������z�����ꂳ��ɓn���K�v������܂��B
	 * �v���[���g�̋��z��n�~�Ƃ����Ƃ��ɁA�w������̂ɕK�v�ȓ��������߂�v���O���������܂��傤�B
	 * �����F�������ꂳ��ɓn��������1�Ԗڂ̑f���u2�v�A2�Ԗڂ̑f���u�R�v�Ƃǂ�ǂ񑝂��Ă䂫�܂��B
	 * �@�@�@�����́A����800�~/�����̋��z�����炦����̂Ƃ��āA�Ζ����Ԃ�m���ԂƂ��܂��B
	 */

int calculation(int n,int m) {

	int count = 0;
	int N = 100;//�ő�l
	int time = 800;//����
	int money = 0;
	int day=1;//��

	for(int i = 1; i <= N; i++){//������Ƃ̑f��
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