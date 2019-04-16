#include "unity/unity.h"
#include "../cardano.h"

const uint8_t RAW_BLOCK[] = {
    0x82, 0x1, 0x83, 0x85, 0x1a, 0x2d, 0x96, 0x4a, 0x9, 0x58, 0x20, 0xa, 0xaa, 0x6, 0x52, 0xf9, 0x31, 0x67, 0x34, 0xa4, 0x98, 0x89, 0xa0, 0x2f, 0xb7, 0x90, 0x10, 0xca, 0x75, 0x24, 0x20, 0x2d, 0xc8, 0x93, 0x44, 0x85, 0xd5, 0x20, 0x23, 0xdc, 0xe9, 0xbe, 0x2d, 0x84, 0x83, 0x1, 0x58, 0x20, 0xbe, 0xa0, 0x67, 0xf6, 0xd4, 0x15, 0xcf,
    0x99, 0xcf, 0x3, 0xb5, 0xfc, 0x8f, 0x1c, 0x6c, 0xd1, 0x68, 0xd5, 0xc4, 0xf3, 0x8c, 0xeb, 0x8a, 0xe6, 0x67, 0x8a, 0x34, 0xb3, 0x29, 0x21, 0x99, 0x25, 0x58, 0x20, 0x40, 0x4f,
    0x5c, 0xb6, 0xbb, 0x4b, 0x24, 0x74, 0x7c, 0x7a, 0x74, 0xc6, 0x1a, 0xc2, 0xbc, 0xb3, 0xf5, 0x34, 0xb8, 0xb9, 0xaa, 0x19, 0xce, 0x4e, 0xa8, 0x7d, 0x4f, 0x3d, 0xea, 0x47, 0xdc,
    0x69, 0x82, 0x3, 0x58, 0x20, 0xd3, 0x6a, 0x26, 0x19, 0xa6, 0x72, 0x49, 0x46, 0x4, 0xe1, 0x1b, 0xb4, 0x47, 0xcb, 0xcf, 0x52, 0x31, 0xe9, 0xf2, 0xba, 0x25, 0xc2, 0x16,
    0x91, 0x77, 0xed, 0xc9, 0x41, 0xbd, 0x50, 0xad, 0x6c, 0x58, 0x20, 0xaf, 0xc0, 0xda, 0x64, 0x18, 0x3b, 0xf2, 0x66, 0x4f, 0x3d, 0x4e, 0xec, 0x72, 0x38, 0xd5, 0x24, 0xba, 0x60,
    0x7f, 0xae, 0xea, 0xb2, 0x4f, 0xc1, 0x0, 0xeb, 0x86, 0x1d, 0xba, 0x69, 0x97, 0x1b, 0x58, 0x20, 0x4e, 0x66, 0x28, 0xc, 0xd9, 0x4d, 0x59, 0x10, 0x72, 0x34, 0x9b, 0xec, 0xa, 0x30, 0x90, 0xa5, 0x3a, 0xa9, 0x45, 0x56, 0x2e, 0xfb, 0x6d, 0x8, 0xd5, 0x6e, 0x53, 0x65, 0x4b, 0xe, 0x40, 0x98, 0x84, 0x82, 0x18, 0x6f, 0x19, 0x1d, 0xa1, 0x58, 0x40, 0x99, 0x3a, 0x8f, 0x5, 0x6d, 0x2d, 0x3e, 0x50, 0xb0, 0xac, 0x60, 0x13, 0x9f, 0x10, 0xdf, 0x8f, 0x81, 0x23, 0xd5, 0xf7, 0xc4, 0x81, 0x7b, 0x40, 0xda, 0xc2, 0xb5, 0xdd, 0x8a, 0xa9, 0x4a, 0x82, 0xe8, 0x53, 0x68, 0x32, 0xe6, 0x31, 0x2d, 0xdf, 0xc0, 0x78, 0x7d, 0x7b, 0x53, 0x10, 0xc8, 0x15, 0x65, 0x5a, 0xda, 0x4f, 0xdb, 0xcf, 0x6b, 0x12, 0x29, 0x7d,
    0x44, 0x58, 0xec, 0xcc, 0x2d, 0xfb, 0x81, 0x1a, 0x0, 0x24, 0xad, 0x65, 0x82, 0x2, 0x82, 0x84, 0x0, 0x58, 0x40, 0x99, 0x3a, 0x8f, 0x5, 0x6d, 0x2d, 0x3e, 0x50, 0xb0, 0xac, 0x60, 0x13, 0x9f, 0x10, 0xdf, 0x8f, 0x81, 0x23, 0xd5, 0xf7, 0xc4, 0x81, 0x7b, 0x40, 0xda, 0xc2, 0xb5, 0xdd, 0x8a, 0xa9, 0x4a, 0x82, 0xe8, 0x53, 0x68, 0x32, 0xe6, 0x31, 0x2d, 0xdf, 0xc0, 0x78, 0x7d, 0x7b, 0x53, 0x10, 0xc8, 0x15, 0x65, 0x5a, 0xda, 0x4f, 0xdb, 0xcf, 0x6b, 0x12, 0x29, 0x7d, 0x44, 0x58, 0xec, 0xcc, 0x2d, 0xfb, 0x58, 0x40, 0x89, 0xc2, 0x9f, 0x8c, 0x4a, 0xf2, 0x7b, 0x7a, 0xcc, 0xbe, 0x58, 0x97, 0x47, 0x82, 0x1,
    0x34, 0xeb, 0xba, 0xa1, 0xca, 0xf3, 0xce, 0x94, 0x92, 0x70, 0xa3, 0xd0, 0xc7, 0xdc, 0xfd, 0x54, 0x1b, 0x1d, 0xef, 0x32, 0x6d, 0x2e, 0xf0, 0xdb, 0x78, 0x3, 0x41, 0xc9, 0xe2, 0x61, 0xf0, 0x48, 0x90, 0xcd, 0xee, 0xf1, 0xf9, 0xc9, 0x9f, 0x6d, 0x90, 0xb8, 0xed, 0xca, 0x7d, 0x3c, 0xfc, 0x9, 0x88, 0x58, 0x40, 0x49, 0x6b, 0x29, 0xb5, 0xc5, 0x7e, 0x8a, 0xc7, 0xcf, 0xfc, 0x6e, 0x8b, 0x5e, 0x40, 0xb3, 0xd2, 0x60, 0xe4, 0x7, 0xad, 0x4d, 0x9, 0x79, 0x2d, 0xec, 0xb0, 0xa2, 0x2d, 0x54, 0xda, 0x7f, 0x88, 0x28, 0x26, 0x56, 0x88, 0xa1, 0x8a, 0xa1, 0xa5, 0xc7, 0x6d, 0x9e, 0x74, 0x77, 0xa5, 0xf4, 0xa6, 0x50,
    0x50, 0x14, 0x9, 0xfd, 0xcd, 0x38, 0x55, 0xb3, 0x0, 0xfd, 0x2e, 0x2b, 0xc3, 0xc6, 0x5, 0x58, 0x40, 0xd6, 0xf8, 0xcd, 0xf2, 0x1b, 0x32, 0x13, 0x6a, 0xf2, 0xff, 0xef, 0x8a, 0x4d, 0x49, 0xf1, 0x61, 0x29, 0xa2, 0x8f, 0x14, 0x6c, 0xc, 0xbd, 0x90, 0xd3, 0x6a, 0x95, 0x46, 0x70, 0x69, 0xaa, 0x69, 0x32, 0x49, 0x63, 0x38, 0xac, 0x7, 0x70, 0x43, 0x22, 0xeb, 0x86, 0x4c, 0xe8, 0xb4, 0x7b, 0xe0, 0x91, 0xd4, 0x26, 0xe6, 0x27, 0x94, 0x6a, 0x15, 0x5a, 0x5f, 0xce, 0xfa, 0x10, 0x20, 0x51, 0xc, 0x84, 0x83, 0x0, 0x2, 0x0, 0x82, 0x6a, 0x63, 0x61, 0x72, 0x64, 0x61, 0x6e, 0x6f, 0x2d, 0x73, 0x6c, 0x1, 0xa0,
    0x58, 0x20, 0x4b, 0xa9, 0x2a, 0xa3, 0x20, 0xc6, 0xa, 0xcc, 0x9a, 0xd7, 0xb9, 0xa6, 0x4f, 0x2e, 0xda, 0x55, 0xc4, 0xd2, 0xec, 0x28, 0xe6, 0x4, 0xfa, 0xf1, 0x86, 0x70, 0x8b, 0x4f, 0xc, 0x4e, 0x8e, 0xdf, 0x84, 0x9f, 0x82, 0x83, 0x9f, 0x82, 0x0, 0xd8, 0x18, 0x58, 0x24, 0x82, 0x58, 0x20, 0xe7, 0x9c, 0x24, 0xdb, 0x8b, 0xa9, 0xfb, 0xef, 0x67, 0xac, 0xde, 0xf0, 0x6a, 0x9d, 0x2c, 0x8b, 0x88, 0x23, 0x4e, 0xb9, 0xec, 0xef, 0xde, 0x2a, 0xb0, 0x14, 0xc8, 0x4d, 0x8a, 0x33, 0xab, 0x4c, 0x1, 0xff, 0x9f, 0x82, 0x82, 0xd8, 0x18, 0x58, 0x42, 0x83, 0x58, 0x1c, 0x94, 0xc9, 0xad, 0x15, 0x48, 0x6a, 0x79, 0x6b,
    0x10, 0x8d, 0xab, 0x2d, 0xf6, 0x42, 0xed, 0x15, 0xd3, 0xc4, 0x82, 0x1, 0x9a, 0x49, 0xd7, 0x63, 0xb4, 0x71, 0x80, 0x4, 0xa1, 0x1, 0x58, 0x1e, 0x58, 0x1c, 0x2e, 0x93, 0x4, 0xe0, 0x4e, 0x8d, 0x59, 0xc4, 0xeb, 0x6e, 0xf9, 0x62, 0x64, 0x21, 0xd, 0xe, 0x85, 0x33, 0xed, 0x9a, 0x2c, 0x73, 0x64, 0xb5, 0xbb, 0x31, 0x94, 0x5e, 0x0, 0x1a, 0x63, 0xd0, 0xc, 0x5b, 0x1a, 0x0, 0xa, 0x1, 0xf3, 0x82, 0x82, 0xd8, 0x18, 0x58, 0x42, 0x83, 0x58, 0x1c, 0x34, 0x6d, 0x8c, 0xa5, 0x70, 0xb, 0xb3, 0x39, 0x8b, 0xef, 0xf9, 0xe5, 0xab, 0xf, 0x62, 0x21, 0x14, 0xc2, 0x1d, 0x60, 0x51, 0xf, 0x4b, 0x19, 0xf2, 0x47,
    0x5d, 0x14, 0xa1, 0x1, 0x58, 0x1e, 0x58, 0x1c, 0x2b, 0xb, 0x1, 0x1b, 0xa3, 0x68, 0x3d, 0x69, 0x36, 0x33, 0x89, 0x2a, 0x2a, 0x0, 0xc, 0xc8, 0x2a, 0x2e, 0xb6, 0xa5, 0xf6, 0x4f, 0x3f, 0xc, 0x87, 0xa5, 0xa8, 0x7f, 0x0, 0x1a, 0x7, 0x4c, 0x52, 0x42, 0x1a, 0xee, 0x2e, 0x1e, 0xeb, 0xff, 0xa0, 0x81, 0x82, 0x0, 0xd8, 0x18, 0x58, 0x85, 0x82, 0x58, 0x40, 0x7c, 0x8, 0x22, 0xc6, 0xbe, 0x72, 0xbf, 0xc6, 0x2f, 0xde, 0xfa, 0x89, 0xf0, 0xb3, 0x3f, 0x45, 0x6d, 0xb8, 0x86, 0x5, 0x2e, 0x7e, 0x84, 0x7c, 0x74, 0x97, 0x5, 0xf, 0xb7, 0x2, 0x2d, 0xa, 0xeb, 0xf3, 0xd1, 0x7d, 0xe0, 0x93, 0x32, 0x50, 0x7f,
    0xc1, 0xce, 0xb4, 0x3a, 0xde, 0x2, 0x86, 0x2a, 0x7e, 0xc2, 0x1a, 0x92, 0x92, 0x7, 0x5, 0xe0, 0x34, 0x19, 0x12, 0x17, 0x14, 0x8d, 0x8f, 0x58, 0x40, 0x2b, 0xad, 0xb, 0xc7, 0xe4, 0x56, 0x6b, 0x20, 0xe, 0xf7, 0xdf, 0x48, 0xbd, 0x65, 0xa1, 0x54, 0xb6, 0x83, 0x58, 0x97, 0x42, 0xd4, 0x8e, 0xb6, 0x4a, 0x5, 0xec, 0xe9, 0x73, 0x4, 0x64, 0xed, 0xfc, 0xa6, 0xa7, 0xf9, 0x31, 0x5d, 0x1c, 0xde, 0xcb, 0x68, 0x3c, 0xa9, 0x23, 0xcd, 0xc7, 0xe9, 0xf5, 0x65, 0x98, 0xf0, 0x7e, 0xd4, 0xca, 0x1f, 0xfb, 0x95, 0x77, 0x9d, 0x56, 0xc7, 0xdb, 0x7, 0xff, 0x82, 0x3, 0xd9, 0x1, 0x2, 0x80, 0x9f, 0xff, 0x82, 0x80, 0x9f, 0xff, 0x81, 0xa0};

