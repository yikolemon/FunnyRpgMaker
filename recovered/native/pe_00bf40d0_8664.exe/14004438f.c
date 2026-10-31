/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004438f */

void FUN_14004438f(undefined8 *param_1)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x4c) = 0;
  lVar1 = param_1[2];
  FUN_14001c53d(lVar1,param_1[0x42]);
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  FUN_14001c53d(lVar1,param_1[0x56]);
  param_1[0x56] = 0;
  *(undefined2 *)(param_1 + 0x55) = 0;
  FUN_14001c53d(lVar1,param_1[0x4b]);
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  FUN_14001c53d(lVar1,param_1[0x44]);
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14001c53d(lVar1,(longlong)param_1);
  return;
}

