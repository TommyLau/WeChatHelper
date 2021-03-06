//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class MMSidebarLabelTextField, NSBox, NSString;

@interface MMBrandSubMenuTableCellView : NSTableCellView
{
    BOOL _selected;
    BOOL _isLastOne;
    NSString *_nativeUrl;
    NSString *_menuId;
    NSString *_key;
    NSString *_type;
    NSString *_menuName;
    NSString *_urlString;
    MMSidebarLabelTextField *_labelView;
    NSBox *_deviderLine;
}

@property(retain, nonatomic) NSBox *deviderLine; // @synthesize deviderLine=_deviderLine;
@property(retain, nonatomic) MMSidebarLabelTextField *labelView; // @synthesize labelView=_labelView;
@property(nonatomic) BOOL isLastOne; // @synthesize isLastOne=_isLastOne;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(retain, nonatomic) NSString *menuName; // @synthesize menuName=_menuName;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *menuId; // @synthesize menuId=_menuId;
@property(retain, nonatomic) NSString *nativeUrl; // @synthesize nativeUrl=_nativeUrl;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)doChosen;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

