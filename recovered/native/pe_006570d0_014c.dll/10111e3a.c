/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10111e3a */

void FUN_10111e3a(undefined1 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_1039d74c;
  *(uint *)(DAT_1039d74c + 0x1ed0) = *(uint *)(DAT_1039d74c + 0x1ed0) | 8;
  *(undefined1 *)(iVar1 + 0x1f15) = param_1;
  *(uint *)(iVar1 + 0x1edc) = param_2 + (uint)(param_2 == 0);
  return;
}

