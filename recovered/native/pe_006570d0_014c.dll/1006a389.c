/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006a389 */

int __fastcall FUN_1006a389(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    iVar3 = *(int *)(param_1 + 0x2c) - iVar1 >> 3;
    if (((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 3) * -0x33333333 +
         iVar3 * -0x3cf3cf3d == 0) && (param_2 < (uint)(iVar3 * 0x3cf3cf3d))) {
      iVar2 = (*(int *)(iVar1 + 0x50 + param_2 * 0xa8) - *(int *)(iVar1 + 0x4c + param_2 * 0xa8) >>
              2) * -0x49249249;
    }
  }
  return iVar2;
}

