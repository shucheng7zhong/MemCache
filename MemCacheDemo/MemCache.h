//
//  MemCache.h
//  MemCacheDemo
//
//  Created by imac on 2017/9/30.
//  Copyright © 2017年 com.GodL.github. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MemCache<KeyType,ValueType> : NSObject

@property (copy,nullable) NSString *name;

@property (readonly) NSUInteger totalCost;

@property (readonly) NSUInteger totalCount;

@property (assign) NSUInteger costLimit;

@property (assign) NSUInteger countLimit;

@property BOOL shouldClearWhenReceiveMemonryWarning;

- (void)setObject:(ValueType)obj forKey:(KeyType)key;

- (nullable ValueType)objectForKey:(KeyType)key;

@end

NS_ASSUME_NONNULL_END
