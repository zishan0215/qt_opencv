#include "histogram1d.h"

int main(int argc, char *argv[])
{
    cv::Mat image;
    image = cv::imread(argv[1]);
    if(!image.data) {
        std::cout<<"No image data"<<std::endl;
        return -1;
    }

    Histogram1D h1;
    image = h1.makeGray(image);

    cv::namedWindow("Gray", cv::WINDOW_AUTOSIZE);
    cv::imshow("Gray", image);

    cv::MatND hist;
    hist = h1.getHistogram(image);

    std::cout<<hist.size<<std::endl;

    for(int i=0; i<256; i++) {
        std::cout<<"Value "<<i<<" = "<<hist.at<float>(i)<<std::endl;
    }

    cv::Mat histImage = h1.getHistogramImage(image);

    cv::namedWindow("Histogram", cv::WINDOW_AUTOSIZE);
    cv::imshow("Histogram", histImage);


    cv::waitKey(0);

    return 0;
}
