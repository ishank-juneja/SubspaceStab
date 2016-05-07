//
// Created by yanhang on 5/4/16.
//

#ifndef SUBSPACESTAB_FACTORIZATION_H
#define SUBSPACESTAB_FACTORIZATION_H

#include "tracking.h"

namespace substab {

    namespace Factorization {
        void movingFactorization(const std::vector<cv::Mat> &images, const FeatureTracks &trackMatrix,
                                 Eigen::MatrixXd &coe, Eigen::MatrixXd &bas, const int N, const int tWindow,
                                 const int stride);

        void filterDynamicTrack(const FeatureTracks& trackMatrix, std::vector<int>& fullTrackInd, const int sf, const int tw, std::vector<bool>is_valid);

    }//namespace Factorization
}//namespace substab
#endif //SUBSPACESTAB_FACTORIZATION_H
