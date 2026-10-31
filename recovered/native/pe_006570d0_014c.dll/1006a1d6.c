/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006a1d6 */

int __fastcall FUN_1006a1d6(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = (*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 2) * -0x47dc11f7;
    iVar1 = 0;
    if (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 5 == iVar2) {
      iVar1 = iVar2;
    }
    return iVar1;
  }
  return 0;
}

