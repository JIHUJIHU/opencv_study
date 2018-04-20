










#include <opencv2\opencv.hpp>
#include <math.h>
using namespace std;
using namespace cv;
int main() {

	vector<Point> v1;
	v1.push_back(Point(1, 20));
	v1.push_back(Point(20, 30));
	v1.push_back(Point(40, 50));
	cout << "v1=" << (Mat)v1 << endl;

	vector<float> v2(4, 9.25f);
	cout << "v2=" << ((Mat)v2).reshape(1, 2) << endl;


	Size arr_size[] = { Size(2,2),Size(3,3),Size(4,4) };
	int arr_int[] = { 1,2,3,4,5 };

	vector<Size> v3(arr_size, arr_size + sizeof(arr_size) / sizeof(Size));
	cout << "v3=" << ((Mat)v3).reshape(1, 1) << endl;

	vector<int> v4(arr_int, arr_int + sizeof(arr_int) / sizeof(int));
	cout << "v4=" << ((Mat)v4).reshape(1, 1) << endl;
	waitKey(0);
	return 0;
}












