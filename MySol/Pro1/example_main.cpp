#define CVPLOT_HEADER_ONLY
#include <opencv2/opencv.hpp>
#include <iostream>
#include <catch.hpp>
using namespace cv;
using namespace std;

namespace {

    cv::Mat Irving() {
        auto mat = cv::imread("C:/Users/Hao_Lan/Desktop/Picture/person/Irving1.png");
        if (true == mat.empty()) {
            perror("导入失败\n");
            exit(EXIT_FAILURE);
        }
        return mat;
    }

    cv::Mat bigIrving(int rows, int cols) {
        cv::Mat mat;
        cv::resize(Irving(), mat, cv::Size(cols, rows));
        cv::Mat3b noise(mat.size());
        cv::randu(noise, 0, 40);
        mat = mat - 20 + noise;
        return mat;
    }

    std::string testCaseName() {
        return Catch::getResultCapture().getCurrentTestName();
    }
}
int main()
{
    Mat mat = Irving();
    imshow("mywindow1", mat);
    /*Mat mat1 = bigIrving(10, 10);
    imshow("mywindow2", mat1);*/
    //看到了testCaseName

    waitKey();
	return 0;
}