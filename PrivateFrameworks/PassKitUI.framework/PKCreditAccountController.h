/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKCreditAccountController : PKAccountFlowController

+ (bool)_shouldDisplayBalanceAndTransactionsForTransactionSource:(id)arg1;
+ (bool)_shouldDisplayBalanceForAccount:(id)arg1;
+ (bool)_shouldDisplayTransactionsForAccount:(id)arg1;
+ (unsigned long long)paymentEducationStateForAccount:(id)arg1 mostRecentTransactions:(id)arg2 upcomingScheduledPayments:(id)arg3;
+ (id)relevantScheduledPaymentFromScheduledPayments:(id)arg1 account:(id)arg2;
+ (void)resolutionToReceiveCashbackForAccount:(id)arg1 withPeerPaymentAccount:(id)arg2 completion:(id /* block */)arg3;
+ (bool)shouldDisplayAccountInformationForTransactionSource:(id)arg1 withAccount:(id)arg2;
+ (bool)shouldDisplayTransactionsForTransactionSource:(id)arg1 withAccount:(id)arg2;

@end
