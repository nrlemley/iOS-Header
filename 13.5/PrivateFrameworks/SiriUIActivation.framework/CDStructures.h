//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct InstrumentationDismissalState {
    _Bool fluidDismissalSet;
    _Bool punchedOut;
    _Bool incomingPhoneCallDetected;
    _Bool outgoingPhoneCallDetected;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

