/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100de20e */

undefined4 * __fastcall FUN_100de20e(undefined4 *param_1)

{
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_18 = &LAB_100ea8c0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_14 = 0;
  local_28 = param_1 + 3;
  local_24 = param_1;
  FUN_1002218a();
  local_28 = local_24 + 0xb;
  local_24[0xb] = 0;
  local_24[0xc] = 0;
  local_24[0xd] = 0;
  local_14 = 4;
  local_2c = local_24 + 0xe;
  FUN_1002218a();
  *(undefined1 *)(local_24 + 0x16) = 0;
  local_24[0x18] = 0;
  local_24[0x19] = 0;
  local_24[0x1a] = 0;
  local_24[0x1b] = 0;
  local_24[0x1c] = 0;
  local_24[0x1d] = 0;
  local_24[0x1e] = 0;
  local_24[0x1f] = 0;
  local_24[0x20] = 0;
  local_24[0x21] = 0xffffffff;
  local_24[0x17] = 0x102;
  local_24[0x22] = 0;
  *(undefined2 *)(local_24 + 0x23) = 0;
  *(undefined8 *)(local_24 + 0x28) = 0;
  local_24[0x24] = 0;
  local_24[0x25] = 0;
  local_24[0x26] = 0;
  local_24[0x27] = 0;
  local_24[0x2a] = 0xf;
  ExceptionList = local_1c;
  return local_24;
}

