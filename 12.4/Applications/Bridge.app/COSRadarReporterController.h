//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "COSFileTransferControllerDelegate-Protocol.h"
#import "NSFileManagerDelegate-Protocol.h"
#import "NSStreamDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class COSFileTransferController, NSFileManager, NSInputStream, NSString, UIButton, UILabel, UITextField;
@protocol COSRadarReporterDelegate;

@interface COSRadarReporterController : UIViewController <NSFileManagerDelegate, UITextFieldDelegate, COSFileTransferControllerDelegate, NSStreamDelegate>
{
    _Bool _pipeRegistered;
    _Bool _watchDidRequestPair;
    _Bool _dismissRequested;
    _Bool _canDismiss;
    _Bool _doneUnifyingLogs;
    id <COSRadarReporterDelegate> _delegate;
    NSInputStream *_inputStream;
    NSFileManager *_fileManager;
    NSString *_gizmoBuildString;
    UILabel *_lblProgressIndicator;
    UITextField *_txfWatchKey;
    UILabel *_lblEnterKey;
    UIButton *_btnConnect;
    COSFileTransferController *_transferController;
}

@property(retain, nonatomic) COSFileTransferController *transferController; // @synthesize transferController=_transferController;
@property(retain, nonatomic) UIButton *btnConnect; // @synthesize btnConnect=_btnConnect;
@property(retain, nonatomic) UILabel *lblEnterKey; // @synthesize lblEnterKey=_lblEnterKey;
@property(retain, nonatomic) UITextField *txfWatchKey; // @synthesize txfWatchKey=_txfWatchKey;
@property(retain, nonatomic) UILabel *lblProgressIndicator; // @synthesize lblProgressIndicator=_lblProgressIndicator;
@property(retain, nonatomic) NSString *gizmoBuildString; // @synthesize gizmoBuildString=_gizmoBuildString;
@property(nonatomic) _Bool doneUnifyingLogs; // @synthesize doneUnifyingLogs=_doneUnifyingLogs;
@property(nonatomic) _Bool canDismiss; // @synthesize canDismiss=_canDismiss;
@property(nonatomic) _Bool dismissRequested; // @synthesize dismissRequested=_dismissRequested;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(nonatomic) _Bool watchDidRequestPair; // @synthesize watchDidRequestPair=_watchDidRequestPair;
@property(nonatomic) _Bool pipeRegistered; // @synthesize pipeRegistered=_pipeRegistered;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(nonatomic) __weak id <COSRadarReporterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)extractionProgressChanged:(double)arg1;
- (void)didUnpair;
- (void)didDisconnectPeripheral;
- (void)didConnectPeripheral;
- (void)transferDone;
- (void)pairingFailedWithIncorrectPasskey;
- (void)timeoutAwaitingPasskey;
- (void)beganAwaitingPasskey;
- (void)pairingFailed;
- (void)didCompletePairing;
- (void)cancel:(id)arg1;
- (void)connect:(id)arg1;
- (void)failTapToRadar:(id)arg1;
- (void)transferFailed;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)zipLogDir:(id)arg1;
- (void)composeRadar;
- (id)filePathsFromRegexPaths:(id)arg1;
- (void)fetchGizmoBuildString;
- (void)deleteMetaInfoFolder;
- (void)clearGizmoPairingLogs;
- (void)unifyPairingLogsFromDirectories:(id)arg1;
- (void)clearCompanionPairingLogs;
- (void)collectCompanionPairingLogs;
- (_Bool)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtURL:(id)arg3;
- (_Bool)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtPath:(id)arg3;
- (_Bool)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtURL:(id)arg3 toURL:(id)arg4;
- (_Bool)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

