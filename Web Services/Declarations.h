//
//  Declarations.h
//  Web Services
//
//  Created by HaydeeHdz on 7/15/16.
//  Copyright © 2016 HaydeeHdz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SBJson.h"
#import "ObjectMapper.h"
#import "ObjectResponse.h"
#import "Coord.h"
#import "Parser.h"
#import "MainObject.h"

//Debug
#define nDebugEnable        1
#define print(x)            if(nDebugEnable){(x);}

extern NSDictionary *mjsonGeo;
@interface Declarations : NSObject

@end
