//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  4 2016 10:44:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol FBNetworkDispatch;

@interface FBLogoutController : NSObject
{
    NSString *_accessToken;
    id _requesterConfiguration;
}

- (void)logoutWithReason:(id)arg1 completionBlock:(id)arg2;
- (id)initWithAccessToken:(id)arg1 requesterConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
