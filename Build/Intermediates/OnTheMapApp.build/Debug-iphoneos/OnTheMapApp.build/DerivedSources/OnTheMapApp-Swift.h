// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.1 clang-703.0.29)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import Foundation;
@import ObjectiveC;
@import MapKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;
@class NSObject;

SWIFT_CLASS("_TtC11OnTheMapApp11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary * _Nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * _Nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * _Nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * _Nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * _Nonnull)application;
- (void)applicationWillTerminate:(UIApplication * _Nonnull)application;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIButton;
@class UIWebView;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC11OnTheMapApp22CheckURLViewController")
@interface CheckURLViewController : UIViewController
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified backButton;
@property (nonatomic, weak) IBOutlet UIWebView * _Null_unspecified webView;
- (void)viewDidLoad;
- (IBAction)clickBack:(UIButton * _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITextView;
@class UITextField;
@class MKMapView;
@class UIStackView;
@class UIActivityIndicatorView;

SWIFT_CLASS("_TtC11OnTheMapApp25InformationViewController")
@interface InformationViewController : UIViewController <UIScrollViewDelegate, UITextFieldDelegate, UITextViewDelegate>
@property (nonatomic, weak) IBOutlet UITextView * _Null_unspecified enterLocationText;
@property (nonatomic, weak) IBOutlet MKMapView * _Null_unspecified informationMapView;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified findOnMapButton;
@property (nonatomic, weak) IBOutlet UIStackView * _Null_unspecified stackView;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified URLTextField;
@property (nonatomic, weak) IBOutlet UIActivityIndicatorView * _Null_unspecified activityIndicator;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified submitButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified checkLink;
@property (nonatomic, copy) NSString * _Nullable locationText;
- (void)viewDidLoad;
- (IBAction)dismissInformation:(UIButton * _Nonnull)sender;
- (IBAction)findOnMapButton:(UIButton * _Nonnull)sender;
- (void)textViewDidBeginEditing:(UITextView * _Nonnull)textView;
- (void)textFieldDidBeginEditing:(UITextField * _Nonnull)textField;
- (BOOL)textView:(UITextView * _Nonnull)enterLocationText shouldChangeTextInRange:(NSRange)range replacementText:(NSString * _Nonnull)text;
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)URLTextField;
- (void)getGeoFromLocation:(NSString * _Nonnull)location;
- (IBAction)submitLocation:(UIButton * _Nonnull)sender;
- (IBAction)checkForValidLink:(UIButton * _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImageView;
@class UILabel;

SWIFT_CLASS("_TtC11OnTheMapApp19LoginViewController")
@interface LoginViewController : UIViewController
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified loginButton;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified emailTextField;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified passwordTextField;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified imageViewAnimate;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified notifyLabel;
@property (nonatomic, weak) IBOutlet UIActivityIndicatorView * _Null_unspecified activityIndicator;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (IBAction)loginToUdacity:(UIButton * _Nonnull)sender;
- (void)signUpToUdacity:(UIButton * _Nonnull)sender;
- (void)runAnimation:(NSString * _Nonnull)value;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSURLSession;
@class NSError;
@class NSURLSessionDataTask;
@class NSData;

SWIFT_CLASS("_TtC11OnTheMapApp12MapAppClient")
@interface MapAppClient : NSObject
@property (nonatomic, readonly, strong) NSURLSession * _Nonnull session;
- (NSURLSessionDataTask * _Nonnull)repeatableTasks:(NSString * _Nonnull)method parameters:(NSDictionary<NSString *, id> * _Nonnull)parameters requestHeaderValues:(NSDictionary<NSString *, id> * _Nonnull)requestHeaderValues requestBodyValues:(NSDictionary<NSString *, id> * _Nullable)requestBodyValues completionHandler:(void (^ _Nonnull)(id _Null_unspecified, NSError * _Nullable))completionHandler;
+ (NSString * _Nonnull)escapedParameters:(NSDictionary<NSString *, id> * _Nonnull)parameters;
+ (void)parseJSON:(NSData * _Nonnull)data completionHandler:(void (^ _Nonnull)(id _Null_unspecified, NSError * _Nullable))completionHandler;
+ (MapAppClient * _Nonnull)sharedInstance;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface MapAppClient (SWIFT_EXTENSION(OnTheMapApp))
@end


@interface MapAppClient (SWIFT_EXTENSION(OnTheMapApp))
- (void)loginToUdacity:(NSString * _Nonnull)email password:(NSString * _Nonnull)password completionHandler:(void (^ _Nonnull)(id _Null_unspecified, NSError * _Nullable))completionHandler;
- (void)logoutSession:(void (^ _Nonnull)(id _Null_unspecified, NSError * _Nullable))completionHandler;
- (void)getPublicUserData:(void (^ _Nonnull)(id _Null_unspecified, NSError * _Nullable))completionHandler;
- (void)getStudentLocation:(void (^ _Nonnull)(id _Null_unspecified, NSError * _Nullable))completionHandler;
- (void)postStudentLocation:(void (^ _Nonnull)(id _Null_unspecified, NSError * _Nullable))completionHandler;
@end

@class MKPointAnnotation;
@class UIBarButtonItem;
@protocol MKAnnotation;
@class MKAnnotationView;
@class UIControl;

SWIFT_CLASS("_TtC11OnTheMapApp17MapViewController")
@interface MapViewController : UIViewController <MKMapViewDelegate>
@property (nonatomic, weak) IBOutlet MKMapView * _Null_unspecified MapView;
@property (nonatomic, weak) IBOutlet UIActivityIndicatorView * _Null_unspecified activityIndicator;
@property (nonatomic, copy) NSArray<MKPointAnnotation *> * _Nonnull annotations;
@property (nonatomic, strong) UIBarButtonItem * _Nullable logoutButton;
@property (nonatomic, strong) UIBarButtonItem * _Nullable refreshMapButton;
@property (nonatomic, strong) UIBarButtonItem * _Nullable postMapButton;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)addDataToMap:(NSArray<NSDictionary<NSString *, id> *> * _Nonnull)results;
- (MKAnnotationView * _Nullable)mapView:(MKMapView * _Nonnull)mapView viewForAnnotation:(id <MKAnnotation> _Nonnull)annotation;
- (void)mapView:(MKMapView * _Nonnull)mapView annotationView:(MKAnnotationView * _Nonnull)annotationView calloutAccessoryControlTapped:(UIControl * _Nonnull)control;
- (void)logout;
- (void)refreshData;
- (void)postNewData;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITableView;
@class NSIndexPath;
@class UITableViewCell;

SWIFT_CLASS("_TtC11OnTheMapApp19TableViewController")
@interface TableViewController : UIViewController <UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate>
@property (nonatomic, weak) IBOutlet UITableView * _Null_unspecified tableView;
@property (nonatomic, weak) IBOutlet UIActivityIndicatorView * _Null_unspecified activityIndicator;
@property (nonatomic, strong) UIBarButtonItem * _Nullable refreshTableButton;
@property (nonatomic, strong) UIBarButtonItem * _Nullable postTableButton;
@property (nonatomic) NSInteger count;
@property (nonatomic) BOOL isButtonRefresh;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)refreshTableData;
- (void)postNewData;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
