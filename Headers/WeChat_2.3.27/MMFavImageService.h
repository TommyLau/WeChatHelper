//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMFavoritesMgrExt.h"
#import "MMService.h"

@class MMFavImageServiceImageHandler, MMFavImageServiceWebPageHandler, NSString;

@interface MMFavImageService : MMService <MMFavoritesMgrExt, MMService>
{
    MMFavImageServiceImageHandler *m_imageTypeHandler;
    MMFavImageServiceWebPageHandler *m_webPageTypeHandler;
}

- (void).cxx_destruct;
- (void)favoritesMgrDidRemoveItem:(id)arg1;
- (void)favoritesMgrDidUpdatedItemsWithLocalIDArray:(id)arg1;
- (void)thumnbnailImageWithFavThumRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

