//
//  GeoApo.h
//  Web Services
//
//  Created by HaydeeHdz on 8/10/16.
//  Copyright © 2016 HaydeeHdz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Coord.h"
#import "MainObject.h"

@interface ObjectResponse : NSObject
@property (nonatomic, strong) MainObject *main;
@property (nonatomic,strong) Coord *coord;
@property (nonatomic,strong) NSString *name;
@end
