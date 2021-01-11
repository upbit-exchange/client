#import "SWGCandleMinutes.h"

@implementation SWGCandleMinutes

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"market": @"market", @"candleDateTimeUtc": @"candle_date_time_utc", @"candleDateTimeKst": @"candle_date_time_kst", @"openingPrice": @"opening_price", @"highPrice": @"high_price", @"lowPrice": @"low_price", @"tradePrice": @"trade_price", @"timestamp": @"timestamp", @"candleAccTradePrice": @"candle_acc_trade_price", @"candleAccTradeVolume": @"candle_acc_trade_volume", @"unit": @"unit" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"market", @"candleDateTimeUtc", @"candleDateTimeKst", @"openingPrice", @"highPrice", @"lowPrice", @"tradePrice", @"timestamp", @"candleAccTradePrice", @"candleAccTradeVolume", @"unit"];
  return [optionalProperties containsObject:propertyName];
}

@end
