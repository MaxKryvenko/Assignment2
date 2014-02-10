//
//  Apple.m
//  Fruits
//
//  Created by Jay Palat on 1/23/14.
//  Copyright (c) 2014 Jay Palat. All rights reserved.
//

#import "Pumpkin.h"

@implementation Pumpkin

- init{
    [self setName:@"Pumpkin"];
    [self setShape:@"Round"];
    [self setColor:@"Orange"];
    return self;
}

- (NSString *)printSelf{
    return [[NSString alloc] initWithFormat:@"I am a %@ my color is %@ and my shape is %@", self.name, self.color, self.shape];
}
@end
