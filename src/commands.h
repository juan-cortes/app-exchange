#ifndef _COMMANDS_H_
#define _COMMANDS_H_
// commands
typedef enum {
    COMMAND_LOWER_BOUND = 1,
    GET_VERSION_COMMAND = 0x02,
    START_NEW_TRANSACTION_COMMAND = 0x03,
    SET_PARTNER_KEY_COMMAND = 0x04,
    CHECK_PARTNER_COMMAND = 0x05,
    PROCESS_TRANSACTION_RESPONSE_COMMAND = 0x06,
    CHECK_TRANSACTION_SIGNATURE_COMMAND = 0x07,
    CHECK_PAYOUT_ADDRESS = 0x08,
    CHECK_REFUND_ADDRESS = 0x09,
    START_SIGNING_TRANSACTION = 0x0A,
    COMMAND_UPPER_BOUND
} command_e;

#endif  //_COMMANDS_H_