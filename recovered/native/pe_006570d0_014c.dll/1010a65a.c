/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010a65a */

int FUN_1010a65a(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(DAT_1039d74c + 0x148c);
  piVar2 = piVar1;
  if (0 < *(int *)(DAT_1039d74c + 0x1484)) {
    do {
      if (*piVar2 == param_1) break;
      piVar2 = piVar2 + 1;
    } while (piVar2 < piVar1 + *(int *)(DAT_1039d74c + 0x1484));
  }
  return (int)piVar2 - (int)piVar1 >> 2;
}

