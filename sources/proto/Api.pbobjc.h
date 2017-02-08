// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: api.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class ITMCodePointsPerCell;
@class ITMCoord;
@class ITMCoordRange;
@class ITMGetBufferRequest;
@class ITMGetBufferResponse;
@class ITMGetPromptRequest;
@class ITMGetPromptResponse;
@class ITMKeystrokeNotification;
@class ITMLineContents;
@class ITMLineRange;
@class ITMLocationChangeNotification;
@class ITMNotification;
@class ITMNotificationRequest;
@class ITMNotificationResponse;
@class ITMPromptNotification;
@class ITMRange;
@class ITMRegisterToolRequest;
@class ITMRegisterToolResponse;
@class ITMScreenUpdateNotification;
@class ITMSetProfilePropertyRequest;
@class ITMSetProfilePropertyResponse;
@class ITMTransactionRequest;
@class ITMTransactionResponse;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum ITMNotificationType

typedef GPB_ENUM(ITMNotificationType) {
  ITMNotificationType_NotifyOnKeystroke = 1,
  ITMNotificationType_NotifyOnScreenUpdate = 2,
  ITMNotificationType_NotifyOnPrompt = 3,
  ITMNotificationType_NotifyOnLocationChange = 4,
};

GPBEnumDescriptor *ITMNotificationType_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL ITMNotificationType_IsValidValue(int32_t value);

#pragma mark - Enum ITMRegisterToolRequest_ToolType

typedef GPB_ENUM(ITMRegisterToolRequest_ToolType) {
  ITMRegisterToolRequest_ToolType_WebViewTool = 1,
};

GPBEnumDescriptor *ITMRegisterToolRequest_ToolType_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL ITMRegisterToolRequest_ToolType_IsValidValue(int32_t value);

#pragma mark - Enum ITMRegisterToolResponse_Status

typedef GPB_ENUM(ITMRegisterToolResponse_Status) {
  ITMRegisterToolResponse_Status_Ok = 0,
  ITMRegisterToolResponse_Status_RequestMalformed = 1,
  ITMRegisterToolResponse_Status_PermissionDenied = 2,
};

GPBEnumDescriptor *ITMRegisterToolResponse_Status_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL ITMRegisterToolResponse_Status_IsValidValue(int32_t value);

#pragma mark - Enum ITMNotificationResponse_Status

typedef GPB_ENUM(ITMNotificationResponse_Status) {
  ITMNotificationResponse_Status_Ok = 0,
  ITMNotificationResponse_Status_SessionNotFound = 1,
  ITMNotificationResponse_Status_RequestMalformed = 2,
  ITMNotificationResponse_Status_NotSubscribed = 3,
  ITMNotificationResponse_Status_AlreadySubscribed = 4,
};

GPBEnumDescriptor *ITMNotificationResponse_Status_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL ITMNotificationResponse_Status_IsValidValue(int32_t value);

#pragma mark - Enum ITMKeystrokeNotification_Modifiers

typedef GPB_ENUM(ITMKeystrokeNotification_Modifiers) {
  ITMKeystrokeNotification_Modifiers_Control = 1,
  ITMKeystrokeNotification_Modifiers_Option = 2,
  ITMKeystrokeNotification_Modifiers_Command = 3,
  ITMKeystrokeNotification_Modifiers_Shift = 4,
  ITMKeystrokeNotification_Modifiers_Function = 5,
  ITMKeystrokeNotification_Modifiers_Numpad = 6,
};

GPBEnumDescriptor *ITMKeystrokeNotification_Modifiers_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL ITMKeystrokeNotification_Modifiers_IsValidValue(int32_t value);

#pragma mark - Enum ITMGetBufferResponse_Status

typedef GPB_ENUM(ITMGetBufferResponse_Status) {
  ITMGetBufferResponse_Status_Ok = 0,
  ITMGetBufferResponse_Status_SessionNotFound = 1,
  ITMGetBufferResponse_Status_InvalidLineRange = 2,
  ITMGetBufferResponse_Status_RequestMalformed = 3,
};

GPBEnumDescriptor *ITMGetBufferResponse_Status_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL ITMGetBufferResponse_Status_IsValidValue(int32_t value);

#pragma mark - Enum ITMGetPromptResponse_Status

typedef GPB_ENUM(ITMGetPromptResponse_Status) {
  ITMGetPromptResponse_Status_Ok = 0,
  ITMGetPromptResponse_Status_SessionNotFound = 1,
  ITMGetPromptResponse_Status_RequestMalformed = 2,
  ITMGetPromptResponse_Status_PromptUnavailable = 3,
};

GPBEnumDescriptor *ITMGetPromptResponse_Status_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL ITMGetPromptResponse_Status_IsValidValue(int32_t value);

#pragma mark - Enum ITMSetProfilePropertyResponse_Status

