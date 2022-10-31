/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#ifndef __drake_lcmt_jaco_status_hpp__
#define __drake_lcmt_jaco_status_hpp__

#include "lcm/lcm_coretypes.h"

#include <vector>

namespace drake
{

/**
 * The current status of a Kinova Jaco arm.  All angular
 * positions/velocities are expressed in radians and radians/second.
 */
class lcmt_jaco_status
{
    public:
        /**
         * The timestamp in microseconds (this is typically the wall clock
         * time of the sender https://en.wikipedia.org/wiki/Unix_time )
         */
        int64_t    utime;

        int32_t    num_joints;

        std::vector< double > joint_position;

        std::vector< double > joint_velocity;

        /// "Angular Force" in Kinova's documentation.
        std::vector< double > joint_torque;

        /// "AngularForceGravityFree" in Kinova's documentation.
        std::vector< double > joint_torque_external;

        std::vector< double > joint_current;

        int32_t    num_fingers;

        std::vector< double > finger_position;

        std::vector< double > finger_velocity;

        /// "Angular Force" in Kinova's documentation.
        std::vector< double > finger_torque;

        /// "AngularForceGravityFree" in Kinova's documentation.
        std::vector< double > finger_torque_external;

        std::vector< double > finger_current;

    public:
        /**
         * Encode a message into binary form.
         *
         * @param buf The output buffer.
         * @param offset Encoding starts at thie byte offset into @p buf.
         * @param maxlen Maximum number of bytes to write.  This should generally be
         *  equal to getEncodedSize().
         * @return The number of bytes encoded, or <0 on error.
         */
        inline int encode(void *buf, int offset, int maxlen) const;

        /**
         * Check how many bytes are required to encode this message.
         */
        inline int getEncodedSize() const;

        /**
         * Decode a message from binary form into this instance.
         *
         * @param buf The buffer containing the encoded message.
         * @param offset The byte offset into @p buf where the encoded message starts.
         * @param maxlen The maximum number of bytes to read while decoding.
         * @return The number of bytes decoded, or <0 if an error occured.
         */
        inline int decode(const void *buf, int offset, int maxlen);

        /**
         * Retrieve the 64-bit fingerprint identifying the structure of the message.
         * Note that the fingerprint is the same for all instances of the same
         * message type, and is a fingerprint on the message type definition, not on
         * the message contents.
         */
        inline static int64_t getHash();

        /**
         * Returns "lcmt_jaco_status"
         */
        inline static const char* getTypeName();

        // LCM support functions. Users should not call these
        inline int _encodeNoHash(void *buf, int offset, int maxlen) const;
        inline int _getEncodedSizeNoHash() const;
        inline int _decodeNoHash(const void *buf, int offset, int maxlen);
        inline static uint64_t _computeHash(const __lcm_hash_ptr *p);
};

int lcmt_jaco_status::encode(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;
    int64_t hash = getHash();

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->_encodeNoHash(buf, offset + pos, maxlen - pos);
    if (tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int lcmt_jaco_status::decode(const void *buf, int offset, int maxlen)
{
    int pos = 0, thislen;

    int64_t msg_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &msg_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (msg_hash != getHash()) return -1;

    thislen = this->_decodeNoHash(buf, offset + pos, maxlen - pos);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int lcmt_jaco_status::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t lcmt_jaco_status::getHash()
{
    static int64_t hash = static_cast<int64_t>(_computeHash(NULL));
    return hash;
}

const char* lcmt_jaco_status::getTypeName()
{
    return "lcmt_jaco_status";
}

int lcmt_jaco_status::_encodeNoHash(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &this->utime, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_joints, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    if(this->num_joints > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->joint_position[0], this->num_joints);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->num_joints > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->joint_velocity[0], this->num_joints);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->num_joints > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->joint_torque[0], this->num_joints);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->num_joints > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->joint_torque_external[0], this->num_joints);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->num_joints > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->joint_current[0], this->num_joints);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_fingers, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    if(this->num_fingers > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->finger_position[0], this->num_fingers);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->num_fingers > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->finger_velocity[0], this->num_fingers);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->num_fingers > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->finger_torque[0], this->num_fingers);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->num_fingers > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->finger_torque_external[0], this->num_fingers);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->num_fingers > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->finger_current[0], this->num_fingers);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    return pos;
}

int lcmt_jaco_status::_decodeNoHash(const void *buf, int offset, int maxlen)
{
    int pos = 0, tlen;

    tlen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this->utime, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_joints, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    if(this->num_joints) {
        this->joint_position.resize(this->num_joints);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->joint_position[0], this->num_joints);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->num_joints) {
        this->joint_velocity.resize(this->num_joints);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->joint_velocity[0], this->num_joints);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->num_joints) {
        this->joint_torque.resize(this->num_joints);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->joint_torque[0], this->num_joints);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->num_joints) {
        this->joint_torque_external.resize(this->num_joints);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->joint_torque_external[0], this->num_joints);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->num_joints) {
        this->joint_current.resize(this->num_joints);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->joint_current[0], this->num_joints);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_fingers, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    if(this->num_fingers) {
        this->finger_position.resize(this->num_fingers);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->finger_position[0], this->num_fingers);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->num_fingers) {
        this->finger_velocity.resize(this->num_fingers);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->finger_velocity[0], this->num_fingers);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->num_fingers) {
        this->finger_torque.resize(this->num_fingers);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->finger_torque[0], this->num_fingers);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->num_fingers) {
        this->finger_torque_external.resize(this->num_fingers);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->finger_torque_external[0], this->num_fingers);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->num_fingers) {
        this->finger_current.resize(this->num_fingers);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->finger_current[0], this->num_fingers);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    return pos;
}

int lcmt_jaco_status::_getEncodedSizeNoHash() const
{
    int enc_size = 0;
    enc_size += __int64_t_encoded_array_size(NULL, 1);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += __double_encoded_array_size(NULL, this->num_joints);
    enc_size += __double_encoded_array_size(NULL, this->num_joints);
    enc_size += __double_encoded_array_size(NULL, this->num_joints);
    enc_size += __double_encoded_array_size(NULL, this->num_joints);
    enc_size += __double_encoded_array_size(NULL, this->num_joints);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += __double_encoded_array_size(NULL, this->num_fingers);
    enc_size += __double_encoded_array_size(NULL, this->num_fingers);
    enc_size += __double_encoded_array_size(NULL, this->num_fingers);
    enc_size += __double_encoded_array_size(NULL, this->num_fingers);
    enc_size += __double_encoded_array_size(NULL, this->num_fingers);
    return enc_size;
}

uint64_t lcmt_jaco_status::_computeHash(const __lcm_hash_ptr *)
{
    uint64_t hash = 0x4de1cf65dc6f2064LL;
    return (hash<<1) + ((hash>>63)&1);
}

}

#endif
