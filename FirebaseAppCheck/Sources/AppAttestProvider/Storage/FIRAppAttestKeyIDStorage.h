/*
 * Copyright 2021 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Foundation/Foundation.h>

@class FBLPromise<ValueType>;

NS_ASSUME_NONNULL_BEGIN

/// The protocol defines methods to store App Attest key IDs per Firebase app.
@protocol FIRAppAttestKeyIDStorageProtocol <NSObject>

- (FBLPromise<NSString *> *)setAppAttestKeyID:(nullable NSString *)keyID;

- (FBLPromise<NSString *> *)getAppAttestKeyID;

@end

/// The App Attest key ID storage implementation.
@interface FIRAppAttestKeyIDStorage : NSObject <FIRAppAttestKeyIDStorageProtocol>

- (instancetype)init NS_UNAVAILABLE;

/** Default convenience initializer.
 *  @param appName A Firebase App name (`FirebaseApp.name`). The app name will be used as a part of
 * the key to store the token for the storage instance.
 *  @param appID A Firebase App identifier (`FirebaseOptions.googleAppID`). The app ID will be used
 * as a part of the key to store the token for the storage instance.
 */
- (instancetype)initWithAppName:(NSString *)appName appID:(NSString *)appID;

@end

NS_ASSUME_NONNULL_END