void test_can_deserialize_block()
{
    cardano_block *block;
    cardano_result rc = cardano_raw_block_decode(RAW_BLOCK, sizeof(RAW_BLOCK), &block);
    TEST_ASSERT_EQUAL(CARDANO_RESULT_SUCCESS, rc);
    cardano_block_delete(block);
}

void test_get_transactions()
{
    cardano_block *block;
    cardano_raw_block_decode(RAW_BLOCK, sizeof(RAW_BLOCK), &block);
    size_t size;
    cardano_signed_transaction **transactions;
    cardano_result rc = cardano_block_get_transactions(block, &transactions, &size);

    TEST_ASSERT_EQUAL(CARDANO_RESULT_SUCCESS, rc);
    TEST_ASSERT_EQUAL(1, size);

    cardano_block_delete_transactions(transactions, size);
    cardano_block_delete(block);
}

void test_get_inputs()
{
    cardano_block *block;
    cardano_raw_block_decode(RAW_BLOCK, sizeof(RAW_BLOCK), &block);
    size_t transactions_size;
    cardano_signed_transaction **transactions;
    cardano_result rc = cardano_block_get_transactions(block, &transactions, &transactions_size);

    cardano_txoptr **inputs;
    size_t inputs_size;
    cardano_transaction_signed_get_inputs(transactions[0], &inputs, &inputs_size);

    TEST_ASSERT_EQUAL(1, inputs_size);
    TEST_ASSERT_EQUAL(1, cardano_transaction_txoptr_index(inputs[0]));

    cardano_txid_t txid;
    cardano_transaction_txoptr_txid(inputs[0], &txid);
    uint8_t actual_txid[] = {231, 156, 36, 219, 139, 169, 251, 239, 103, 172, 222, 240, 106, 157, 44, 139, 136,
                             35, 78, 185, 236, 239, 222, 42, 176, 20, 200, 77, 138, 51, 171, 76};

    TEST_ASSERT_EQUAL_HEX8_ARRAY(actual_txid, txid.bytes, sizeof(actual_txid));

    cardano_transaction_signed_delete_inputs(inputs, inputs_size);
    cardano_block_delete_transactions(transactions, transactions_size);
    cardano_block_delete(block);
}

