/*
 *  Copyright (c) 2016 Spotify AB.
 *
 *  Licensed to the Apache Software Foundation (ASF) under one
 *  or more contributor license agreements.  See the NOTICE file
 *  distributed with this work for additional information
 *  regarding copyright ownership.  The ASF licenses this file
 *  to you under the Apache License, Version 2.0 (the
 *  "License"); you may not use this file except in compliance
 *  with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing,
 *  software distributed under the License is distributed on an
 *  "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 *  KIND, either express or implied.  See the License for the
 *  specific language governing permissions and limitations
 *  under the License.
 */

#import "HUBViewControllerScrollHandler.h"

NS_ASSUME_NONNULL_BEGIN

/// Mocked view controller scroll handler, for use in tests only
@interface HUBViewControllerScrollHandlerMock : NSObject <HUBViewControllerScrollHandler>

/// Whether the handler should return that scroll indicators should be shown
@property (nonatomic, assign) BOOL shouldShowScrollIndicators;

/// Whether the handler should return that content insets should automatically be adjusted
@property (nonatomic, assign) BOOL shouldAutomaticallyAdjustContentInsets;

/// The scroll deceleration rate that the handler should return
@property (nonatomic, assign) CGFloat scrollDecelerationRate;

/// The content insets that the handler should return
@property (nonatomic, assign) UIEdgeInsets contentInsets;

/// The target content offset that the handler should return
@property (nonatomic, assign) CGPoint targetContentOffset;

/// The last content rect that was sent to the handler when scrolling started
@property (nonatomic, assign, readonly) CGRect startContentRect;

/// The last content rect that was sent to the handler when scrolling ended
@property (nonatomic, assign, readonly) CGRect endContentRect;

@end

NS_ASSUME_NONNULL_END
