#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonDigest.h>


@interface NSUserDefaults (OSUserDefaults)

/**
 * Sets the secret. Make sure that your secret is stored in a save place, it is recommanded to write it
 * directly into your code. Required property.
 */
+ (void)setSecret:(NSString *)secret;

/**
 * Sets the device identifier. You can use this to link user defaults to a specific machine.
 * This is particularly useful if users are likely to share plist files, e.g. if you use user defaults
 * to store product license information. Optional property.
 */
+ (void)setDeviceIdentifier:(NSString *)deviceIdentifier;

/**
 * Read data from user defaults. If key doesn't exist, valid is YES and the function mimics
 * the return behavior of the respective non-secure method.
 */
- (NSArray *)secureArrayForKey:(NSString *)key valid:(BOOL *)valid;
- (BOOL)secureBoolForKey:(NSString *)key valid:(BOOL *)valid;
- (NSData *)secureDataForKey:(NSString *)key valid:(BOOL *)valid;
- (NSDictionary *)secureDictionaryForKey:(NSString *)key valid:(BOOL *)valid;
- (float)secureFloatForKey:(NSString *)key valid:(BOOL *)valid;
- (NSInteger)secureIntegerForKey:(NSString *)key valid:(BOOL *)valid;
- (id)secureObjectForKey:(NSString *)key valid:(BOOL *)valid;
- (NSArray *)secureStringArrayForKey:(NSString *)key valid:(BOOL *)valid;
- (NSString *)secureStringForKey:(NSString *)key valid:(BOOL *)valid;
- (double)secureDoubleForKey:(NSString *)key valid:(BOOL *)valid;

/**
 * Write data to user defaults. Only property list objects (NSData, NSString, NSNumber, NSDate, NSArray, NSDictionary)
 * are supported. Passing nil as either the value or key mimics the behavior of the non-secure method.
 */
- (void)setSecureBool:(BOOL)value forKey:(NSString *)key;
- (void)setSecureFloat:(float)value forKey:(NSString *)key;
- (void)setSecureInteger:(NSInteger)value forKey:(NSString *)key;
- (void)setSecureObject:(id)value forKey:(NSString *)key;
- (void)setSecureDouble:(double)value forKey:(NSString *)key;

@end
