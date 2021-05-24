//
//  YGADFullscreenVideoAdapter.h
//  YGAdSDK
//
//  Created by admin on 2020/6/3.
//  Copyright © 2020 zxl. All rights reserved.
//

#import <YGAdSDK/YGADAdapter.h>

NS_ASSUME_NONNULL_BEGIN

@protocol YGADFullscreenVideoAdapterDelegate;
@interface YGADFullscreenVideoAdapter : YGADAdapter

/**
 *  全屏视频代理
 */
@property (nonatomic, weak) id<YGADFullscreenVideoAdapterDelegate> delegate;

/// 加载广告物料
- (void)loadAdData;
/// 显示广告
- (void)showAdFromRootViewController:(UIViewController *)viewController;

@end

@protocol YGADFullscreenVideoAdapterDelegate <NSObject>

@optional
/**
 *  广告请求成功
 */
- (void)fullscreenVideoAdLoadSuccess:(YGADFullscreenVideoAdapter *)fullscreenVideoAd;
/**
 *  广告请求失败
 */
- (void)fullscreenVideoAd:(YGADFullscreenVideoAdapter *)fullscreenVideoAd loadFailWithError:(NSError *)error;
/**
 *  视频下载成功
 */
- (void)fullscreenVideoAdDidDownLoadVideo:(YGADFullscreenVideoAdapter *)fullscreenVideoAd;

/**
 *  视频下载失败
 */
- (void)fullscreenVideoAd:(YGADFullscreenVideoAdapter *)fullscreenVideoAd didDownLoadVideoFail:(NSError *)error;

/**
 *  广告展示成功
 */
- (void)fullscreenVideoAdSuccessPresentScreen:(YGADFullscreenVideoAdapter *)fullscreenVideoAd;

/**
 *  广告展示失败
 */
- (void)fullscreenVideoAd:(YGADFullscreenVideoAdapter *)fullscreenVideoAd didPresentScreenFail:(NSError *)error;

/**
 *  广告被点击
 */
- (void)fullscreenVideoAdDidClicked:(YGADFullscreenVideoAdapter *)fullscreenVideoAd;

/**
 *  跳过
 */
- (void)fullscreenVideoAdDidClickSkip:(YGADFullscreenVideoAdapter *)fullscreenVideoAd;

/**
 *  用户点击关闭结束
 */
- (void)fullscreenVideoAdDidClosed:(YGADFullscreenVideoAdapter *)fullscreenVideoAd;

/**
 *  视频开始播放
 */
- (void)fullscreenVideoAdDidStarted:(YGADFullscreenVideoAdapter *)fullscreenVideoAd;

/**
 *  视频完成播放
 */
- (void)fullscreenVideoAdDidPlayFinish:(YGADFullscreenVideoAdapter *)fullscreenVideoAd;

/**
 *  视频播放失败
 */
- (void)fullscreenVideoAd:(YGADFullscreenVideoAdapter *)fullscreenVideoAd didVideoPlayFail:(NSError *)error;

/**
 打开deeplink结果
 */
- (void)fullscreenVideoAd:(YGADFullscreenVideoAdapter *)fullscreenVideoAd openDeeplinkSuccess:(BOOL)success;

/**
 视频播放进度
 */
- (void)fullscreenVideoAd:(YGADFullscreenVideoAdapter *)fullscreenVideoAd didPlayToTimeSeconds:(int)seconds totalSeconds:(int)total;

@end

NS_ASSUME_NONNULL_END
