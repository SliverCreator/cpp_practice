//
// Created by 14412 on 2025/8/25.
//

#ifndef CPP_PRACTICE_SALE_H
#define CPP_PRACTICE_SALE_H

namespace SALES {
    class sale {
    private:
        static const int QUARTERS = 4;
        struct Sales {
            double sales[QUARTERS];
            double average;
            double max;
            double min;
        };
        Sales data;

    public:
        sale();
        sale( const double ar[], int n);
        void showSales() const;
    };
}

#endif //CPP_PRACTICE_SALE_H