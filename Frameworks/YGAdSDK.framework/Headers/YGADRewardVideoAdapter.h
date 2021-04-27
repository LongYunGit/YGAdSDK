//
//  YGADRewardVideoAdapter.h
//  YGAdSDK
//
//  Created by admin on 2020/6/3.
//  Copyright © 2020 zxl. All rights reserved.
//

#import <YGAdSDK/YGADAdapter.h>

NS_ASSUME_NONNULL_BEGIN

@protocol YGADrewardVideoAdapterDelegate;

@interface YGADRewardVideoAdapter : YGADAdapter

/**
 *  激励视频代理
 */
@property (nonatomic, weak) id<YGADrewardVideoAdapterDelegate> delegate;

/**
 *  加载激励视频广告
 */
- (void)loadAdData;

/**
 *  显示激励视频广告
 */
- (void)showAdFromRootViewController:(UIViewController *)viewController;

@end

@protocol YGADrewardVideoAdapterDelegate <NSObject>

@optional

/**
 *  广告请求成功
 */
- (void)rewardVideoAdLoadSuccess:(YGADRewardVideoAdapter *)rewardVideoAd;
/**
 *  广告请求失败
 */
- (void)rewardVideoAd:(YGADRewardVideoAdapter *)rewardVideoAd loadFailWithError:(NSError *)error;
/**
 *  视频下载成功
 */
- (void)rewardVideoAdDidDownLoadVideo:(YGADRewardVideoAdapter *)rewardVideoAd;

/**
 *  视频下载失败
 */
- (void)rewardVideoAd:(YGADRewardVideoAdapter *)rewardVideoAd loadVideoFailWithError:(NSError *)error;

/**
 *  广告展示成功
 */
- (void)rewardVideoAdSuccessPresentScreen:(YGADRewardVideoAdapter *)rewardVideoAd;

/**
 *  广告展示失败
 */
- (void)rewardVideoAd:(YGADRewardVideoAdapter *)rewardVideoAd didPresentScreenFail:(NSError *)error;

/**
 *  广告点击跳过
 */
- (void)rewardVideoAdDidClickSkip:(YGADRewardVideoAdapter *)rewardVideoAd;

/**
 *  广告被点击
 */
- (void)rewardVideoAdDidClicked:(YGADRewardVideoAdapter *)rewardVideoAd;

/**
 *  用户点击关闭结束
 */
- (void)rewardVideoAdDidClosed:(YGADRewardVideoAdapter *)rewardVideoAd;

/**
 *  视频开始播放
 */
- (void)rewardVideoAdDidStarted:(YGADRewardVideoAdapter *)rewardVideoAd;

/**
 *  视频完成播放
 */
- (void)rewardVideoAdDidPlayFinish:(YGADRewardVideoAdapter *)rewardVideoAd;

/**
 *  视频播放失败
 */
- (void)rewardVideoAd:(YGADRewardVideoAdapter *)rewardVideoAd didVideoPlayFail:(NSError *)error;

@end

NS_ASSUME_NONNULL_END
