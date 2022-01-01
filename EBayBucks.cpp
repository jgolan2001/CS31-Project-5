//
//  EBayBucks.cpp
//  Project 5
//
#include <iostream>
#include <cassert>
#include <string>
#include <cmath>
#include <cctype>
#include <cstdlib>
#include "Auction.h"
#include "EBayBucks.h"
using namespace std;


EBayBucks :: EBayBucks()
{
    earnedAward = 0;
}

void EBayBucks :: addAuction (Auction a)
{
    if (a.wasSuccessful() == true)
    {
    earnedAward = earnedAward + 0.01*(a.winningBid());
    }
    else
    {
        earnedAward = earnedAward + 0.0;
    }
}

double EBayBucks :: earnings () const
{
    return (earnedAward);
}

double EBayBucks :: issueCertificate ()
{
    double certificate = earnedAward;
    earnedAward = 0;
    return (certificate);
}
