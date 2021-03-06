//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableView.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class NSString;

@interface JWCTableView : NSTableView <NSTableViewDataSource, NSTableViewDelegate>
{
    id <JWCTableViewDataSource> _jwcTableViewDataSource;
    id <JWCTableViewDelegate> _jwcTableViewDelegate;
}

@property(nonatomic) id <JWCTableViewDelegate> jwcTableViewDelegate; // @synthesize jwcTableViewDelegate=_jwcTableViewDelegate;
@property(nonatomic) id <JWCTableViewDataSource> jwcTableViewDataSource; // @synthesize jwcTableViewDataSource=_jwcTableViewDataSource;
- (long long)getNumberOfRowsAtIndexPath:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (void)noteHeightOfRowChangedWithIndexPath:(id)arg1;
- (struct CGRect)rectForRowAtIndexPath:(id)arg1;
- (id)cellForRowAtIndexPath:(id)arg1;
- (id)indexPathForView:(id)arg1;
- (long long)tableView:(id)arg1 getSectionFromRow:(long long)arg2 isSection:(char *)arg3;
- (id)tableView:(id)arg1 indexPathForRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)keyDown:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

