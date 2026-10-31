/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10187e6e */

void __fastcall FUN_10187e6e(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *param_1;
  if (0 < iVar1) {
    iVar2 = iVar1 + 1;
    piVar3 = (int *)(iVar1 * 0x40 + param_1[2] + -0x14);
    do {
      if (piVar3[-1] != 0) {
        return;
      }
      if (*piVar3 != 0) {
        return;
      }
      *param_1 = iVar2 + -2;
      iVar2 = iVar2 + -1;
      piVar3 = piVar3 + -0x10;
    } while (1 < iVar2);
  }
  return;
}