typedef GPB_ENUM(ITMSetProfilePropertyResponse_Status) {
  ITMSetProfilePropertyResponse_Status_Ok = 0,
  ITMSetProfilePropertyResponse_Status_SessionNotFound = 1,
  ITMSetProfilePropertyResponse_Status_RequestMalformed = 2,
};

GPBEnumDescriptor *ITMSetProfilePropertyResponse_Status_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL ITMSetProfilePropertyResponse_Status_IsValidValue(int32_t value);

#pragma mark - Enum ITMTransactionResponse_Status

typedef GPB_ENUM(ITMTransactionResponse_Status) {
  ITMTransactionResponse_Status_Ok = 0,
  ITMTransactionResponse_Status_NoTransaction = 1,
  ITMTransactionResponse_Status_AlreadyInTransaction = 2,
};

GPBEnumDescriptor *ITMTransactionResponse_Status_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL ITMTransactionResponse_Status_IsValidValue(int32_t value);

#pragma mark - Enum ITMLineContents_Continuation

/** How does this line end? */
typedef GPB_ENUM(ITMLineContents_Continuation) {
  /** This line is not wrapped. */
  ITMLineContents_Continuation_ContinuationHardEol = 1,

  /** The next line is a continuation of this line. */
  ITMLineContents_Continuation_ContinuationSoftEol = 2,
};

GPBEnumDescriptor *ITMLineContents_Continuation_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL ITMLineContents_Continuation_IsValidValue(int32_t value);

#pragma mark - ITMApiRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface ITMApiRoot : GPBRootObject
@end

#pragma mark - ITMRequest

typedef GPB_ENUM(ITMRequest_FieldNumber) {
  ITMRequest_FieldNumber_Id_p = 1,
  ITMRequest_FieldNumber_GetBufferRequest = 100,
  ITMRequest_FieldNumber_GetPromptRequest = 101,
  ITMRequest_FieldNumber_TransactionRequest = 102,
  ITMRequest_FieldNumber_NotificationRequest = 103,
  ITMRequest_FieldNumber_RegisterToolRequest = 104,
  ITMRequest_FieldNumber_SetProfilePropertyRequest = 105,
};

/**
 * All requests are wrapped in this message. This encoded message is the entirety of the payload
 * of messages sent over WebSocket from client to iTerm2.
 **/
@interface ITMRequest : GPBMessage

@property(nonatomic, readwrite) int64_t id_p;

@property(nonatomic, readwrite) BOOL hasId_p;
/** Set exactly one of these fields. */
@property(nonatomic, readwrite, strong, null_resettable) ITMGetBufferRequest *getBufferRequest;
/** Test to see if @c getBufferRequest has been set. */
@property(nonatomic, readwrite) BOOL hasGetBufferRequest;

@property(nonatomic, readwrite, strong, null_resettable) ITMGetPromptRequest *getPromptRequest;
/** Test to see if @c getPromptRequest has been set. */
@property(nonatomic, readwrite) BOOL hasGetPromptRequest;

@property(nonatomic, readwrite, strong, null_resettable) ITMTransactionRequest *transactionRequest;
/** Test to see if @c transactionRequest has been set. */
@property(nonatomic, readwrite) BOOL hasTransactionRequest;

@property(nonatomic, readwrite, strong, null_resettable) ITMNotificationRequest *notificationRequest;
/** Test to see if @c notificationRequest has been set. */
@property(nonatomic, readwrite) BOOL hasNotificationRequest;

@property(nonatomic, readwrite, strong, null_resettable) ITMRegisterToolRequest *registerToolRequest;
/** Test to see if @c registerToolRequest has been set. */
@property(nonatomic, readwrite) BOOL hasRegisterToolRequest;

@property(nonatomic, readwrite, strong, null_resettable) ITMSetProfilePropertyRequest *setProfilePropertyRequest;
/** Test to see if @c setProfilePropertyRequest has been set. */
@property(nonatomic, readwrite) BOOL hasSetProfilePropertyRequest;

@end

#pragma mark - ITMResponse

typedef GPB_ENUM(ITMResponse_FieldNumber) {
  ITMResponse_FieldNumber_Id_p = 1,
  ITMResponse_FieldNumber_GetBufferResponse = 100,
  ITMResponse_FieldNumber_GetPromptResponse = 101,
  ITMResponse_FieldNumber_TransactionResponse = 102,
  ITMResponse_FieldNumber_NotificationResponse = 103,
  ITMResponse_FieldNumber_RegisterToolResponse = 104,
  ITMResponse_FieldNumber_SetProfilePropertyResponse = 105,
  ITMResponse_FieldNumber_Notification = 1000,
};

/**
 * All responses are wrapped in this message. This encoded message is the entirety of the payload
 * of messages sent over WebSocket from iTerm2 to client.
 **/
@interface ITMResponse : GPBMessage

@property(nonatomic, readwrite) int64_t id_p;

