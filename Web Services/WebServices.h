//
//  WebServices.h
//  Web Services
//
//  Created by HaydeeHdz on 7/15/16.
//  Copyright © 2016 HaydeeHdz. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WebServices : NSObject
+ (NSDictionary *)getWeatherWithLatitude:(NSString *)latitude AndLongitude:(NSString*)longitude;
+ (NSDictionary*) sendPost:(NSString*)postUrl forData:(NSString *)data andMode:(BOOL)mode;
@end
