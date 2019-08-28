//
//  MASSessionDownloadTaskOperation.h
//  MASFoundation
//
//  Created by nimma01 on 11/06/19.
//  Copyright © 2019 CA Technologies. All rights reserved.
//

#import "MASSessionTaskOperation.h"
#import "MASFileObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface MASSessionDownloadTaskOperation : MASSessionTaskOperation <NSURLSessionDownloadDelegate>

- (instancetype)initWithSession:(NSURLSession *)session request:(NSURLRequest *)request destinationFile:(MASFileObject *)file progress:(MASFileRequestProgressBlock)progress;

@end

NS_ASSUME_NONNULL_END
