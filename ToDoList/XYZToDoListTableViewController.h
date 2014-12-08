//
//  XYZToDoListTableViewController.h
//  ToDoList
//
//  Created by Seebast4ever on 7/8/14.
//  Copyright (c) 2014 Seebast4ever. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XYZToDoItem.h"

@interface XYZToDoListTableViewController : UITableViewController

@property XYZToDoItem *toDoItem;

- (IBAction)unwindToList:(UIStoryboardSegue *) segue;

@end
