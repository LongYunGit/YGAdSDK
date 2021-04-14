//
//  YGADAdapter.h
//  YGAdSDK
//
//  Created by DHY on 2021/1/14.
//  Copyright © 2021 zxl. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// SDK版本号，例如：100：（字符串表示为：1.0.0）
extern NSInteger const kYGAdSDKVersion;

@interface YGADAdapter : NSObject

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)initWithAppId:(NSString *)appId slotId:(NSString *)slotId NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
