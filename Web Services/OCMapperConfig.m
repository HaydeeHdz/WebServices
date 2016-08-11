//
//  OCMapperConfig.m
//  Web Services
//
//  Created by HaydeeHdz on 7/15/16.
//  Copyright © 2016 HaydeeHdz. All rights reserved.
//

#import "OCMapperConfig.h"
#import "OCMapper.h"
#import "Declarations.h"

@implementation OCMapperConfig

+(void)configure {
    InCodeMappingProvider *inCodeMappingProvider = [[InCodeMappingProvider alloc] init];
    CommonLoggingProvider *commonLoggingProvider = [[CommonLoggingProvider alloc] initWithLogLevel:LogLevelError];
    
    [[ObjectMapper sharedInstance] setMappingProvider:inCodeMappingProvider];
    [[ObjectMapper sharedInstance] setLoggingProvider:commonLoggingProvider];
    
    /******************* Customized objects **********************/
}
@end
