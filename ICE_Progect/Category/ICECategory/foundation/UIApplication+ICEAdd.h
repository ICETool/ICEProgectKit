//
//  UIApplication+GMXAdd.h
//  GMXAFNetworkTool
//
//  Created by WLY on 16/3/15.
//  Copyright © 2016年 WLY. All rights reserved.
//
/*
 * 文件路径
 * 工程信息
 * 软件信息
 */

#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN


typedef void(^FirstLaunchBLock) (BOOL isFirst);

@interface UIApplication (ICEAdd)


/// "Documents" folder in this app's sandbox.

@property (nonatomic, readonly) NSURL *documentsURL;
@property (nonatomic, readonly) NSString *documentsPath;
/// "Caches" folder in this app's sandbox.
@property (nonatomic, readonly) NSURL *cachesURL;
@property (nonatomic, readonly) NSString *cachesPath;
/// "Library" folder in this app's sandbox.
@property (nonatomic, readonly) NSURL *libraryURL;
@property (nonatomic, readonly) NSString *libraryPath;
//app diaplay name
@property (nonatomic, readonly) NSString *appName;
/// Application's Bundle Name (show in SpringBoard).
@property (nullable, nonatomic, readonly) NSString *appBundleName;
/// Application's Bundle ID.  e.g. "com.ibireme.MyApp"
@property (nullable, nonatomic, readonly) NSString *appBundleID;
/// Application's Version.  e.g. "1.2.0"
@property (nullable, nonatomic, readonly) NSString *appVersion;
/// Application's Build number. e.g. "123"
@property (nullable, nonatomic, readonly) NSString *appBuildVersion;
/// Whether this app is being debugged (debugger attached).
@property (nonatomic, readonly) BOOL isBeingDebugged;


+ (void)isFirstLaunch:(FirstLaunchBLock)completion;

@end

NS_ASSUME_NONNULL_END