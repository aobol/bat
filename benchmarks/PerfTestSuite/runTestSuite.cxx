#include <include/ReleaseTestSuite.h>
#include <include/PerfTest.h>

#include <TROOT.h>
#include <TMath.h>
#include <TF1.h>

#include <iostream>

using namespace std;

int main()
{
    // create new test suite
    ReleaseTestSuite rts;

    // prepare test suite
    rts.PrepareTests();

    // setup html output as needed for BAT webpage
//    rts.WebpageSetup();

    // set precision: kCoarse, kMedium, kDetail
    rts.SetPrecision(PerfTest::kCoarse);

    // call after SetPrecision
    rts.SetLag(10);

    // multivariate proposal
    rts.SetMultivariate(true);

    // run all tests
    rts.RunTests();

    // print results to screen
    rts.PrintResultsScreen();

    // print results to html
    // to view it locally, turn off webpage setup, and save with .html extension
    // rts.PrintResultsHTML("results.php");
    rts.PrintResultsHTML("results.html");

    return 0;
}
