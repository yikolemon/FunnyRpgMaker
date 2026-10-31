/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100de6e8 */

void __fastcall FUN_100de6e8(undefined1 *param_1)

{
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_34;
  local_18 = &LAB_100ea8e0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0x40000000;
  param_1[8] = 0;
  local_34 = param_1 + 0xc;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xf;
  local_30 = param_1 + 0x24;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xf;
  local_14 = 1;
  local_2c = param_1 + 0x3c;
  local_24 = param_1;
  FUN_10001f66("https://api.deepseek.com");
  local_14 = 2;
  local_28 = local_24 + 0x54;
  FUN_10001f66("deepseek-v4-flash");
  *(undefined4 *)(local_24 + 0x6c) = 0x800;
  *(undefined4 *)(local_24 + 0x70) = 0x28;
  local_24[0x74] = 0;
  *(undefined2 *)(local_24 + 0x76) = 0;
  local_24[0x78] = 0;
  *(undefined2 *)(local_24 + 0x7a) = 0;
  local_24[0x7c] = 0;
  ExceptionList = local_1c;
  return;
}

