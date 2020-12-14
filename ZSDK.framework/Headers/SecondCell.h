//
//  SecondCell.h
//  ZSDK
//
//  Created by hua on 2020/12/10.
//

#import <UIKit/UIKit.h>

#define kSecondCell @"SecondCell"

NS_ASSUME_NONNULL_BEGIN

@interface SecondCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *img;

@property (weak, nonatomic) IBOutlet UILabel *lbl;


@end

NS_ASSUME_NONNULL_END
