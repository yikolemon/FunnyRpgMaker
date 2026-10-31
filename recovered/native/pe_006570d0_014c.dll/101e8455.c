/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e8455 */

undefined4 __fastcall FUN_101e8455(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 local_20;
  
  if (param_2 == 0) {
    local_20 = 0x10000;
  }
  else {
    piVar7 = (int *)(param_1 + 8);
    local_20 = 0x10000;
    iVar6 = 0;
    do {
      iVar1 = *(int *)(param_3 + iVar6 * 4);
      iVar5 = piVar7[-1];
      if ((iVar5 != iVar1) && (iVar5 != 0)) {
        iVar2 = piVar7[-2];
        if (iVar1 - iVar2 == 0 || iVar1 < iVar2) {
          return 0;
        }
        iVar3 = *piVar7;
        iVar4 = iVar3 - iVar1;
        if (iVar4 == 0 || iVar3 < iVar1) {
          return 0;
        }
        if (iVar1 < iVar5) {
          iVar5 = iVar5 - iVar2;
          iVar4 = iVar1 - iVar2;
        }
        else {
          iVar5 = iVar3 - iVar5;
        }
        local_20 = FUN_101c16ea(local_20,iVar4,iVar5);
      }
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 3;
    } while (param_2 != iVar6);
  }
  return local_20;
}

