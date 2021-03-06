/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSImage;

@interface StationeryCompositeImageMask : NSObject
{
    NSData *_maskImageData;
    NSImage *_maskImage;
    struct CGSize _dropZoneOffset;
    double _dropZoneAngle;
    struct CGSize _dropZoneSize;
    NSData *_placeholderImageData;
    NSImage *_placeholderImage;
}

- (struct CGSize)actualMaskSize;
- (struct CGRect)dropZoneRect;
- (struct CGRect)dropZoneBoundingBox;
- (struct CGSize)dropZoneSize;
- (void)setDropZoneSize:(struct CGSize)arg1;
- (double)dropZoneAngle;
- (void)setDropZoneAngle:(double)arg1;
- (struct CGSize)dropZoneOffset;
- (void)setDropZoneOffset:(struct CGSize)arg1;
- (void)discardPlaceholderImage;
- (id)placeholderImage;
- (void)setPlaceholderImageData:(id)arg1;
- (id)maskImage;
- (void)setMaskImageData:(id)arg1;
- (BOOL)isValid;
- (void)dealloc;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;

@end