@property(nonatomic, readwrite) BOOL hasId_p;
@property(nonatomic, readwrite, strong, null_resettable) ITMGetBufferResponse *getBufferResponse;
/** Test to see if @c getBufferResponse has been set. */
@property(nonatomic, readwrite) BOOL hasGetBufferResponse;

@property(nonatomic, readwrite, strong, null_resettable) ITMGetPromptResponse *getPromptResponse;
/** Test to see if @c getPromptResponse has been set. */
@property(nonatomic, readwrite) BOOL hasGetPromptResponse;

@property(nonatomic, readwrite, strong, null_resettable) ITMTransactionResponse *transactionResponse;
/** Test to see if @c transactionResponse has been set. */
@property(nonatomic, readwrite) BOOL hasTransactionResponse;

@property(nonatomic, readwrite, strong, null_resettable) ITMNotificationResponse *notificationResponse;
/** Test to see if @c notificationResponse has been set. */
@property(nonatomic, readwrite) BOOL hasNotificationResponse;

@property(nonatomic, readwrite, strong, null_resettable) ITMRegisterToolResponse *registerToolResponse;
/** Test to see if @c registerToolResponse has been set. */
@property(nonatomic, readwrite) BOOL hasRegisterToolResponse;

@property(nonatomic, readwrite, strong, null_resettable) ITMSetProfilePropertyResponse *setProfilePropertyResponse;
/** Test to see if @c setProfilePropertyResponse has been set. */
@property(nonatomic, readwrite) BOOL hasSetProfilePropertyResponse;

/** This is the only response that is sent spontaneously. The 'id' field will not be set. */
@property(nonatomic, readwrite, strong, null_resettable) ITMNotification *notification;
/** Test to see if @c notification has been set. */
@property(nonatomic, readwrite) BOOL hasNotification;

@end

#pragma mark - ITMRegisterToolRequest

typedef GPB_ENUM(ITMRegisterToolRequest_FieldNumber) {
  ITMRegisterToolRequest_FieldNumber_Name = 1,
  ITMRegisterToolRequest_FieldNumber_Identifier = 2,
  ITMRegisterToolRequest_FieldNumber_ToolType = 3,
  ITMRegisterToolRequest_FieldNumber_URL = 4,
  ITMRegisterToolRequest_FieldNumber_RevealIfAlreadyRegistered = 5,
};

/**
 * Registers a toolbelt tool that displays a webvieww with a URL of your choice.
 **/
@interface ITMRegisterToolRequest : GPBMessage

/** This name is displayed to the user. */
@property(nonatomic, readwrite, copy, null_resettable) NSString *name;
/** Test to see if @c name has been set. */
@property(nonatomic, readwrite) BOOL hasName;

/**
 * The tool's identifier should be unique. Prefix it with your app bundle. For example:
 * com.example.mytool
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *identifier;
/** Test to see if @c identifier has been set. */
@property(nonatomic, readwrite) BOOL hasIdentifier;

/**
 * The first time a tool is registered iTerm2 automatically adds it to the
 * set of visible tools. To show it on subsequent re-registrations, set this
 * to true. If the toolbelt itself is hidden, it will not be opened.
 **/
@property(nonatomic, readwrite) BOOL revealIfAlreadyRegistered;

@property(nonatomic, readwrite) BOOL hasRevealIfAlreadyRegistered;
@property(nonatomic, readwrite) ITMRegisterToolRequest_ToolType toolType;

@property(nonatomic, readwrite) BOOL hasToolType;
/** For web view tools: The URL loaded at startup */
@property(nonatomic, readwrite, copy, null_resettable) NSString *URL;
/** Test to see if @c URL has been set. */
@property(nonatomic, readwrite) BOOL hasURL;

@end

#pragma mark - ITMRegisterToolResponse

typedef GPB_ENUM(ITMRegisterToolResponse_FieldNumber) {
  ITMRegisterToolResponse_FieldNumber_Status = 1,
};

@interface ITMRegisterToolResponse : GPBMessage

@property(nonatomic, readwrite) ITMRegisterToolResponse_Status status;

@property(nonatomic, readwrite) BOOL hasStatus;
@end

#pragma mark - ITMNotificationRequest

typedef GPB_ENUM(ITMNotificationRequest_FieldNumber) {
  ITMNotificationRequest_FieldNumber_Session = 1,
  ITMNotificationRequest_FieldNumber_Subscribe = 2,
  ITMNotificationRequest_FieldNumber_NotificationType = 3,
};

@interface ITMNotificationRequest : GPBMessage

/** Leave this empty to use the current session, if any. */
@property(nonatomic, readwrite, copy, null_resettable) NSString *session;
/** Test to see if @c session has been set. */
@property(nonatomic, readwrite) BOOL hasSession;

/** Set to true to subscribe, false to unsubscribe. */
@property(nonatomic, readwrite) BOOL subscribe;

