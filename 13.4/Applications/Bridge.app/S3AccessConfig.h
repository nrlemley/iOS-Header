//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface S3AccessConfig : NSObject
{
    NSString *_AWSAccessKeyID;
    NSString *_AWSSecretAccessKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *AWSSecretAccessKey; // @synthesize AWSSecretAccessKey=_AWSSecretAccessKey;
@property(retain, nonatomic) NSString *AWSAccessKeyID; // @synthesize AWSAccessKeyID=_AWSAccessKeyID;
- (id)initWithAWSAccessKeyID:(id)arg1 AWSSecretAccessKey:(id)arg2;

@end

