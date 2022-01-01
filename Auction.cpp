//Auction.cpp
#include <string>
#include "Auction.h"
using namespace std;



Auction :: Auction(string description, double minprice)
{
    mDescription = description;
    mMinimumPrice = minprice;
    mTotalNumberOfBids = 0;
    mCurrentBid = 0.0;
}

void Auction :: openAuction()
{
    mAuctionIsOpen = true;
}

bool Auction :: bid(double amount)
{
    bool bidInput = true;
    
    if (mAuctionIsOpen == false)
    {
        return (false);
    }
    
    if (amount < 0)
    {
        bidInput = false;
    }
    
    if (amount <= mCurrentBid)
    {
        bidInput = false;
    }
    if (amount > mCurrentBid)
    {
        bidInput = true;
        mCurrentBid = amount;
        mTotalNumberOfBids = mTotalNumberOfBids + 1;
    }

    return (bidInput);
}

int Auction :: numberOfBids() const
{
    return (mTotalNumberOfBids);
}

void Auction :: closeAuction()
{
    mAuctionIsOpen = false;
}

bool Auction :: wasSuccessful() const
{
    bool AuctionResult = true;
    
    
    if (mCurrentBid > mMinimumPrice && mAuctionIsOpen == false)
    {
        AuctionResult = true;
    }
    else
    {
        AuctionResult = false;
    }
    
    return (AuctionResult);
}

double Auction :: winningBid() const
{
    int winner = 0;
    
    if (mAuctionIsOpen == true)
    {
        winner = -1.0;
    }
    
    if (wasSuccessful() == false)
    {
        return (-1.0);
    }
    
    if (numberOfBids() < 1)
    {
        winner = -1.0;
    }
    else
    {
        winner = mCurrentBid;
    }
    
    return (winner);
}

string Auction :: getDescription() const
{
    return (mDescription);
}
