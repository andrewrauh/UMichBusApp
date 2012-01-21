//
//  location.h
//  Umich Bus App
//
//  Created by Andrew Rauh on 1/20/12.
//  Copyright (c) 2012 University of Michigan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>



@protocol CoreLocationControllerDelegate 
@required
- (void)locationUpdate:(CLLocation *)location; // Our location updates are sent here
- (void)locationError:(NSError *)error; // Any errors are sent here
@end



@interface location : NSObject <CLLocationManagerDelegate> {
    CLLocationManager *locMgr;
    id delegate;
    
    
    
}

@property (nonatomic, retain) CLLocationManager *locMgr;
@property (nonatomic, retain) id delegate;


@end
