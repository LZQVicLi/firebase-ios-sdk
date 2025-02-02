# 8.0.0
- [added] Added abuse reduction features. (#7928)

# 7.4.0
- [fixed] Prevent second `listAll` callback. (#7197)

# 7.3.0
- [fixed] Verify block is still alive before calling it in task callbacks. (#7051)

# 7.1.0
- [fixed] Remove explicit MobileCoreServices library linkage from podspec. (#6850)

# 7.0.0
- [changed] The global variable `FIRStorageVersionString` is deleted.
  `FirebaseVersion()` or `FIRFirebaseVersion()` should be used instead.
- [fixed] Fixed an issue with the List API that prevented listing of locations
  that contain the "+" sign.
- [changed] Renamed `list(withMaxResults:)` to `list(maxResults:)` in the Swift
  API.
- [fixed] Fixed an issue that caused longer than expected timeouts for users
  that specified custom timeouts.

# 3.8.1
- [fixed] Fixed typo in doc comments (#6485).

# 3.8.0
- [changed] Add error for attempt to upload directory (#5750)
- [changed] Functionally neutral source reorganization. (#5851)

# 3.7.0
- [fixed] Fixed a crash when listAll() was called at the root location. (#5772)
- [added] Added a check to FIRStorageUploadTask's `putFile:` to check if the passed in `fileURL` is a directory, and provides a clear error if it is. (#5750)

# 3.6.1
- [fixed] Fix a rare case where a StorageTask would call its completion callbacks more than
  once. (#5245)

# 3.6.0
- [added] Added watchOS support for Firebase Storage. (#4955)

# 3.5.0
- [changed] Reorganized directory structure (#4573).

# 3.4.2
- [fixed] Internal changes to addres -Wunused-property-ivar violation (#4281).

# 3.4.1
- [fixed] Fix crash in FIRStorageUploadTask (#3750).

# 3.4.0
- [fixed] Ensure that users don't accidently invoke `Storage()` instead of `Storage.storage()`.
  If your code calls the constructor of Storage directly, we will throw an assertion failure,
  instead of crashing the process later as the instance is used (#3282).

# 3.3.0
- [added] Added `StorageReference.list()` and `StorageReference.listAll()`, which allows developers to list the files and folders under the given StorageReference.

# 3.2.1
- [fixed] Fixed crash when URL passed to `StorageReference.putFile()` is `nil` (#2852).

# 3.1.0
- [fixed] `StorageReference.putFile()` now correctly propagates error if file to upload does not exist (#2458, #2350).

# 3.0.3
- [changed] Storage operations can now be scheduled and controlled from any thread (#1302, #1388).
- [fixed] Fixed an issue that prevented uploading of files whose names include semicolons.

# 3.0.2
- [changed] Migrate to use FirebaseAuthInterop interfaces to access FirebaseAuth (#1660).

# v3.0.1
- [fixed] Fixed potential `EXC_BAD_ACCESS` violation in the internal logic for processing finished downloads (#1565, #1747).

# v3.0.0
- [removed] Removed `downloadURLs` property on `StorageMetadata`. Use `StorageReference.downloadURL(completion:)` to obtain a current download URL.
- [changed] The `maxOperationRetryTime` timeout now applies to calls to `StorageReference.getMetadata(completion:)` and `StorageReference.updateMetadata(completion:)`. These calls previously used the `maxDownloadRetryTime` and `maxUploadRetryTime` timeouts.

# v2.2.0
- [changed] Deprecated `downloadURLs` property on `StorageMetadata`. Use `StorageReference.downloadURL(completion:)` to obtain a current download URL.

# v2.1.3
- [changed] Addresses CLANG_WARN_OBJC_IMPLICIT_RETAIN_SELF warnings that surface in newer versions of Xcode and CocoaPods.

# v2.1.2
- [added] Firebase Storage is now community-supported on tvOS.

# v2.1.1
- [changed] Internal cleanup in the firebase-ios-sdk repository. Functionality of the Storage SDK is not affected.

# v2.1.0
- [added] Added 'md5Hash' to FIRStorageMetadata.

# v2.0.2
- [changed] Custom FIRStorageMetadata can now be cleared by setting individual properties to 'nil'.

# v2.0.1
- [fixed] Fixed crash in FIRStorageDownloadTask that was caused by invoking callbacks that where no longer active.
- [changed] Added 'size' to the NSDictionary representation of FIRStorageMetadata.

# v2.0.0
- [changed] Initial Open Source release.

# v1.0.6

- [fixed] Fixed crash when user-provided callbacks were nil.
- [changed] Improved upload performance under spotty connectivity.

# v1.0.5

- [fixed] Snapshot data is now always from the requested snapshot, rather than
  the most recent snapshot.
- [fixed] Fixed an issue with downloads that were not properly pausing.

# v1.0.4

- [fixed] Fixed an issue causing us to not respect the developer-specified
  timeouts for initial up- and download requests.
- [fixed] Fixed uploading issues with filenames that contain the '+' character.
