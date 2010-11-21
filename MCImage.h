//
//  MCImage.h
//  BackToTheMac
//
//  Created by Drew McCormack on 30/08/10.
//  Copyright (c) 2010 The Mental Faculty. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface NSImage (MCStretchableImageExtensions)

-(NSImage *)stretchableImageWithLeftCapWidth:(CGFloat)leftCapWidth topCapHeight:(CGFloat)topCapHeight;

-(void)drawInRect:(NSRect)rect;

@property(nonatomic, readonly) CGFloat leftCapWidth;
@property(nonatomic, readonly) CGFloat topCapHeight;

@end
