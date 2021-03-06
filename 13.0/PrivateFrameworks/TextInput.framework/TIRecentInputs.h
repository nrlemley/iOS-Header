//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TILexicon.h>

@class NSString;

@interface TIRecentInputs : TILexicon
{
    _Bool _needsSync;
    NSString *_filePath;
}

+ (_Bool)identifierIsSystemIdentifier:(id)arg1;
+ (void)clearRecentInputForIdentifier:(id)arg1;
+ (void)storeInput:(id)arg1 forSystemIdentifier:(id)arg2;
+ (void)removeInput:(id)arg1 forSystemIdentifier:(id)arg2;
+ (void)storeInput:(id)arg1 forSystemIdentifier:(id)arg2 atPath:(id)arg3;
+ (void)storeInput:(id)arg1 forLocalIdentifier:(id)arg2;
+ (id)_sanitizeRecentInputString:(id)arg1;
+ (void)recentInputForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)recentInputForIdentifier:(id)arg1;
+ (id)_lexiconPathForLocalIdentifier:(id)arg1;
+ (void)requestRemovalOfLexiconForRecentInputIdentifier:(id)arg1;
+ (void)requestLexiconForRecentInputIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)recentInputAtPath:(id)arg1;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) _Bool needsSync; // @synthesize needsSync=_needsSync;
- (void).cxx_destruct;
- (void)storeIfNecessary;
- (id)lexiconByRemovingEntry:(id)arg1;
- (id)lexiconWithAdditionalEntry:(id)arg1 maximumSize:(long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

