/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101eae9d */

void __fastcall FUN_101eae9d(undefined4 *param_1)

{
  undefined4 uVar1;
  
  param_1[0x65] = 0;
  uVar1 = param_1[2];
  FUN_101c0017(uVar1,param_1[0x57]);
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  FUN_101c0017(uVar1,param_1[0x6f]);
  param_1[0x6f] = 0;
  *(undefined2 *)(param_1 + 0x6e) = 0;
  FUN_101c0017(uVar1,param_1[100]);
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  FUN_101c0017(uVar1,param_1[0x59]);
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_101c0017(uVar1,param_1);
  return;
}

