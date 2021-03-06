//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/NSCopying-Protocol.h>
#import <VectorKit/NSFastEnumeration-Protocol.h>

@class VKTileKeyMap;

__attribute__((visibility("hidden")))
@interface VKTileKeyList : NSObject <NSFastEnumeration, NSCopying>
{
    void *_head;
    void *_tail;
    VKTileKeyMap *_map;
    unsigned long long _count;
    unsigned long long _maxCount;
}

- (_Bool)isEqualToList:(id)arg1;
- (void)removeAllKeys;
- (void)removeAllListNodes;
- (_Bool)removeKey:(const struct VKTileKey *)arg1;
- (void)removeKeysMatchingPredicate:(CDUnknownBlockType)arg1;
- (void)sort:(CDUnknownBlockType)arg1;
- (id)listWithout:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (unsigned long long)count;
- (unsigned long long)capacity;
- (_Bool)containsKey:(const struct VKTileKey *)arg1;
- (void)_addKeyToBack:(const struct VKTileKey *)arg1;
- (void)addKey:(const struct VKTileKey *)arg1;
- (_Bool)addKey:(const struct VKTileKey *)arg1 lostKey:(struct VKTileKey *)arg2;
- (struct VKTileKey *)firstKey;
- (id)description;
- (void)dealloc;
- (id)copyWithMaxCapacity:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMaxCapacity:(unsigned long long)arg1;
- (id)init;

@end

