//
//  TKMAliModal.h
//  TKMall
//
//  Created by 罗浩 on 16/8/31.
//  Copyright © 2016年 pufusi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TKMAliModal : NSObject

/**
 *  sign
 */
@property (nonatomic, copy) NSString *sign;
/**
 *  _input_charset
 */
@property (nonatomic, copy) NSString *_input_charset;
/**
 *  it_b_pay
 */
@property (nonatomic, strong) NSString *it_b_pay;
/**
 *  subject
 */
@property (nonatomic, copy) NSString *subject;
/**
 *  body
 */
@property (nonatomic, copy) NSString *body;
/**
 *  total_fee
 */
@property (nonatomic, copy) NSString *total_fee;

/**
 *  sign_type
 */
@property (nonatomic, copy) NSString *sign_type;
/**
 *  service
 */
@property (nonatomic, copy) NSString *service;
/**
 *  notify_url
 */
@property (nonatomic, copy) NSString *notify_url;
/**
 *  partner
 */
@property (nonatomic, copy) NSString *partner;
/**
 *  seller_id
 */
@property (nonatomic, copy) NSString *seller_id;
/**
 *  out_trade_no
 */
@property (nonatomic, copy) NSString *out_trade_no;
/**
 *  payment_type
 */
@property (nonatomic, copy) NSString *payment_type;

@end
