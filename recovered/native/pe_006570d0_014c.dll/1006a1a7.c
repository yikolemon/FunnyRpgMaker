/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006a1a7 */

int __fastcall FUN_1006a1a7(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 3;
    iVar1 = 0;
    if ((*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2) * 0x3cf3cf3d +
        iVar2 * -0x4f72c235 == 0) {
      iVar1 = iVar2 * 0x4f72c235;
    }
    return iVar1;
  }
  return 0;
}

