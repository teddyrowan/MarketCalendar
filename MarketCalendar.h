//
//  MarketCalendar.h
//  MarketCalendar
//
//  Created by MySybil.com
//  Copyright © 2021 dcg. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MarketCalendar : NSObject
{
    NSArray *sessions;
    // List of all trading sessions between Jan 1, 2019 and Dec 31, 2025
}
@property (nonatomic, strong) NSArray *sessions;

- (void) printSessions;
// Log every valid trading session in the data to the console.

+ (int) tradingSessionsInRangeWithStartDate:(NSString*)startDate andEndDate:(NSString*)endDate;
// Determine how many days of trading there are between the two dates. 
// (startDate, endDate]. Inclusive of end, exclusive of start. Start adjustment should be fractionally calculated.
// Date Formatting: [YYYY-MM-DD]

+ (int) tradingMinutesInRangeWithStartDate:(NSString*)startDate andEndDate:(NSString*)endDate;
// This method assumes that all trading days are 390 minutes and returns tradingSessions adjusted for minutes.
// Date Formatting: [YYYY-MM-DD]
// Return: TradingSessionsInRange * 390

+ (int) dateVectorWithDate:(NSString*)date andComparison:(NSString*)reference;
// Determine which way to iterate through the list of trading sessions.
// Return Types:
    // 0  --> the date is equal to the reference date, ie: the index is correct
    // 1  --> the date is earlier in time than the reference date. Must iterate further in time.
    // -1 --> the date is later in time than the reference date. Must iterate back in time.

+ (int) calendarDaysSince2019:(NSString*)dateStr;
// Approximately how many calendar days have there been since the start of 2019.
// Date Formatting: [YYYY-MM-DD]

+ (int) findSortedIndexInArray:(NSArray*)array withGuess:(int)approx andWithKey:(NSString*)dateString;
// Iterated through the sorted array using directionality vector from the guess until you find the
// dateString or pass over where it would have been.
// Date Formatting: [YYYY-MM-DD]

@end