@property(nonatomic, readwrite) BOOL hasSubscribe;
/** When to be notified (or notification to unsubscribe from) */
@property(nonatomic, readwrite) ITMNotificationType notificationType;

@property(nonatomic, readwrite) BOOL hasNotificationType;
@end

#pragma mark - ITMNotificationResponse

typedef GPB_ENUM(ITMNotificationResponse_FieldNumber) {
  ITMNotificationResponse_FieldNumber_Status = 1,
};

@interface ITMNotificationResponse : GPBMessage

@property(nonatomic, readwrite) ITMNotificationResponse_Status status;

@property(nonatomic, readwrite) BOOL hasStatus;
@end

#pragma mark - ITMNotification

typedef GPB_ENUM(ITMNotification_FieldNumber) {
  ITMNotification_FieldNumber_KeystrokeNotification = 1,
  ITMNotification_FieldNumber_ScreenUpdateNotification = 2,
  ITMNotification_FieldNumber_PromptNotification = 3,
  ITMNotification_FieldNumber_LocationChangeNotification = 4,
};

@interface ITMNotification : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) ITMKeystrokeNotification *keystrokeNotification;
/** Test to see if @c keystrokeNotification has been set. */
@property(nonatomic, readwrite) BOOL hasKeystrokeNotification;

@property(nonatomic, readwrite, strong, null_resettable) ITMScreenUpdateNotification *screenUpdateNotification;
/** Test to see if @c screenUpdateNotification has been set. */
@property(nonatomic, readwrite) BOOL hasScreenUpdateNotification;

@property(nonatomic, readwrite, strong, null_resettable) ITMPromptNotification *promptNotification;
/** Test to see if @c promptNotification has been set. */
@property(nonatomic, readwrite) BOOL hasPromptNotification;

@property(nonatomic, readwrite, strong, null_resettable) ITMLocationChangeNotification *locationChangeNotification;
/** Test to see if @c locationChangeNotification has been set. */
@property(nonatomic, readwrite) BOOL hasLocationChangeNotification;

@end

#pragma mark - ITMKeystrokeNotification

typedef GPB_ENUM(ITMKeystrokeNotification_FieldNumber) {
  ITMKeystrokeNotification_FieldNumber_Characters = 1,
  ITMKeystrokeNotification_FieldNumber_CharactersIgnoringModifiers = 2,
  ITMKeystrokeNotification_FieldNumber_ModifiersArray = 3,
  ITMKeystrokeNotification_FieldNumber_KeyCode = 4,
};

@interface ITMKeystrokeNotification : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *characters;
/** Test to see if @c characters has been set. */
@property(nonatomic, readwrite) BOOL hasCharacters;

@property(nonatomic, readwrite, copy, null_resettable) NSString *charactersIgnoringModifiers;
/** Test to see if @c charactersIgnoringModifiers has been set. */
@property(nonatomic, readwrite) BOOL hasCharactersIgnoringModifiers;

// |modifiersArray| contains |ITMKeystrokeNotification_Modifiers|
@property(nonatomic, readwrite, strong, null_resettable) GPBEnumArray *modifiersArray;
/** The number of items in @c modifiersArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger modifiersArray_Count;

@property(nonatomic, readwrite) int32_t keyCode;

@property(nonatomic, readwrite) BOOL hasKeyCode;
@end

#pragma mark - ITMScreenUpdateNotification

@interface ITMScreenUpdateNotification : GPBMessage

@end

#pragma mark - ITMPromptNotification

@interface ITMPromptNotification : GPBMessage

@end

#pragma mark - ITMLocationChangeNotification

typedef GPB_ENUM(ITMLocationChangeNotification_FieldNumber) {
  ITMLocationChangeNotification_FieldNumber_HostName = 1,
  ITMLocationChangeNotification_FieldNumber_UserName = 2,
  ITMLocationChangeNotification_FieldNumber_Directory = 3,
};

@interface ITMLocationChangeNotification : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *hostName;
/** Test to see if @c hostName has been set. */
@property(nonatomic, readwrite) BOOL hasHostName;

@property(nonatomic, readwrite, copy, null_resettable) NSString *userName;
/** Test to see if @c userName has been set. */
@property(nonatomic, readwrite) BOOL hasUserName;

@property(nonatomic, readwrite, copy, null_resettable) NSString *directory;
/** Test to see if @c directory has been set. */
@property(nonatomic, readwrite) BOOL hasDirectory;

@end

#pragma mark - ITMGetBufferRequest

typedef GPB_ENUM(ITMGetBufferRequest_FieldNumber) {
  ITMGetBufferRequest_FieldNumber_Session = 1,
  ITMGetBufferRequest_FieldNumber_LineRange = 2,
};

/**
 * Requests the contents of a range of lines.
 **/
@interface ITMGetBufferRequest : GPBMessage

