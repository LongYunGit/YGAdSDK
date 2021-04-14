//
//  YGADNativeView.h
//  YGAdSDK
//
//  Created by admin on 2020/6/3.
//  Copyright © 2020 zxl. All rights reserved.
//

#import <YGAdSDK/YGADAdapter.h>
#import <YGAdSDK/YGADNativeView.h>

NS_ASSUME_NONNULL_BEGIN

@protocol YGADnativeAdapterDelegate;

/// 信息流广告
@interface YGADNativeAdapter : YGADAdapter

/**
 *  信息流代理
 */
@property (nonatomic, weak) id<YGADnativeAdapterDelegate> delegate;


/// 加载广告物料（目前仅加载一个广告视图）
- (void)loadAdDataWithSize:(CGSize)size;

@end

@protocol YGADnativeAdapterDelegate <NSObject>

@optional

/**
 *  广告请求成功
 */
- (void)nativeAdLoadSuccess:(YGADNativeAdapter *)nativeAd views:(NSArray<YGADNativeView *> *)views;
/**
 *  广告请求失败
 */
- (void)nativeAd:(YGADNativeAdapter *)nativeAd loadFailWithError:(NSError *)error;

/**
 *  广告展示成功
 */
- (void)nativeAdSuccessPresentScreen:(YGADNativeView *)nativeAdView;

/**
 *  广告被点击
 */
- (void)nativeAdDidClicked:(YGADNativeView *)nativeAdView;

@end

NS_ASSUME_NONNULL_END
