//
//  YGADSplashAdView.h
//  YGAdSDK
//
//  Created by DHY on 2021/2/24.
//  Copyright © 2021 zxl. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class YGADSplashAdView;
@protocol YGADSplashAdViewDelegate <NSObject>

@optional

/**
 *  广告请求成功
 */
- (void)splashAdViewDidLoadSuccess:(YGADSplashAdView *)splashAdView;
/**
 *  广告请求失败
 */
- (void)splashAdView:(YGADSplashAdView *)splashAdView didLoadFailWithError:(NSError *)error;

/**
 *  广告展示成功
 */
- (void)splashADViewDidSuccessPresentScreen:(YGADSplashAdView *)splashAdView;

/**
 *  广告被点击
 */
- (void)splashAdViewDidClicked:(YGADSplashAdView *)splashAdView;

/**
 *  广告跳过
 */
- (void)splashAdViewDidSkipped:(YGADSplashAdView *)splashAdView;

/**
 *  广告展示结束
 */
- (void)splashadAdViewDidClosed:(YGADSplashAdView *)splashAdView;

/**
 打开deeplink结果
 */
- (void)splashadAdView:(YGADSplashAdView *)splashAdView openDeeplinkSuccess:(BOOL)success;

@end


@interface YGADSplashAdView : UIView

@property (nonatomic, readonly, copy) NSString *appId;
@property (nonatomic, readonly, copy) NSString *slotId;
/// 加载广告物料的超时时间，超时后将不显示广告
@property (nonatomic, assign) NSTimeInterval tolerateTimeout;
/// 用于广告落地页跳转
@property (nonatomic, weak) UIViewController *rootViewController;
/// 回调代理
@property (nonatomic, weak) id<YGADSplashAdViewDelegate> delegate;

- (instancetype)initWithAppId:(NSString *)appId slotId:(NSString *)slotId frame:(CGRect)frame;

/// 加载广告物料
- (void)loadAdData;

@end

NS_ASSUME_NONNULL_END
