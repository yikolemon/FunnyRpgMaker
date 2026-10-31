/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f9526 */

int * __fastcall FUN_100f9526(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x1464);
  if (0 < iVar6) {
    uVar4 = iVar6 + 1;
    piVar2 = (int *)(*(int *)(param_1 + 0x146c) + iVar6 * 0x1c);
    do {
      piVar5 = piVar2 + -7;
      if (*piVar5 == param_2) {
        piVar3 = (int *)(iVar6 + (iVar6 + -1) * 0x1b + -1 + *(int *)(param_1 + 0x146c));
        if (param_2 == 3) {
          iVar1 = piVar2[-4];
        }
        else {
          if (param_2 != 5) {
            return piVar3;
          }
          iVar1 = piVar2[-4];
          piVar3 = piVar5;
        }
        if (iVar1 == param_3) {
          return piVar3;
        }
      }
      uVar4 = uVar4 - 1;
      iVar6 = iVar6 + -1;
      piVar2 = piVar5;
    } while (1 < uVar4);
  }
  return (int *)0x0;
}

