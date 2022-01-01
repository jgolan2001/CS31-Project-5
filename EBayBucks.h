//
//  EBayBucks.h
//  Project 5
//
//  Created by Jordan Golan on 7/30/20.
//  Copyright © 2020 Jordan Golan. All rights reserved.
//

#ifndef EBayBucks_h
#define EBayBucks_h
using namespace std;

class EBayBucks{
public:
    
    EBayBucks();
    
    void addAuction (Auction a);
    
    double earnings () const;
    
    double issueCertificate ();
    
private:
    
    double earnedAward = 0;;
};



#endif /* EBayBucks_h */
