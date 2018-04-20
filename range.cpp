#include <opencv2\opencv.hpp>
#include <math.h>
using namespace std;
using namespace cv;

int main() {
	Range r1(0, 3), r2(3, 7);
	int data[] = {
		1,2,3,4,5,6,7,
		6,5,3,1,3,54,56,
		1,0,0,3,54,5,1,
		9,5,3,56,4,1,2
	};
	Mat m1, m2;
	m1 = Mat(4, 7, CV_32S, data);	//부모 행렬
	m2 = m1(r1,r2);	//부분행렬 submatrix

	cout << "m1의 2번 행" << m1.row(2) << endl;
	cout << "m1의 2번 열" << m1.col(2) << endl;
	cout << "m1의 0~2행까지 모두 출력" << m1.rowRange(r1) << endl;
	cout << "m2의 0~2행까지 모두 출력" << m2.rowRange(r1) << endl;

	m2.setTo(50);
	cout.width(3);
	cout << "m1 = " << endl << m1 << endl;
	cout << "m2 = " << endl << m2 << endl;

	return 0;
}