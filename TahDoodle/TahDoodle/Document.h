//
//  Document.h
//  TahDoodle
//
//  Created by Managam Silalahi on 9/2/16.
//  Copyright © 2016 Managam Silalahi. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface Document : NSDocument <NSTableViewDataSource>

@property (nonatomic) NSMutableArray *tasks;
@property (nonatomic) IBOutlet NSTableView *taskTable;

- (IBAction)addTask:(id)sender;

@end

