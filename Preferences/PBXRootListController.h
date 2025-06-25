@import Cephei;
@import CepheiPrefs;

#import <Preferences/PSListController.h>

#import "./Vendor/Randy420.h"

@interface PBXRootListController : HBRootListController
@property (nonatomic, retain) NSDictionary *cache;
- (void)apply;
- (void)cstm;
- (void)customPac;
- (void)disable;
- (void)enable;
- (void)pbxd;
- (void)pbxp;
- (void)mybx;
@end
