//
//  Car.h
//  Vehicles
//
//  Created by Raman Singh on 2018-04-15.
//  Copyright © 2018 Designated Nerd Software. All rights reserved.
//

#import "Vehicle.h"

@interface Car : Vehicle
@property (nonatomic, assign) BOOL isConvertible;
@property (nonatomic, assign) BOOL isHatchback;
@property (nonatomic, assign) BOOL hasSunroof;
@property (nonatomic, assign) NSInteger numberOfDoors;
-(NSString *)vehicleDetailsString;
@end
