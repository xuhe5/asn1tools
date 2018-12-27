/**
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Erik Moqvist
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/**
 * This file was generated by asn1tools version 0.138.2 Thu Dec 27 16:10:06 2018.
 */

#ifndef OER_H
#define OER_H

#include <stdint.h>
#include <stdbool.h>
#include <unistd.h>

#ifndef ENOMEM
#    define ENOMEM 12
#endif

#ifndef EINVAL
#    define EINVAL 22
#endif

#ifndef EOUTOFDATA
#    define EOUTOFDATA 500
#endif

#ifndef EBADCHOICE
#    define EBADCHOICE 501
#endif

#ifndef EBADLENGTH
#    define EBADLENGTH 502
#endif

/**
 * Type A in module CSource.
 */
struct oer_c_source_a_t {
    int8_t a;
    int16_t b;
    int32_t c;
    int64_t d;
    uint8_t e;
    uint16_t f;
    uint32_t g;
    uint64_t h;
    float i;
    float j;
    bool k;
    struct {
        uint8_t value[11];
    } l;
};

/**
 * Type B in module CSource.
 */
enum oer_c_source_b_choice_t {
    oer_c_source_b_choice_a_t,
    oer_c_source_b_choice_b_t,
    oer_c_source_b_choice_c_t
};

struct oer_c_source_b_t {
    enum oer_c_source_b_choice_t choice;
    union {
        int8_t a;
        struct oer_c_source_a_t b;
    } value;
};

/**
 * Type C in module CSource.
 */
struct oer_c_source_c_t {
    uint8_t length;
    struct oer_c_source_b_t elements[2];
};

/**
 * Type D in module CSource.
 */
enum oer_c_source_d_a_b_choice_t {
    oer_c_source_d_a_b_choice_c_t,
    oer_c_source_d_a_b_choice_d_t
};

enum oer_c_source_d_g_h_t {
    oer_c_source_d_g_h_i_t,
    oer_c_source_d_g_h_j_t,
    oer_c_source_d_g_h_k_t
};

struct oer_c_source_d_t {
    uint8_t length;
    struct {
        struct {
            struct {
                enum oer_c_source_d_a_b_choice_t choice;
                union {
                    uint8_t c;
                    bool d;
                } value;
            } b;
            struct {
                uint8_t length;
            } e;
        } a;
        struct {
            enum oer_c_source_d_g_h_t h;
            struct {
                uint8_t length;
                uint8_t value[2];
            } l;
        } g;
        struct {
            bool is_n_present;
            bool n;
            int8_t o;
            bool is_p_present;
            struct {
                struct {
                    uint8_t value[5];
                } q;
                bool is_r_present;
                bool r;
            } p;
        } m;
    } elements[10];
};

/**
 * Type Bool in module ProgrammingTypes.
 */
struct oer_programming_types_bool_t {
    bool value;
};

/**
 * Type Double in module ProgrammingTypes.
 */
struct oer_programming_types_double_t {

};

/**
 * Type Float in module ProgrammingTypes.
 */
struct oer_programming_types_float_t {

};

/**
 * Type Int16 in module ProgrammingTypes.
 */
struct oer_programming_types_int16_t {
    int16_t value;
};

/**
 * Type Int32 in module ProgrammingTypes.
 */
struct oer_programming_types_int32_t {
    int32_t value;
};

/**
 * Type Int64 in module ProgrammingTypes.
 */
struct oer_programming_types_int64_t {
    int64_t value;
};

/**
 * Type Int8 in module ProgrammingTypes.
 */
struct oer_programming_types_int8_t {
    int8_t value;
};

/**
 * Type Uint16 in module ProgrammingTypes.
 */
struct oer_programming_types_uint16_t {
    uint16_t value;
};

/**
 * Type Uint32 in module ProgrammingTypes.
 */
struct oer_programming_types_uint32_t {
    uint32_t value;
};

/**
 * Type Uint64 in module ProgrammingTypes.
 */
struct oer_programming_types_uint64_t {
    uint64_t value;
};

/**
 * Type Uint8 in module ProgrammingTypes.
 */
struct oer_programming_types_uint8_t {
    uint8_t value;
};

