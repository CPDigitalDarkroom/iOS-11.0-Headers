//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBRemoteDataProvider.h"

@class BBDataProviderProxy, NSString;

@interface SBSettingsDataProvider : NSObject <BBRemoteDataProvider>
{
    BBDataProviderProxy *_dataProviderProxy;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)defaultSectionInfo;
- (id)sortDescriptors;
- (id)sectionIdentifier;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

