﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_System_Xml_NonBlockingStreamReader3963211903.h"

// System.Xml.XmlInputStream
struct XmlInputStream_t2650744719;
// System.Xml.XmlException
struct XmlException_t4188277960;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlStreamReader
struct  XmlStreamReader_t2725532304  : public NonBlockingStreamReader_t3963211903
{
public:
	// System.Xml.XmlInputStream System.Xml.XmlStreamReader::input
	XmlInputStream_t2650744719 * ___input_12;

public:
	inline static int32_t get_offset_of_input_12() { return static_cast<int32_t>(offsetof(XmlStreamReader_t2725532304, ___input_12)); }
	inline XmlInputStream_t2650744719 * get_input_12() const { return ___input_12; }
	inline XmlInputStream_t2650744719 ** get_address_of_input_12() { return &___input_12; }
	inline void set_input_12(XmlInputStream_t2650744719 * value)
	{
		___input_12 = value;
		Il2CppCodeGenWriteBarrier(&___input_12, value);
	}
};

struct XmlStreamReader_t2725532304_StaticFields
{
public:
	// System.Xml.XmlException System.Xml.XmlStreamReader::invalidDataException
	XmlException_t4188277960 * ___invalidDataException_13;

public:
	inline static int32_t get_offset_of_invalidDataException_13() { return static_cast<int32_t>(offsetof(XmlStreamReader_t2725532304_StaticFields, ___invalidDataException_13)); }
	inline XmlException_t4188277960 * get_invalidDataException_13() const { return ___invalidDataException_13; }
	inline XmlException_t4188277960 ** get_address_of_invalidDataException_13() { return &___invalidDataException_13; }
	inline void set_invalidDataException_13(XmlException_t4188277960 * value)
	{
		___invalidDataException_13 = value;
		Il2CppCodeGenWriteBarrier(&___invalidDataException_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
