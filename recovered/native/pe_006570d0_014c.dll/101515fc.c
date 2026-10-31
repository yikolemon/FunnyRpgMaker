/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101515fc */

void __fastcall FUN_101515fc(undefined4 param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  
  iVar6 = (int)(short)param_2[0x28e];
  if (iVar6 != 0) {
    iVar2 = param_2[iVar6 * 4 + 4];
    iVar3 = param_2[iVar6 * 4 + 5];
    iVar4 = param_2[iVar6 * 4 + 6];
    iVar6 = param_2[iVar6 * 4 + 7];
    iVar7 = (int)*(short *)((int)param_2 + 0xa3a);
    param_2[iVar7 * 4 + 7] = -1;
    param_2[iVar7 * 4 + 5] = iVar4;
    param_2[iVar7 * 4 + 6] = iVar3;
    param_2[iVar7 * 4 + 4] = iVar2;
    if (iVar4 != 0) {
      iVar8 = param_2[0x28f] + iVar4;
      if (iVar8 < 999) {
        while (param_2[0x290] < iVar8) {
          if (*(short *)((int)param_2 + 0xa3a) == 99) {
            return;
          }
          FUN_10151eb2();
          iVar8 = param_2[0x28f] + iVar4;
        }
        sVar1 = *(short *)((int)param_2 + 0xa3a);
        iVar7 = param_2[0x290] - iVar4;
        param_2[sVar1 * 4 + 7] = iVar7;
        param_2[0x290] = iVar7;
        iVar7 = iVar4;
        piVar9 = param_2;
        if (0 < iVar4) {
          do {
            uVar5 = FUN_10142d40();
            *(undefined1 *)(param_2[sVar1 * 4 + 7] + 0x650 + (int)piVar9) = uVar5;
            iVar7 = iVar7 + -1;
            piVar9 = (int *)((int)piVar9 + 1);
          } while (iVar7 != 0);
        }
      }
      else {
        param_2[iVar7 * 4 + 5] = 0;
      }
      FUN_10151f58(iVar4);
    }
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_10151f8b((int)param_2 + iVar6 + 0x650,iVar3);
      param_2[0x28f] = param_2[0x28f] - iVar6;
    }
    *param_2 = iVar6 + iVar2;
    param_2[0x28e] = CONCAT22((short)((uint)param_2[0x28e] >> 0x10) + -1,(short)param_2[0x28e] + -1)
    ;
  }
  return;
}

