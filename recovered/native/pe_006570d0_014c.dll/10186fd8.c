/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10186fd8 */

undefined4 * __thiscall FUN_10186fd8(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_10195fa0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  local_28 = param_1 + 0x1c;
  param_1[0x20] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  local_14 = 7;
  local_24 = param_1;
  _memset(param_1,0,0xb0);
  FUN_10187224(param_2);
  ExceptionList = local_1c;
  return local_24;
}

