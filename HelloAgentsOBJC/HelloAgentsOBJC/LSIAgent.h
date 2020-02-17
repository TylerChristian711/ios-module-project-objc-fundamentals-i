//
//  LSIAgent.h
//  HelloAgentsOBJC
//
//  Created by Lambda_School_Loaner_218 on 2/17/20.
//  Copyright © 2020 Lambda_School_Loaner_218. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LSIAgent : NSObject

@property NSString *coverName;
@property NSString *realName;
@property NSNumber *accessLevel;
@property NSNumber *compromised;

- (instancetype) initWithCoverName: (NSString *) coverName realName: (NSString *) realName accessLevel: (int) accessLevel compromised: (BOOL) compromised;

  
 

@end