/**
 * Encode type A defined in module CSource.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t oer_c_source_a_encode(
    uint8_t *dst_p,
    size_t size,
    const struct oer_c_source_a_t *src_p);

/**
 * Decode type A defined in module CSource.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t oer_c_source_a_decode(
    struct oer_c_source_a_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type B defined in module CSource.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t oer_c_source_b_encode(
    uint8_t *dst_p,
    size_t size,
    const struct oer_c_source_b_t *src_p);

/**
 * Decode type B defined in module CSource.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t oer_c_source_b_decode(
    struct oer_c_source_b_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type C defined in module CSource.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t oer_c_source_c_encode(
    uint8_t *dst_p,
    size_t size,
    const struct oer_c_source_c_t *src_p);

/**
 * Decode type C defined in module CSource.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t oer_c_source_c_decode(
    struct oer_c_source_c_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type D defined in module CSource.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t oer_c_source_d_encode(
    uint8_t *dst_p,
    size_t size,
    const struct oer_c_source_d_t *src_p);

/**
 * Decode type D defined in module CSource.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t oer_c_source_d_decode(
    struct oer_c_source_d_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type Bool defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t oer_programming_types_bool_encode(
    uint8_t *dst_p,
    size_t size,
    const struct oer_programming_types_bool_t *src_p);

/**
 * Decode type Bool defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t oer_programming_types_bool_decode(
    struct oer_programming_types_bool_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type Double defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t oer_programming_types_double_encode(
    uint8_t *dst_p,
    size_t size,
    const struct oer_programming_types_double_t *src_p);

/**
 * Decode type Double defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t oer_programming_types_double_decode(
    struct oer_programming_types_double_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type Float defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t oer_programming_types_float_encode(
    uint8_t *dst_p,
    size_t size,
    const struct oer_programming_types_float_t *src_p);

/**
 * Decode type Float defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t oer_programming_types_float_decode(
    struct oer_programming_types_float_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type Int16 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t oer_programming_types_int16_encode(
    uint8_t *dst_p,
    size_t size,
    const struct oer_programming_types_int16_t *src_p);

/**
 * Decode type Int16 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t oer_programming_types_int16_decode(
    struct oer_programming_types_int16_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type Int32 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t oer_programming_types_int32_encode(
    uint8_t *dst_p,
    size_t size,
    const struct oer_programming_types_int32_t *src_p);

/**
 * Decode type Int32 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t oer_programming_types_int32_decode(
    struct oer_programming_types_int32_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type Int64 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t oer_programming_types_int64_encode(
    uint8_t *dst_p,
    size_t size,
    const struct oer_programming_types_int64_t *src_p);

/**
 * Decode type Int64 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t oer_programming_types_int64_decode(
    struct oer_programming_types_int64_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type Int8 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t oer_programming_types_int8_encode(
    uint8_t *dst_p,
    size_t size,
    const struct oer_programming_types_int8_t *src_p);

/**
 * Decode type Int8 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t oer_programming_types_int8_decode(
    struct oer_programming_types_int8_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type Uint16 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t oer_programming_types_uint16_encode(
    uint8_t *dst_p,
    size_t size,
    const struct oer_programming_types_uint16_t *src_p);

/**
 * Decode type Uint16 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t oer_programming_types_uint16_decode(
    struct oer_programming_types_uint16_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type Uint32 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t oer_programming_types_uint32_encode(
    uint8_t *dst_p,
    size_t size,
    const struct oer_programming_types_uint32_t *src_p);

/**
 * Decode type Uint32 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t oer_programming_types_uint32_decode(
    struct oer_programming_types_uint32_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type Uint64 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t oer_programming_types_uint64_encode(
    uint8_t *dst_p,
    size_t size,
    const struct oer_programming_types_uint64_t *src_p);

/**
 * Decode type Uint64 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t oer_programming_types_uint64_decode(
    struct oer_programming_types_uint64_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode type Uint8 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Buffer to encode into.
 * @param[in] size Size of dst_p.
 * @param[in] src_p Data to encode.
 *
 * @return Encoded data length or negative error code.
 */
ssize_t oer_programming_types_uint8_encode(
    uint8_t *dst_p,
    size_t size,
    const struct oer_programming_types_uint8_t *src_p);

/**
 * Decode type Uint8 defined in module ProgrammingTypes.
 *
 * @param[out] dst_p Decoded data.
 * @param[in] src_p Data to decode.
 * @param[in] size Size of src_p.
 *
 * @return Number of bytes decoded or negative error code.
 */
ssize_t oer_programming_types_uint8_decode(
    struct oer_programming_types_uint8_t *dst_p,
    const uint8_t *src_p,
    size_t size);

#endif