/** Leave this empty to use the current session, if any. */
@property(nonatomic, readwrite, copy, null_resettable) NSString *session;
/** Test to see if @c session has been set. */
@property(nonatomic, readwrite) BOOL hasSession;

/** Which lines to return? */
@property(nonatomic, readwrite, strong, null_resettable) ITMLineRange *lineRange;
/** Test to see if @c lineRange has been set. */
@property(nonatomic, readwrite) BOOL hasLineRange;

@end

#pragma mark - ITMGetBufferResponse

typedef GPB_ENUM(ITMGetBufferResponse_FieldNumber) {
  ITMGetBufferResponse_FieldNumber_Status = 1,
  ITMGetBufferResponse_FieldNumber_Range = 2,
  ITMGetBufferResponse_FieldNumber_ContentsArray = 3,
  ITMGetBufferResponse_FieldNumber_Cursor = 4,
  ITMGetBufferResponse_FieldNumber_NumLinesAboveScreen = 5,
};

/**
 * Contains the contents of a range of lines.
 **/
@interface ITMGetBufferResponse : GPBMessage

@property(nonatomic, readwrite) ITMGetBufferResponse_Status status;

@property(nonatomic, readwrite) BOOL hasStatus;
/** Which lines were returned */
@property(nonatomic, readwrite, strong, null_resettable) ITMRange *range;
/** Test to see if @c range has been set. */
@property(nonatomic, readwrite) BOOL hasRange;

/** Those lines' contents. */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<ITMLineContents*> *contentsArray;
/** The number of items in @c contentsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger contentsArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) ITMCoord *cursor;
/** Test to see if @c cursor has been set. */
@property(nonatomic, readwrite) BOOL hasCursor;

/**
 * The number of lines (including lines lost from the head of scrollback history) that precede
 * the screen. Subtract this from cursor.y to get the cursor's position on the screen when it
 * is scrolled to the bottom.
 **/
@property(nonatomic, readwrite) int64_t numLinesAboveScreen;

@property(nonatomic, readwrite) BOOL hasNumLinesAboveScreen;
@end

#pragma mark - ITMGetPromptRequest

typedef GPB_ENUM(ITMGetPromptRequest_FieldNumber) {
  ITMGetPromptRequest_FieldNumber_Session = 1,
};

/**
 * Requests metadata about the current shell prompt.
 **/
@interface ITMGetPromptRequest : GPBMessage

/** Leave this empty to use the current session, if any. */
@property(nonatomic, readwrite, copy, null_resettable) NSString *session;
/** Test to see if @c session has been set. */
@property(nonatomic, readwrite) BOOL hasSession;

@end

#pragma mark - ITMGetPromptResponse

typedef GPB_ENUM(ITMGetPromptResponse_FieldNumber) {
  ITMGetPromptResponse_FieldNumber_Status = 1,
  ITMGetPromptResponse_FieldNumber_PromptRange = 2,
  ITMGetPromptResponse_FieldNumber_CommandRange = 3,
  ITMGetPromptResponse_FieldNumber_OutputRange = 4,
  ITMGetPromptResponse_FieldNumber_WorkingDirectory = 5,
  ITMGetPromptResponse_FieldNumber_Command = 6,
};

/**
 * Reponds with metadata about the current shell prompt, if possible.
 **/
@interface ITMGetPromptResponse : GPBMessage

@property(nonatomic, readwrite) ITMGetPromptResponse_Status status;

@property(nonatomic, readwrite) BOOL hasStatus;
@property(nonatomic, readwrite, strong, null_resettable) ITMCoordRange *promptRange;
/** Test to see if @c promptRange has been set. */
@property(nonatomic, readwrite) BOOL hasPromptRange;

@property(nonatomic, readwrite, strong, null_resettable) ITMCoordRange *commandRange;
/** Test to see if @c commandRange has been set. */
@property(nonatomic, readwrite) BOOL hasCommandRange;

@property(nonatomic, readwrite, strong, null_resettable) ITMCoordRange *outputRange;
/** Test to see if @c outputRange has been set. */
@property(nonatomic, readwrite) BOOL hasOutputRange;

@property(nonatomic, readwrite, copy, null_resettable) NSString *workingDirectory;
/** Test to see if @c workingDirectory has been set. */
@property(nonatomic, readwrite) BOOL hasWorkingDirectory;

@property(nonatomic, readwrite, copy, null_resettable) NSString *command;
/** Test to see if @c command has been set. */
@property(nonatomic, readwrite) BOOL hasCommand;

@end

#pragma mark - ITMSetProfilePropertyRequest

typedef GPB_ENUM(ITMSetProfilePropertyRequest_FieldNumber) {
  ITMSetProfilePropertyRequest_FieldNumber_Session = 1,
  ITMSetProfilePropertyRequest_FieldNumber_Key = 2,
  ITMSetProfilePropertyRequest_FieldNumber_JsonValue = 3,
};

