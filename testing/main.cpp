#include <iostream>
#include <opencv2/opencv.hpp>
#include "opencv2/imgcodecs.hpp"
#include <opencv2/highgui/highgui.hpp>

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cout<<"usage: ./imread <Image_Path>"<<std::endl;
        return -1;
    }

    std::cout<<"argument: "<<argv[1]<<std::endl;

    cv::Mat image;
    image = cv::imread(argv[1]);

    if (!image.data) {
        std::cout<<"No image data"<<std::endl;
        return -1;
    }

    cv::namedWindow("Display Image", cv::WINDOW_AUTOSIZE);
    cv::imshow("Display Image", image);

    cv::waitKey(0);

    return 0;
}
