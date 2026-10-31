/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140129a57 */

void FUN_140129a57(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  int *piVar9;
  
  if (param_2 != (int *)0x0 && param_1 != 0) {
    uVar7 = (ulonglong)*(ushort *)(param_1 + 2);
    if (uVar7 == 0) {
      iVar4 = 0;
      iVar5 = 0;
      iVar6 = 0;
      iVar8 = 0;
    }
    else {
      piVar3 = *(int **)(param_1 + 8);
      iVar5 = *piVar3;
      iVar4 = piVar3[1];
      iVar6 = iVar4;
      iVar8 = iVar5;
      if (uVar7 != 1) {
        piVar9 = piVar3 + 2;
        do {
          iVar1 = *piVar9;
          if (iVar1 < iVar5) {
            iVar5 = iVar1;
          }
          iVar2 = piVar9[1];
          if (iVar8 < iVar1) {
            iVar8 = iVar1;
          }
          if (iVar2 < iVar4) {
            iVar4 = iVar2;
          }
          if (iVar6 < iVar2) {
            iVar6 = iVar2;
          }
          piVar9 = piVar9 + 2;
        } while (piVar9 < piVar3 + uVar7 * 2);
      }
    }
    *param_2 = iVar5;
    param_2[2] = iVar8;
    param_2[1] = iVar4;
    param_2[3] = iVar6;
  }
  return;
}

