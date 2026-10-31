/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cd032 */

undefined8 *
FUN_1800cd032(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 unaff_RBX;
  
  FUN_1800cd348();
  *param_1 = spdlog::sinks::basic_file_sink<std::mutex>::vftable;
  param_1[0xd] = 0xa00000005;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0xf;
  FUN_1800cdfaa(param_1 + 0x13,param_4);
  FUN_1800cd46e(param_1 + 0xd,param_2,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_3) & 0xffffffff);
  return param_1;
}

