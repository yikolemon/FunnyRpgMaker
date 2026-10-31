/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a09c0 */

undefined4 * __fastcall FUN_100a09c0(undefined4 *param_1)

{
  undefined4 uVar1;
  int local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_100c4000;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  *param_1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_20 = FUN_10228350(8);
  local_10 = 0;
  uVar1 = FUN_1022bce0(1);
  *(undefined4 *)(local_20 + 4) = uVar1;
  param_1[0xd] = local_20;
  param_1[3] = param_1 + 1;
  param_1[4] = param_1 + 2;
  param_1[7] = param_1 + 5;
  param_1[8] = param_1 + 6;
  param_1[0xb] = param_1 + 9;
  param_1[0xc] = param_1 + 10;
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[9] = 0;
  ExceptionList = local_18;
  return param_1;
}

