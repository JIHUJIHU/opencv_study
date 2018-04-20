#include <opencv2/opencv.hpp>
#include <cstdlib>
#include <time.h>

using namespace cv;
using namespace std;

void put_string(Mat &frame, string text, Point pt, int value) {
	text += to_string(value);
	int font = FONT_HERSHEY_SIMPLEX;
	putText(frame, text, pt, font, 1, Scalar(120, 200, 90), 2);
}

int main()
{
	VideoCapture capture(0);
	capture.open(0);
	CV_Assert(capture.isOpened());
	double fps = 29.97;
	int delay = cvRound(1000.0 / fps);
	Size size(640, 360);
	int fourcc = VideoWriter::fourcc('D', 'X', '5', '0');
	capture.set(CAP_PROP_FRAME_WIDTH, size.width);
	capture.set(CAP_PROP_FRAME_HEIGHT, size.height);
	VideoWriter writer;
	writer.open("./save_image/video_file.avi", fourcc, fps, size);
	CV_Assert(writer.isOpened());
	for (;;) {
		Mat frame;
		capture >> frame;
		writer << frame;
		imshow("camera", frame);
		if (waitKey(delay) >= 0) break;
	}

	waitKey(0);
	return 0;
}