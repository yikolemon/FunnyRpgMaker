/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014383b */

undefined4 FUN_14014383b(longlong param_1,uint param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    uVar4 = 0x10000;
  }
  else {
    piVar5 = (int *)(param_1 + 8);
    uVar4 = 0x10000;
    uVar8 = 0;
    do {
      iVar1 = *(int *)(param_3 + uVar8 * 4);
      iVar6 = piVar5[-1];
      if ((iVar6 != iVar1) && (iVar6 != 0)) {
        iVar2 = piVar5[-2];
        if (iVar1 - iVar2 == 0 || iVar1 < iVar2) {
          return 0;
        }
        iVar3 = *piVar5;
        iVar7 = iVar3 - iVar1;
        if (iVar7 == 0 || iVar3 < iVar1) {
          return 0;
        }
        if (iVar1 < iVar6) {
          iVar6 = iVar6 - iVar2;
          iVar7 = iVar1 - iVar2;
        }
        else {
          iVar6 = iVar3 - iVar6;
        }
        uVar4 = FUN_14012a478(uVar4,iVar7,iVar6);
      }
      uVar8 = uVar8 + 1;
      piVar5 = piVar5 + 3;
    } while (param_2 != uVar8);
  }
  return uVar4;
}

