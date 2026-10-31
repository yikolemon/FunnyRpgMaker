/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006a22c */

int __fastcall FUN_1006a22c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    iVar3 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 3;
    if (((*(int *)(param_1 + 0x18) - iVar1 >> 2) * 0x3cf3cf3d + iVar3 * -0x4f72c235 == 0) &&
       (param_2 < (uint)(iVar3 * 0x4f72c235))) {
      iVar2 = (*(int *)(iVar1 + 0x10 + param_2 * 0x54) - *(int *)(iVar1 + 0xc + param_2 * 0x54) >> 2
              ) * 0x38e38e39;
    }
  }
  return iVar2;
}

