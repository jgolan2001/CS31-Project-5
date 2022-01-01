// Auction Header

#ifndef Auction_h
#define Auction_h
#include <string>
using namespace std;



class Auction {
public:
    
    Auction (string description, double minprice);
    
    void openAuction ();
    
    bool bid (double amount);
    
    int numberOfBids() const;
    
    void closeAuction ();
    
    bool wasSuccessful () const;
    
    double winningBid () const;
    
    string getDescription () const;
    
private:
    
    string mDescription;
    
    double mMinimumPrice = 0.0;
    
    double mCurrentBid = 0.0;
    
    int mTotalNumberOfBids = 0;
    
    bool mAuctionIsOpen;
        
};



#endif /* Auction_h */
