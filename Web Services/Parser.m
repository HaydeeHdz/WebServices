//
//  Parser.m
//  Web Services
//
//  Created by HaydeeHdz on 7/15/16.
//  Copyright © 2016 HaydeeHdz. All rights reserved.
//

#import "Parser.h"

@implementation Parser
+ (ObjectResponse *)parseGeoObject {
    //check for valid value
    if(mjsonGeo != nil) {
        // Using ObjectMapper Directly
        ObjectResponse *customizedObject = [[ObjectMapper sharedInstance] objectFromSource:mjsonGeo toInstanceOfClass:[ObjectResponse class]];
        return customizedObject;
    }
    return nil;
}
@end
