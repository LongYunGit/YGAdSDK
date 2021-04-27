//
//  YGADInterstitialAdapter.h
//  YGAdSDK
//
//  Created by admin on 2020/6/3.
//  Copyright © 2020 zxl. All rights reserved.
//

#import <YGAdSDK/YGADAdapter.h>

NS_ASSUME_NONNULL_BEGIN


@protocol YGADInterstitialAdapterDelegate;

/// 插屏广告
@interface YGADInterstitialAdapter : YGADAdapter

/**
 *  插屏代理
 */
@property (nonatomic, weak) id<YGADInterstitialAdapterDelegate> delegate;


/**
 *  加载插屏广告物料
 */
- (void)loadAdData;

/**
 *  显示插屏广告  
 */
- (void)showAdFromRootViewController:(UIViewController *)controller;

@end

@protocol YGADInterstitialAdapterDelegate <NSObject>

@optional

/**
 *  广告请求成功
 */
- (void)interstitialAdLoadSuccess:(YGADInterstitialAdapter *)interstitialAd;
/**
 *  广告请求失败
 */
- (void)interstitialAd:(YGADInterstitialAdapter *)interstitialAd loadFailWithError:(NSError *)error;

/**
 *  广告展示成功
 */
- (void)interstitialAdSuccessPresentScreen:(YGADInterstitialAdapter *)interstitialAd;

/**
 *  广告展示失败
 */
- (void)interstitialAd:(YGADInterstitialAdapter *)interstitialAd didPresentScreenFail:(NSError *)error;

/**
 *  广告被点击
 */
- (void)interstitialAdDidClicked:(YGADInterstitialAdapter *)interstitialAd;

/**
 *  广告展示结束
 */
- (void)interstitialAdDidClosed:(YGADInterstitialAdapter *)interstitialAd;

@end

NS_ASSUME_NONNULL_END
