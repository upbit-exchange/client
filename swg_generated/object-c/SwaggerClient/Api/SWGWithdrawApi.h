#import <Foundation/Foundation.h>
#import "SWGError.h"
#import "SWGWithdraw.h"
#import "SWGWithdrawChance.h"
#import "SWGWithdrawCoin.h"
#import "SWGApi.h"

/**
* Upbit Open API
* ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
*
* OpenAPI spec version: 1.0.0
* Contact: ujhin942@gmail.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface SWGWithdrawApi: NSObject <SWGApi>

extern NSString* kSWGWithdrawApiErrorDomain;
extern NSInteger kSWGWithdrawApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// 출금 가능 정보
/// ## 해당 통화의 가능한 출금 정보를 확인한다. 
///
/// @param currency Currency Symbol 
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found",
///  code:500 message:"Internal Server Error"
///
/// @return SWGWithdrawChance*
-(NSURLSessionTask*) withdrawChanceWithCurrency: (NSString*) currency
    completionHandler: (void (^)(SWGWithdrawChance* output, NSError* error)) handler;


/// 코인 출금하기
/// ## 코인 출금을 요청한다.  **NOTE**: 바로출금 이용 시 유의사항  업비트 회원의 주소가 아닌 주소로 바로출금을 요청하는 경우, 출금이 정상적으로 수행되지 않습니다. 반드시 주소를 확인 후 출금을 진행하시기 바랍니다. 
///
/// @param currency Currency 코드 
/// @param amount 출금 수량 
/// @param address 출금 가능 주소에 등록된 출금 주소 
/// @param secondaryAddress 2차 출금 주소 (필요한 코인에 한해서)  (optional)
/// @param transactionType 출금 유형 - default : 일반출금 - internal : 바로출금  (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found",
///  code:500 message:"Internal Server Error"
///
/// @return SWGWithdrawCoin*
-(NSURLSessionTask*) withdrawCoinWithCurrency: (NSString*) currency
    amount: (NSString*) amount
    address: (NSString*) address
    secondaryAddress: (NSString*) secondaryAddress
    transactionType: (NSString*) transactionType
    completionHandler: (void (^)(SWGWithdrawCoin* output, NSError* error)) handler;


/// 개별 출금 조회
/// ## 출금 UUID를 통해 개별 출금 정보를 조회한다. 
///
/// @param uuid 출금 UUID  (optional)
/// @param txid 출금 TXID  (optional)
/// @param currency Currency 코드  (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found",
///  code:500 message:"Internal Server Error"
///
/// @return SWGWithdraw*
-(NSURLSessionTask*) withdrawInfoWithUuid: (NSString*) uuid
    txid: (NSString*) txid
    currency: (NSString*) currency
    completionHandler: (void (^)(SWGWithdraw* output, NSError* error)) handler;


/// 출금 리스트 조회
/// ## 출금 리스트를 조회한다. 
///
/// @param currency Currency 코드  (optional)
/// @param state 출금 상태 - submitting : 처리 중 - submitted : 처리 완료 - almost_accepted : 출금대기중 - rejected : 거부 - accepted : 승인됨 - processing : 처리 중 - done : 완료 - canceled : 취소됨  (optional)
/// @param uuids 출금 UUID의 목록  (optional)
/// @param txids 출금 TXID의 목록  (optional)
/// @param limit 개수 제한 (default: 100, max: 100)  (optional)
/// @param page 페이지 수, default: 1  (optional)
/// @param orderBy 정렬 방식 - asc : 오름차순 - desc : 내림차순 (default)  (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found",
///  code:500 message:"Internal Server Error"
///
/// @return NSArray<SWGWithdraw>*
-(NSURLSessionTask*) withdrawInfoAllWithCurrency: (NSString*) currency
    state: (NSString*) state
    uuids: (NSArray<NSString*>*) uuids
    txids: (NSArray<NSString*>*) txids
    limit: (NSNumber*) limit
    page: (NSNumber*) page
    orderBy: (NSString*) orderBy
    completionHandler: (void (^)(NSArray<SWGWithdraw>* output, NSError* error)) handler;


/// 원화 출금하기
/// ## 원화 출금을 요청한다. 등록된 출금 계좌로 출금된다. 
///
/// @param amount 출금 원화 수량 
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found",
///  code:500 message:"Internal Server Error"
///
/// @return SWGWithdraw*
-(NSURLSessionTask*) withdrawKrwWithAmount: (NSString*) amount
    completionHandler: (void (^)(SWGWithdraw* output, NSError* error)) handler;



@end
