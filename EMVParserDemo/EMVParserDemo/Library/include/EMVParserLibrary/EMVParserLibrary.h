//
//  EMVParserLibrary.h
//  EMVParserLibrary
//
//  Created by jay lei on 3/1/17.
//  Copyright © 2017 jay lei. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EMVParserLibrary : NSObject

/**
 * @description - Convert a raw emv string into a list of EMV tags with values.
 * @param rawEmvData - Takes in a string of the raw emv data
 * @return - Returns a list of parsed EMV tags.
 */
-(NSMutableDictionary *)parseEmvRawData :(NSString *)rawEmvData;

/**
 * @description - Convert hex value into decimal
 * @param hexValue - Takes in a string of hex values
 * @return - Returns the integer of the hex value
 */
+(unsigned int) convertHexToDecimal :(NSString *)hexValue;

/**
 * @description - Convert decimal into string of hex value
 * @param decimalValue - Takes in integer value
 * @return - Returns the hex string of the integer
 */
+(NSString *)convertDecimalToHex :(unsigned)decimalValue;

/**
 * @description - Convert hex value into readable string
 * @param hexValue - Takes in a string of hex values
 * @return - Returns the string value of the hex
 */
+(NSString *)convertHexToString :(NSString *)hexValue;

/**
 * @description - Convert string into hex value
 * @param stringValue - Takes in a string value
 * @return - Returns the hex string of a string value
 */
+(NSString *)convertStringToHex :(NSString *)stringValue;

/**
 * @description - Convert byte array to hex string
 * @param byteData - Takes in byte data value
 * @return - Returns hex string of the byte data
 */
+(NSString *)convertByteArrayToHexString :(NSData *)byteData;

/**
 * @description - Convert hex string into byte array
 * @param hexString - Takes in raw hex string value
 * @return - Returns the byte array of the hex value
 */
+(NSData *)convertHexStringToByteData :(NSString *) hexString;

@end
