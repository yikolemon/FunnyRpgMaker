/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f27cc */

undefined4 * __thiscall FUN_100f27cc(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_100f5590;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  *param_1 = std::_Associated_state<int>::vftable;
  param_1[1] = DAT_1028f5b0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_20 = param_1 + 3;
  FUN_10235360(local_20);
  param_1[0xe] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xf] = 0xffffffff;
  param_1[5] = 2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)((int)param_1 + 0x5d) = 0;
  *(undefined4 *)((int)param_1 + 0x61) = 0;
  *(undefined4 *)((int)param_1 + 0x65) = 0;
  *(undefined4 *)((int)param_1 + 0x69) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)((int)param_1 + 0x73) = 0;
  param_1[0x1e] = param_2;
  ExceptionList = local_18;
  return param_1;
}

