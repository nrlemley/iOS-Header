//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Notes/NoteAttachmentObject.h>

#import <NotesUI/ICLegacyAttachment-Protocol.h>

@class NSString;

@interface NoteAttachmentObject (ICLegacyAttachment) <ICLegacyAttachment>
- (id)typeUTI;
- (id)fileURL;
- (id)identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

