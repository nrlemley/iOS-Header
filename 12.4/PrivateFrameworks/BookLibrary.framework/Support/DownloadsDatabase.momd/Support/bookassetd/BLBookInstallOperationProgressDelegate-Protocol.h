//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BLBookInstallInfo, NSOperation, SSOperationProgress;

@protocol BLBookInstallOperationProgressDelegate <NSObject>
- (void)operation:(NSOperation *)arg1 updatedProgress:(SSOperationProgress *)arg2 forInstall:(BLBookInstallInfo *)arg3;
@end

