//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTTestRecipe.h>

@interface PTSingleTestRecipe : PTTestRecipe
{
    CDUnknownBlockType _action;
}

+ (id)recipeWithTitle:(id)arg1 prepareBlock:(CDUnknownBlockType)arg2 action:(CDUnknownBlockType)arg3 cleanupBlock:(CDUnknownBlockType)arg4;
+ (id)recipeWithTitle:(id)arg1 action:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_handleEvent:(long long)arg1;
- (_Bool)_wantsEvent:(long long)arg1;

@end

