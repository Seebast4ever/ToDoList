//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by Seebast4ever on 7/14/14.
//  Copyright (c) 2014 Seebast4ever. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