/**
 * Sets a value in a session's copy of the profile without modifying the underlying profile.
 **/
@interface ITMSetProfilePropertyRequest : GPBMessage

/** Leave this empty to use the current session, if any. */
@property(nonatomic, readwrite, copy, null_resettable) NSString *session;
/** Test to see if @c session has been set. */
@property(nonatomic, readwrite) BOOL hasSession;

/**
 * The following keys are allowed. This table also gives the type that's expected in json_value:
 * Name                                            String
 * Badge Text                                      String
 * Answerback String                               String
 * Foreground Color                                Color Dictionary
 * Background Color                                Color Dictionary
 * Bold Color                                      Color Dictionary
 * Link Color                                      Color Dictionary
 * Selection Color                                 Color Dictionary
 * Selected Text Color                             Color Dictionary
 * Cursor Color                                    Color Dictionary
 * Cursor Text Color                               Color Dictionary
 * Ansi 0 Color                                    Color Dictionary
 * Ansi 1 Color                                    Color Dictionary
 * Ansi 2 Color                                    Color Dictionary
 * Ansi 3 Color                                    Color Dictionary
 * Ansi 4 Color                                    Color Dictionary
 * Ansi 5 Color                                    Color Dictionary
 * Ansi 6 Color                                    Color Dictionary
 * Ansi 7 Color                                    Color Dictionary
 * Ansi 8 Color                                    Color Dictionary
 * Ansi 9 Color                                    Color Dictionary
 * Ansi 10 Color                                   Color Dictionary
 * Ansi 11 Color                                   Color Dictionary
 * Ansi 12 Color                                   Color Dictionary
 * Ansi 13 Color                                   Color Dictionary
 * Ansi 14 Color                                   Color Dictionary
 * Ansi 15 Color                                   Color Dictionary
 * Smart Cursor Color                              Color Dictionary
 * Tab Color                                       Color Dictionary
 * Underline Color                                 Color Dictionary
 * Cursor Guide Color                              Color Dictionary
 * Badge Color                                     Color Dictionary
 * Use Cursor Guide                                Number (boolean)
 * Use Tab Color                                   Number (boolean)
 * Use Underline Color                             Number (boolean)
 * Smart Cursor Color                              Number (boolean)
 * Minimum Contrast                                Number (0-1)
 * Cursor Boost                                    Number (0-1)
 * Cursor Type                                     Number (0=underline, 1=vertical, 2=box)
 * Blinking Cursor                                 Number (boolean)
 * Use Bold Font                                   Number (boolean)
 * Thin Strokes                                    Number (0=no, 1=retina only, 2=always)
 * ASCII Ligatures                                 Number (boolean)
 * Non-ASCII Ligatures                             Number (boolean)
 * Use Bright Bold                                 Number (boolean)
 * Blink Allowed                                   Number (boolean)
 * Use Italic Font                                 Number (boolean)
 * Ambiguous Double Width                          Number (boolean)
 * Unicode Normalization                           Number (0=none, 1=nfc, 2=nfd, 3=hfs+)
 * Horizontal Spacing                              Number (floating point)
 * Vertical Spacing                                Number (floating point)
 * Use Non-ASCII Font                              Number (boolean)
 * Transparency                                    Number (0-1)
 * Blur                                            Number (boolean)
 * Blur Radius                                     Number (0.1-30)
 * Background Image Is Tiled                       Number (boolean)
 * Blend                                           Number (0-1)
 * Sync Title                                      Number (boolean)
 * Disable Window Resizing                         Number (boolean)
 * Only The Default BG Color Uses Transparency     Number (boolean)
 * ASCII Anti Aliased                              Number (boolean)
 * Non-ASCII Anti Aliased                          Number (boolean)
 * Scrollback Lines                                Number (integer)
 * Unlimited Scrollback                            Number (boolean)
 * Scrollback With Status Bar                      Number (boolean)
 * Scrollback in Alternate Screen                  Number (boolean)
 * Character Encoding                              Number (integer, 4=UTF-8)
 * Mouse Reporting                                 Number (boolean)
 * Mouse Reporting allow mouse wheel               Number (boolean)
 * Unicode Version                                 Number (integer, 8 or 9)
 * Allow Title Reporting                           Number (boolean)
 * Allow Title Setting                             Number (boolean)
 * Disable Printing                                Number (boolean)
 * Disable Smcup Rmcup                             Number (boolean)
 * Silence Bell                                    Number (boolean)
 * BM Growl                                        Number (boolean)
 * Send Bell Alert                                 Number (boolean)
 * Send Idle Alert                                 Number (boolean)
 * Send New Output Alert                           Number (boolean)
 * Send Session Ended Alert                        Number (boolean)
 * Send Terminal Generated Alerts                  Number (boolean)
 * Flashing Bell                                   Number (boolean)
 * Visual Bell                                     Number (boolean)
 * Close Sessions On End                           Number (boolean)
 * Prompt Before Closing 2                         Number (boolean)
 * Session Close Undo Timeout                      Number (floating point, number of seconds)
 * Reduce Flicker                                  Number (boolean)
 * Send Code When Idle                             Number (boolean)
 * Idle Code                                       Number (integer, 0-255)
 * Idle Period                                     Number (floating point, number of seconds)
 * Option Key Sends                                Number (0=normal, 1=meta, 2=+esc)
 * Right Option Key Sends                          Number (0=normal, 1=meta, 2=+esc)
 * Application Keypad Allowed                      Number (boolean)
 * Place Prompt at First Column                    Number (boolean)
 * Show Mark Indicators                            Number (boolean)
 *
 * Color dictionaries have these mandatory keys taking numeric values between 0 and 1:
 *   Red Component, Green Component, Blue Component
 * And an optional key with a value in 0 to 1:
 *   Alpha Component
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *key;
/** Test to see if @c key has been set. */
@property(nonatomic, readwrite) BOOL hasKey;

