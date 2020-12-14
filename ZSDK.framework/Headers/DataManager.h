//
//  DataManager.h
//  ZSDK
//
//  Created by hua on 2020/12/9.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define kZVC(name)    [DataManager getVC:name]
#define kZView(name)  [DataManager getView:name]
#define kZImage(name) [DataManager getImage:name]

NS_ASSUME_NONNULL_BEGIN

@interface DataManager : NSObject

+ (NSBundle *)getBundle;

+ (id)getVC:(NSString *)nibName;

+ (id)getView:(NSString *)nibName;

+ (UIImage *)getImage:(NSString *)name;

@end

NS_ASSUME_NONNULL_END
