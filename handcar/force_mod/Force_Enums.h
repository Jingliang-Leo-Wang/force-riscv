//
// Copyright (C) [2020] Futurewei Technologies, Inc.
//
// FORCE-RISCV is licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
// THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY OR
// FIT FOR A PARTICULAR PURPOSE.
// See the License for the specific language governing permissions and
// limitations under the License.
//

/*  !!! NOTICE !!!
    This file is automatically generated by the script: utils/enum_classes/create_enum_files.py
    Please do not modify this file manually.  Instead, modify the above mentioned script to re-generate this file.
*/

#ifndef Force_Enums_H
#define Force_Enums_H

#include <string>

namespace Force {

  /*!
    Various limitation values
  */
  enum class ELimitType : unsigned char {
    ThreadsLimit = 0,
    CoresLimit = 1,
    ChipsLimit = 2,
    PhysicalAddressLimit = 3,
    MaxInstructions = 4,
    PerMonRegisterNumber = 5,
    DependencyHistoryLimit = 6,
    BranchNotTakenLimit = 7,
    SpeculativeBntLevelLimit = 8,
    ErrRegisterNumber = 9,
    SpeculativeBntInstructionLimit = 10,
  };
  extern unsigned char ELimitTypeSize;
  extern const std::string ELimitType_to_string(ELimitType in_enum); //!< Get string name for enum.
  extern ELimitType string_to_ELimitType(const std::string& in_str); //!< Get enum value for string name.
  extern ELimitType try_string_to_ELimitType(const std::string& in_str, bool& okay); //!< Try to get enum value for string name, set status to indicate if conversion successful. Return value is indeterminate on failure.
  typedef unsigned char ELimitTypeBaseType; //!< Define a type name for the enum base data type.


  /*!
    Memory data types in memory model
  */
  enum class EMemDataType : unsigned char {
    Init = 1,
    Instruction = 2,
    Data = 4,
    Both = 6,
  };
  extern unsigned char EMemDataTypeSize;
  extern const std::string EMemDataType_to_string(EMemDataType in_enum); //!< Get string name for enum.
  extern EMemDataType string_to_EMemDataType(const std::string& in_str); //!< Get enum value for string name.
  extern EMemDataType try_string_to_EMemDataType(const std::string& in_str, bool& okay); //!< Try to get enum value for string name, set status to indicate if conversion successful. Return value is indeterminate on failure.
  typedef unsigned char EMemDataTypeBaseType; //!< Define a type name for the enum base data type.

  /*!
    Memory access types
  */
  enum class EMemAccessType : unsigned char {
    Unknown = 0,
    Read = 1,
    Write = 2,
    ReadWrite = 3,
  };
  extern unsigned char EMemAccessTypeSize;
  extern const std::string EMemAccessType_to_string(EMemAccessType in_enum); //!< Get string name for enum.
  extern EMemAccessType string_to_EMemAccessType(const std::string& in_str); //!< Get enum value for string name.
  extern EMemAccessType try_string_to_EMemAccessType(const std::string& in_str, bool& okay); //!< Try to get enum value for string name, set status to indicate if conversion successful. Return value is indeterminate on failure.
  typedef unsigned char EMemAccessTypeBaseType; //!< Define a type name for the enum base data type.

  /*!
    Memory bank types
  */
  enum class EMemBankType : unsigned char {
    Default = 0,
  };
  extern unsigned char EMemBankTypeSize;
  extern const std::string EMemBankType_to_string(EMemBankType in_enum); //!< Get string name for enum.
  extern EMemBankType string_to_EMemBankType(const std::string& in_str); //!< Get enum value for string name.
  extern EMemBankType try_string_to_EMemBankType(const std::string& in_str, bool& okay); //!< Try to get enum value for string name, set status to indicate if conversion successful. Return value is indeterminate on failure.
  typedef unsigned char EMemBankTypeBaseType; //!< Define a type name for the enum base data type.

}

#endif
