﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`1<SA.Common.Models.Result>
struct Action_1_t4089019125;
// SA.Fitness.DataType
struct DataType_t1476354918;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.SubscribeRequest
struct  SubscribeRequest_t3601402779  : public Il2CppObject
{
public:
	// System.Action`1<SA.Common.Models.Result> SA.Fitness.SubscribeRequest::OnSubscribeFinished
	Action_1_t4089019125 * ___OnSubscribeFinished_0;
	// System.Int32 SA.Fitness.SubscribeRequest::id
	int32_t ___id_1;
	// SA.Fitness.DataType SA.Fitness.SubscribeRequest::dataType
	DataType_t1476354918 * ___dataType_2;

public:
	inline static int32_t get_offset_of_OnSubscribeFinished_0() { return static_cast<int32_t>(offsetof(SubscribeRequest_t3601402779, ___OnSubscribeFinished_0)); }
	inline Action_1_t4089019125 * get_OnSubscribeFinished_0() const { return ___OnSubscribeFinished_0; }
	inline Action_1_t4089019125 ** get_address_of_OnSubscribeFinished_0() { return &___OnSubscribeFinished_0; }
	inline void set_OnSubscribeFinished_0(Action_1_t4089019125 * value)
	{
		___OnSubscribeFinished_0 = value;
		Il2CppCodeGenWriteBarrier(&___OnSubscribeFinished_0, value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(SubscribeRequest_t3601402779, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_dataType_2() { return static_cast<int32_t>(offsetof(SubscribeRequest_t3601402779, ___dataType_2)); }
	inline DataType_t1476354918 * get_dataType_2() const { return ___dataType_2; }
	inline DataType_t1476354918 ** get_address_of_dataType_2() { return &___dataType_2; }
	inline void set_dataType_2(DataType_t1476354918 * value)
	{
		___dataType_2 = value;
		Il2CppCodeGenWriteBarrier(&___dataType_2, value);
	}
};

struct SubscribeRequest_t3601402779_StaticFields
{
public:
	// System.Action`1<SA.Common.Models.Result> SA.Fitness.SubscribeRequest::<>f__am$cache0
	Action_1_t4089019125 * ___U3CU3Ef__amU24cache0_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(SubscribeRequest_t3601402779_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline Action_1_t4089019125 * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline Action_1_t4089019125 ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(Action_1_t4089019125 * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif