/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140041783 */

uint FUN_140041783(longlong param_1,uint param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  if (param_2 == 0) {
    uVar5 = 0x10000;
  }
  else {
    piVar6 = (int *)(param_1 + 8);
    uVar5 = 0x10000;
    uVar9 = 0;
    do {
      iVar1 = *(int *)(param_3 + uVar9 * 4);
      iVar2 = piVar6[-1];
      if ((iVar2 != iVar1) && (iVar2 != 0)) {
        iVar3 = piVar6[-2];
        if (iVar1 - iVar3 == 0 || iVar1 < iVar3) {
          return 0;
        }
        iVar4 = *piVar6;
        uVar8 = iVar4 - iVar1;
        if (uVar8 == 0 || iVar4 < iVar1) {
          return 0;
        }
        if (iVar1 < iVar2) {
          uVar7 = iVar2 - iVar3;
          uVar8 = iVar1 - iVar3;
        }
        else {
          uVar7 = iVar4 - iVar2;
        }
        uVar5 = FUN_14001de7c(uVar5,uVar8,uVar7);
      }
      uVar9 = uVar9 + 1;
      piVar6 = piVar6 + 3;
    } while (param_2 != uVar9);
  }
  return uVar5;
}

