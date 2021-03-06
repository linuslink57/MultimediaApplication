#pragma once
#include <opencv2/opencv.hpp>
#include <iostream>
#include <Windows.h>

using namespace std;
using namespace cv;

class Image
{
  private:
	vector<Mat> srcMats;
	Mat srcMat;
	Mat dstMat;

  public:
	Image(String srcPath);
	Image();
	~Image();

	int panorama(Stitcher::Mode mode = Stitcher::PANORAMA);
	int canny(int threshold);
	Mat getDstMat();
};
