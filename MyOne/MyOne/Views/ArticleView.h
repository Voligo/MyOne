//
//  ReadingView.h
//  MyOne
//
//  Created by HelloWorld on 8/2/15.
//  Copyright (c) 2015 melody. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ArticleEntity;

@interface ArticleView : UIView

- (void)configureArticleViewWithArticleEntity:(ArticleEntity *)ArticleEntity;

- (void)refreshSubviewsForNewItem;

@end
