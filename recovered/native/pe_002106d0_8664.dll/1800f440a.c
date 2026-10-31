/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f440a */

undefined4 * FUN_1800f440a(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_42;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0xffffffff;
  *param_1 = 2;
  FUN_1800f45f8();
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  FUN_1800f465e(param_1 + 0x3c,&local_42);
  FUN_1800f471c(param_1 + 0x3e,&local_41);
  FUN_1800f47da();
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x141) = 0;
  FUN_1800f484a(param_1,param_2,param_3);
  return param_1;
}

