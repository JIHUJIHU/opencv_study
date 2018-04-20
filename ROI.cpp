#include <opencv2\opencv.hpp>
#include <math.h>
using namespace std;
using namespace cv;
void print_locateROI(String str, Mat m) {
	Size size;
	Point pt;
	m.locateROI(size, pt);
	cout << "부모크기" << size << endl;
	cout << str << " = " << m.size() << "from" << pt << endl;
}
int main() {
	Range r1(0, 3), r2(3, 7);
	int data[] = {
		1,2,3,4,5,6,7,
		7,6,5,4,3,2,1,
		1,2,3,4,5,6,7,
		4,3,2,1,5,7,5
	};
	Mat m1(5, 7, CV_32S, data);
	Mat m2 = m1(r1, r2);
	Mat m3 = m1(r1, r1);

	print_locateROI("m2", m2);
	print_locateROI("m3", m3);
	
	m2.adjustROI(-1, 1, 2, -1);
	m3.adjustROI(0, -1, -2, 2);

	cout << "관심영역 변경 후" << endl;

	print_locateROI("m2", m2);
	print_locateROI("m3", m3);

	cout << "m1" << endl << m1 << endl;
	cout << "m2" << endl << m2 << endl;
	cout << "m3" << endl << m3 << endl;
	waitKey(0);
	return 0;
}