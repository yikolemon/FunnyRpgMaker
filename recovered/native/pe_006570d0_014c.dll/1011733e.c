/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011733e */

void FUN_1011733e(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = DAT_1039d74c;
  FUN_1010c017();
  *(undefined1 *)(iVar1 + 0x20da) = 1;
  *(undefined4 *)(iVar1 + 0x20e8) = param_1;
  *(undefined4 *)(iVar1 + 0x20f0) = param_2;
  *(uint *)(iVar1 + 0x20dc) = param_3 | 0x80;
  *(undefined4 *)(iVar1 + 0x20e0) = param_4;
  return;
}

