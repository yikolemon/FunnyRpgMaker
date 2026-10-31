/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140076dd1 */

int * FUN_140076dd1(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  ulonglong uVar5;
  int *piVar6;
  
  lVar4 = (longlong)*(int *)(param_1 + 0x1580);
  if (0 < lVar4) {
    uVar5 = lVar4 + 1;
    piVar2 = (int *)(*(longlong *)(param_1 + 0x1588) + lVar4 * 0x1c);
    do {
      piVar6 = piVar2 + -7;
      if (*piVar6 == param_2) {
        piVar3 = (int *)(lVar4 + (lVar4 + -1) * 0x1b + -1 + *(longlong *)(param_1 + 0x1588));
        if (param_2 == 3) {
          iVar1 = piVar2[-4];
        }
        else {
          if (param_2 != 5) {
            return piVar3;
          }
          iVar1 = piVar2[-4];
          piVar3 = piVar6;
        }
        if (iVar1 == param_3) {
          return piVar3;
        }
      }
      uVar5 = uVar5 - 1;
      lVar4 = lVar4 + -1;
      piVar2 = piVar6;
    } while (1 < uVar5);
  }
  return (int *)0x0;
}

