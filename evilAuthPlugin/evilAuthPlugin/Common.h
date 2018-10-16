//
//  Common.h
//  evilAuthPlugin
//
//  Copied from here: https://github.com/alex030/UserConfigAgent/tree/master/Common
//

#ifndef Common_h
#define Common_h
#import <Foundation/Foundation.h>

BOOL ValidateLoginPassword(NSString *newPassword);
BOOL ValidateLoginKeychainPassword(NSString *OldPassword);

#endif /* Common_h */
