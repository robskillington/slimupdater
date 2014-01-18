//
//  SlimUpdater.h
//  SlimUpdater
//
//  Created by Rob Skillington on 1/17/14.
//  Copyright (c) 2014 Rob Skillington. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SlimUpdater : NSObject

/**
 * This will begin a background auto-update task that inspects the current version 
 * of your app by inspecting the value of CFBundleShortVersionString in your infoDictionary 
 * of your main bundle and comparing it against the "version" JSON entry of your remote current
 * version info.
 * 
 * When a successful download of a new version occurrs it will be installed when your app is 
 * next restarted - you can choose whether to prompt users to restart and provide the prompt 
 * restart text if desired.
 */
+ (void)startAutoupdateWithAppName:(NSString *)appName
         currentVersionInfoJSONURL:(NSURL *)currentVersionInfoJSONURL
              currentVersionZipURL:(NSURL *)currentVersionZipURL
 promptRestartOnSuccessfulDownload:(BOOL)promptRestartOnDownload
                 promptRestartText:(NSString *)promptRestartText;

@end