/**
 * Does not need to be a dictionary. Here are examples of JSON protos having JSON values:
 * Numeric example:
 *   "json_value": "0.5"
 * String example:
 *   "json_value": "\\"Hello world\\""
 * Color example:
 *   "json_value": "{\\"Red Component\\": 1, \\"Green Component\\": 0, \\"Blue Component\\": 0, \\"Alpha Component\\": 1}"
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *jsonValue;
/** Test to see if @c jsonValue has been set. */
@property(nonatomic, readwrite) BOOL hasJsonValue;

@end

#pragma mark - ITMSetProfilePropertyResponse

typedef GPB_ENUM(ITMSetProfilePropertyResponse_FieldNumber) {
  ITMSetProfilePropertyResponse_FieldNumber_Status = 1,
};

@interface ITMSetProfilePropertyResponse : GPBMessage

@property(nonatomic, readwrite) ITMSetProfilePropertyResponse_Status status;

@property(nonatomic, readwrite) BOOL hasStatus;
@end

#pragma mark - ITMTransactionRequest

typedef GPB_ENUM(ITMTransactionRequest_FieldNumber) {
  ITMTransactionRequest_FieldNumber_Begin = 1,
};

@interface ITMTransactionRequest : GPBMessage

/**
 * Set to true to begin a new transaction or false to end the current
 * transaction. The app's main loop will not advance while in a
 * transaction. This effectively freezes time. Keep transactions short.
 **/
@property(nonatomic, readwrite) BOOL begin;

@property(nonatomic, readwrite) BOOL hasBegin;
@end

#pragma mark - ITMTransactionResponse

typedef GPB_ENUM(ITMTransactionResponse_FieldNumber) {
  ITMTransactionResponse_FieldNumber_Status = 1,
};

@interface ITMTransactionResponse : GPBMessage

@property(nonatomic, readwrite) ITMTransactionResponse_Status status;

@property(nonatomic, readwrite) BOOL hasStatus;
@end

#pragma mark - ITMLineRange

typedef GPB_ENUM(ITMLineRange_FieldNumber) {
  ITMLineRange_FieldNumber_ScreenContentsOnly = 1,
  ITMLineRange_FieldNumber_TrailingLines = 2,
};

/**
 * Describes a range of lines.
 **/
@interface ITMLineRange : GPBMessage

/**
 * Only one of these fields should be set:
 * ---------------------------------------
 * Return just the current contents of the screen.
 **/
@property(nonatomic, readwrite) BOOL screenContentsOnly;

@property(nonatomic, readwrite) BOOL hasScreenContentsOnly;
/**
 * Return the last `trailing lines` of the buffer, which could go back into
 * scrollback history.
 **/
@property(nonatomic, readwrite) int32_t trailingLines;

@property(nonatomic, readwrite) BOOL hasTrailingLines;
@end

#pragma mark - ITMRange

typedef GPB_ENUM(ITMRange_FieldNumber) {
  ITMRange_FieldNumber_Location = 1,
  ITMRange_FieldNumber_Length = 2,
};

/**
 * Describes a range of values.
 **/
@interface ITMRange : GPBMessage

@property(nonatomic, readwrite) int64_t location;

@property(nonatomic, readwrite) BOOL hasLocation;
@property(nonatomic, readwrite) int64_t length;

@property(nonatomic, readwrite) BOOL hasLength;
@end

#pragma mark - ITMCoordRange

typedef GPB_ENUM(ITMCoordRange_FieldNumber) {
  ITMCoordRange_FieldNumber_Start = 1,
  ITMCoordRange_FieldNumber_End = 2,
};

/**
 * Describes a range of cells.
 * |..xxxxx|
 * |xxxx...|
 * In the example above, the range of x's is: {start: {x:2, y:0}, end: {x:4, y:1}}
 * The end coordinate is the first cell *after* the end of the range described (so an empty range
 * has start == end)
 **/
