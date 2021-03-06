//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAssistantCore/NSObject-Protocol.h>

@class NSCache;
@protocol IMAssistantAccountDataSource, IMAssistantChatDataSource, IMAssistantContactsDataSource, IMLocationManager;

@protocol IMAssistantMessageHandlerDataSource <NSObject>
@property(readonly, nonatomic) NSCache *contactIdentifierToUnifiedContactIdentifierCache;
@property(readonly, nonatomic) NSCache *spiHandleToPersonCache;
@property(readonly, nonatomic) NSCache *handleToContactIdentifierCache;
@property(readonly, nonatomic) id <IMLocationManager> locationManagerDataSource;
@property(readonly, nonatomic) id <IMAssistantAccountDataSource> accountDataSource;
@property(readonly, nonatomic) id <IMAssistantChatDataSource> chatDataSource;
@property(readonly, nonatomic) id <IMAssistantContactsDataSource> contactsDataSource;
@end

