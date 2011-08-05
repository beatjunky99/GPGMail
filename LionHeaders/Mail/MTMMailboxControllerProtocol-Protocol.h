/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSURL;

@protocol MTMMailboxControllerProtocol <NSObject>
- (void)mailboxListWillBeUpdated:(id)arg1;
- (void)mailboxListWasUpdated:(id)arg1;
- (id)messageWithID:(id)arg1;
- (id)accountForAccountID:(id)arg1;
- (id)revisionIDForURL:(id)arg1;
@property(readonly) NSURL *tocURL;
@property(readonly) NSURL *mailLibraryURL;
@end