void test_get_outputs()
{
    cardano_block *block;
    cardano_raw_block_decode(RAW_BLOCK, sizeof(RAW_BLOCK), &block);
    size_t transactions_size;
    cardano_signed_transaction **transactions;
    cardano_result rc = cardano_block_get_transactions(block, &transactions, &transactions_size);

    cardano_txoutput **outputs;
    size_t outputs_size;

    cardano_transaction_signed_get_outputs(transactions[0], &outputs, &outputs_size);
    TEST_ASSERT_EQUAL(2, outputs_size);
    TEST_ASSERT_EQUAL(655859, cardano_transaction_txoutput_value(outputs[0]));

    cardano_address *address = cardano_transaction_txoutput_address(outputs[0]);

    char *actual_address = "DdzFFzCqrhsyFEYhxiJGQ1r4WNEbxKmfHMLp4u4gkpsRDDwxKqZmwqpvm3ZrF3WTQ5AJ4TW4gBQnTnkezjujcLZ8BoUJfCNZQFHUZ55t";
    char *address_base58 = cardano_address_export_base58(address);
    TEST_ASSERT_EQUAL_STRING(actual_address, address_base58);

    cardano_account_delete_addresses(&address_base58, 1);

    cardano_transaction_signed_delete_outputs(outputs, outputs_size);
    cardano_block_delete_transactions(transactions, transactions_size);
    cardano_block_delete(block);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_can_deserialize_block);
    RUN_TEST(test_get_transactions);
    RUN_TEST(test_get_inputs);
    RUN_TEST(test_get_outputs);
    return UNITY_END();
}