@interface ITMCoordRange : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) ITMCoord *start;
/** Test to see if @c start has been set. */
@property(nonatomic, readwrite) BOOL hasStart;

@property(nonatomic, readwrite, strong, null_resettable) ITMCoord *end;
/** Test to see if @c end has been set. */
@property(nonatomic, readwrite) BOOL hasEnd;

@end

#pragma mark - ITMCoord

typedef GPB_ENUM(ITMCoord_FieldNumber) {
  ITMCoord_FieldNumber_X = 1,
  ITMCoord_FieldNumber_Y = 2,
};

/**
 * Describes a cell's location.
 **/
@interface ITMCoord : GPBMessage

@property(nonatomic, readwrite) int32_t x;

@property(nonatomic, readwrite) BOOL hasX;
/**
 * y=0 describes the first line. When the scrollback buffer is full and history is lost, the first
 * lines become unavailable, but the numbering is stable (so the Nth line is always the Nth line,
 * even if it's not the Nth *visible* line).
 **/
@property(nonatomic, readwrite) int64_t y;

@property(nonatomic, readwrite) BOOL hasY;
@end

#pragma mark - ITMLineContents

typedef GPB_ENUM(ITMLineContents_FieldNumber) {
  ITMLineContents_FieldNumber_Text = 1,
  ITMLineContents_FieldNumber_CodePointsPerCellArray = 2,
  ITMLineContents_FieldNumber_Continuation = 3,
};

/**
 * Describes the content of a line.
 **/
@interface ITMLineContents : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *text;
/** Test to see if @c text has been set. */
@property(nonatomic, readwrite) BOOL hasText;

/**
 * Some cells do not contain one code point. Use this to map code points in
 * `text` to a screen position. If the line has no uninitialized cells at its end, then the
 * sum of `repeats` equals the width of the display.
 *
 * For example, consider a line of text that appears on your display like:
 *   xyz compañía
 *
 * The corresponding value of `text` would be:
 *   xyzcompan~i'a
 * Note: ~ and ' are combining marks, but are shown uncombined for illustrative purposes.
 *
 * Each code point in "xyz" as well as each of the non-accented letters in compañía takes one
 * cell.
 *
 * The blank following 'z' is an uninitialized cell that has no code points,
 * so the z and the c in `text` are adjacent. It's unusual for these to occur in the middle
 * of a line, but it is possible.
 *
 * The ñ is composed of the letter n and a combining tilde (U+0303) (indicated in our example
 * as ~), while í is composed of the leter i and a combining acute accent (U+0301) (indicated in
 * our example as ').
 *
 * To map code points in `text` to screen positions, `code_points_per_cell`
 * provides the number of code points in each cell. In our example you would
 * get:
 *
 *   num_code_points=1, repeats=3     // x, y, z
 *   num_code_points=0, repeats=1     // uninitialized cell
 *   num_code_points=1, repeats=5     // c, o, m, p, a
 *   num_code_points=2, repeats=2     // n + combining tilde, i + combining acute accent
 *   num_code_points=1, repeats=1     // a
 *
 * Lines usually end with a series of uninitialized cells. These are not included.
 *
 * Here is psuedocode to interpret code_points_per_cell:
 *
 *   text_index_to_screen_coord = {}
 *   screen_coord_to_text_index = {}
 *   text_index = 0
 *   screen_coord = 0
 *   for cpps in code_points_per_cell:
 *     repeat cpps.repeats times:
 *       text_index_to_screen_coord[text_index] = screen_coord
 *       screen_coord_to_text_index[screen_coord] = text_index
 *       text_index += cpps.num_code_points
 *       screen_coord += 1
 *
 * Cells with images are omitted.
 **/
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<ITMCodePointsPerCell*> *codePointsPerCellArray;
/** The number of items in @c codePointsPerCellArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger codePointsPerCellArray_Count;

@property(nonatomic, readwrite) ITMLineContents_Continuation continuation;

@property(nonatomic, readwrite) BOOL hasContinuation;
@end

#pragma mark - ITMCodePointsPerCell

typedef GPB_ENUM(ITMCodePointsPerCell_FieldNumber) {
  ITMCodePointsPerCell_FieldNumber_NumCodePoints = 1,
  ITMCodePointsPerCell_FieldNumber_Repeats = 2,
};

@interface ITMCodePointsPerCell : GPBMessage

/** Number of code points per cell */
@property(nonatomic, readwrite) int32_t numCodePoints;

@property(nonatomic, readwrite) BOOL hasNumCodePoints;
/** Number of adjacent cells with this number of code points (always one or more). */
@property(nonatomic, readwrite) int32_t repeats;

@property(nonatomic, readwrite) BOOL hasRepeats;
@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)