/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014e6da */

void __fastcall FUN_1014e6da(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(DAT_1039d74c + 0x2364);
  uVar2 = 0xffffffff;
  if ((uVar1 <= param_2) && (param_2 < uVar1 + *(int *)(DAT_1039d74c + 0x235c) * 0xa4)) {
    uVar2 = ((int)(param_2 - uVar1) >> 2) * -0x3e7063e7;
    param_2 = 0;
  }
  *param_1 = param_2;
  param_1[1] = uVar2;
  return;
}

