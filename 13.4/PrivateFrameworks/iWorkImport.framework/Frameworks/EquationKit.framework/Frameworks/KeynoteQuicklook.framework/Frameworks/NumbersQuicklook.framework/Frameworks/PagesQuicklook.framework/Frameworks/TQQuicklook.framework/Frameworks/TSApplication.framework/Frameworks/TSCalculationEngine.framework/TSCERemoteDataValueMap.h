//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCalculationEngine/NSCopying-Protocol.h>

@class NSMutableDictionary;

@interface TSCERemoteDataValueMap : NSObject <NSCopying>
{
    struct unordered_map<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *, TSCECellValue *>*, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *, TSCECellValue *>*>>> _coldDataByYear;
    NSMutableDictionary *_data;
}

+ (id)valueMapWithSpecifier:(id)arg1 value:(id)arg2;
+ (id)valueMap;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;
-     // Error parsing type: v24@0:8^{RemoteDataValueMapArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{RepeatedPtrField<TSCE::RemoteDataValueMapArchive_RemoteDataMapEntry>=^{Arena}ii^{Rep}}}16, name: saveToArchive:
-     // Error parsing type: v32@0:8@16^{RemoteDataValueMapArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{RepeatedPtrField<TSCE::RemoteDataValueMapArchive_RemoteDataMapEntry>=^{Arena}ii^{Rep}}}24, name: p_saveMap:toArchive:
-     // Error parsing type: @24@0:8r^{RemoteDataValueMapArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{RepeatedPtrField<TSCE::RemoteDataValueMapArchive_RemoteDataMapEntry>=^{Arena}ii^{Rep}}}16, name: initFromArchive:
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)enumerateSpecifiersAndValuesWithBlock:(CDUnknownBlockType)arg1;
- (id)allSpecifiers;
- (id)mapForSingleSpecifier:(id)arg1;
- (id)mapForSpecifiersInSet:(id)arg1;
- (_Bool)containsValueForAllSpecifiersInSet:(id)arg1;
- (id)valueForSpecifier:(id)arg1;
- (_Bool)containsValueForSpecifier:(id)arg1;
- (void)removeAllValues;
- (void)removeValuesForSpecifierSet:(id)arg1;
- (id)updateWithValuesFromMap:(id)arg1 overwriteValues:(_Bool)arg2;
- (void)addValuesFromMap:(id)arg1;
- (void)removeValueForSpecifier:(id)arg1;
- (void)setValue:(id)arg1 forSpecifier:(id)arg2;
@property(readonly, nonatomic) long long count;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)init;
- (void)p_enumerateYearMapsWithBlock:(CDUnknownBlockType)arg1;

@end

