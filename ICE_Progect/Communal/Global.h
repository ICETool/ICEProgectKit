//
//  Global.h
//  WLYDoctor
//
//  Created by WLY on 16/1/12.
//  Copyright © 2016年 WLY. All rights reserved.
//
/**
 *  全局色彩/字体/间距
 */

#ifndef Global_h
#define Global_h

#pragma mark - 尺寸类

#pragma mark - 屏幕尺寸
/**
 *  屏幕 rect
 */
#define SCREEN_RECT ([UIScreen mainScreen].bounds)

#define SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)

#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)

#define SCREEN_RATIO  (SCREEN_WIDTH / 320)


#define CONTENT_HEIGHT (SCREEN_HEIGHT - NAVIGATION_BAR_HEIGHT - STATUS_BAR_HEIGHT)

#pragma mark - 屏幕分辨率
/**
 *  屏幕分辨率
 */
#define SCREEN_RESOLUTION (SCREEN_WIDTH * SCREEN_HEIGHT * ([UIScreen mainScreen].scale))

#pragma mark - 获取控件尺寸
// View 坐标(x,y)和宽高(width,height)
#define X(v)                    (v).frame.origin.x
#define Y(v)                    (v).frame.origin.y
#define WIDTH(v)                (v).frame.size.width
#define HEIGHT(v)               (v).frame.size.height

#define MinX(v)                 CGRectGetMinX((v).frame)
#define MinY(v)                 CGRectGetMinY((v).frame)

#define MidX(v)                 CGRectGetMidX((v).frame)
#define MidY(v)                 CGRectGetMidY((v).frame)

#define MaxX(v)                 CGRectGetMaxX((v).frame)
#define MaxY(v)                 CGRectGetMaxY((v).frame)


#define RECT_CHANGE_x(v,x)          CGRectMake(x, Y(v), WIDTH(v), HEIGHT(v))
#define RECT_CHANGE_y(v,y)          CGRectMake(X(v), y, WIDTH(v), HEIGHT(v))
#define RECT_CHANGE_point(v,x,y)    CGRectMake(x, y, WIDTH(v), HEIGHT(v))
#define RECT_CHANGE_width(v,w)      CGRectMake(X(v), Y(v), w, HEIGHT(v))
#define RECT_CHANGE_height(v,h)     CGRectMake(X(v), Y(v), WIDTH(v), h)
#define RECT_CHANGE_size(v,w,h)     CGRectMake(X(v), Y(v), w, h)

#pragma mark - 控件高度
/* 控件高度 */
#define NAVIGATION_BAR_HEIGHT               (MINIMAL_UI ? 64.0f : 44.0f)
#define STATUS_BAR_HEIGHT                                         20    // 状态栏
#define TABBAR_HEIGHT                                             49    //标签栏

#pragma mark - 视图间距
/**
 *  视图间距
 */
#define SPACING                          15
#define SPACING_UP_UNDER                 30      //弹出框内容距离上下
#define CELL_H                           40 * SCREEN_RATIO    //下拉菜单高度
#define AVATAR_Avator_h                  60 * SCREEN_RATIO      //头像大小



#pragma mark - 颜色
#define Global_back_dark          UIColorWithHex(0xcccccc)  //深色背景颜色
#define Global_back               UIColorWithHex(0xeeeeee) //背景颜色

#define Global_Line_dark          UIColorWithHex(0xffffff)  //深色分割线
#define Global_Line               UIColorWithHex(0xeeeeee) //分割线颜色
#pragma mark - 颜色类
#define Global_red                UIColorWithRGB(234,19,35)    //全局红色
#define Global_white              UIColorWithHex(0xffffff) //白色
#define Global_tineColor          UIColorWithHex(0x50cb8c)
#define Global_clear              [UIColor clearColor]



#pragma mark - app信息 字符串标示

#define kAccesstoken                           @"accessToken"
#define kUserName                              @"mobliePhone"
#define kUserInfo                              @"userInfo"




#endif /* Global_h */
