//
//  MHJToDoItem.h
//  ToDoList
//
//  Created by Huajian Mao on 3/21/14.
//  Copyright (c) 2014 Huajian Mao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MHJToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
