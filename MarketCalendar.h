//
//  MarketCalendar.h
//  sybil-iOS
//
//  Created by MySybil.com
//  Copyright © 2021 dcg. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MarketCalendar : NSObject
{
    NSArray *sessions;
    // List of all trading sessions between Jan 1, 2019 and July 22, 2021
}
@property (nonatomic, strong) NSArray *sessions;

- (void) printSessions;

+ (int) tradingSessionsInRangeWithStartDate:(NSString*)startDate andEndDate:(NSString*)endDate;
// (startDate, endDate]. Inclusive of end, exclusive of start. Start adjustment should be fractionally calculated.

+ (int) tradingMinutesInRangeWithStartDate:(NSString*)startDate andEndDate:(NSString*)endDate;
// TradingSessionsInRange * 390

@end

