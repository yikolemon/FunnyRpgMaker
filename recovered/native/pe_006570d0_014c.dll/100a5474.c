/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a5474 */

undefined4 * __fastcall FUN_100a5474(undefined4 *param_1)

{
  undefined4 *local_34 [5];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_34;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4210;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = 0;
  param_1[1] = 0;
  local_34[0] = param_1 + 2;
  FUN_100012b0(L"");
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  ExceptionList = local_1c;
  return param_1;
}

