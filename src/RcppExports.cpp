// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// load_image_cv
arma::cube load_image_cv(std::string filename);
RcppExport SEXP videoplayR_load_image_cv(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    __result = Rcpp::wrap(load_image_cv(filename));
    return __result;
END_RCPP
}
// bresenham_line
arma::umat bresenham_line(double x1, double y1, double z1, double x2, double y2, double z2);
RcppExport SEXP videoplayR_bresenham_line(SEXP x1SEXP, SEXP y1SEXP, SEXP z1SEXP, SEXP x2SEXP, SEXP y2SEXP, SEXP z2SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type x1(x1SEXP);
    Rcpp::traits::input_parameter< double >::type y1(y1SEXP);
    Rcpp::traits::input_parameter< double >::type z1(z1SEXP);
    Rcpp::traits::input_parameter< double >::type x2(x2SEXP);
    Rcpp::traits::input_parameter< double >::type y2(y2SEXP);
    Rcpp::traits::input_parameter< double >::type z2(z2SEXP);
    __result = Rcpp::wrap(bresenham_line(x1, y1, z1, x2, y2, z2));
    return __result;
END_RCPP
}
// ellipse
NumericVector ellipse(arma::vec x, arma::vec y);
RcppExport SEXP videoplayR_ellipse(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    __result = Rcpp::wrap(ellipse(x, y));
    return __result;
END_RCPP
}
