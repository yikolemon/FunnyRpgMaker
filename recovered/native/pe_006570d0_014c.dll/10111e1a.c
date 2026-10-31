/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10111e1a */

void FUN_10111e1a(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = DAT_1039d74c;
  *(uint *)(DAT_1039d74c + 0x1ed0) = *(uint *)(DAT_1039d74c + 0x1ed0) | 0x80;
  *(undefined8 *)(iVar1 + 0x1f04) = *param_1;
  return;
}

