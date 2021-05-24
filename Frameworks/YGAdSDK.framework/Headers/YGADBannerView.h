//
//  YGADBannerView.h
//  YGAdSDK
//
//  Created by DHY on 2021/2/24.
//  Copyright © 2021 zxl. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class YGADBannerView;
@protocol YGADBannerViewDelegate <NSObject>

@optional
/**
 *  广告请求成功
 */
- (void)bannerAdViewDidLoadSuccess:(YGADBannerView *)bannerAdView;
/**
 *  广告请求失败
 */
- (void)bannerAdView:(YGADBannerView *)bannerAdView didLoadFailWithError:(NSError *)error;

/**
 *  广告展示成功
 */
- (void)bannerAdViewDidSuccessPresentScreen:(YGADBannerView *)bannerAdView;

/**
 *  广告被点击
 */
- (void)bannerAdViewDidClicked:(YGADBannerView *)bannerAdView;

/**
 *  广告展示结束
 */
- (void)bannerAdViewDidClosed:(YGADBannerView *)bannerAdView;

/**
 打开deeplink结果
 */
- (void)bannerAdView:(YGADBannerView *)bannerAdView openDeeplinkSuccess:(BOOL)success;

@end

@interface YGADBannerView : UIView

@property (nonatomic, readonly, copy) NSString *appId;
@property (nonatomic, readonly, copy) NSString *slotId;
/// 轮播间隔时间（秒），设置在10~120秒的范围内，并在初始化时传递。如果不符合要求，将不会轮播加载广告。
@property (nonatomic, assign, readonly) NSTimeInterval interval;
@property (nonatomic, weak) id<YGADBannerViewDelegate> delegate;

- (instancetype)initWithAppId:(NSString *)appId
                       slotId:(NSString *)slotId
                       adSize:(CGSize)adsize
                     interval:(NSInteger)interval
           rootViewController:(UIViewController *)rootViewController;

/// 加载广告物料（注意：如果interval在有效范围内，仅调用一次即可，内部会自动根据interval循环加载广告物料）
- (void)loadAdData;


@end

NS_ASSUME_NONNULL_END
