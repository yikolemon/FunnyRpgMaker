/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008ff30 */

int FUN_14008ff30(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  byte *pbVar5;
  longlong lVar6;
  byte *pbVar7;
  int iVar8;
  
  plVar1 = *(longlong **)(param_1 + 8);
  if ((char)plVar1[5] == '\0') {
    FUN_14008f0b0(plVar1);
  }
  pbVar7 = *(byte **)(param_1 + 0x40);
  if (*(int *)(plVar1[3] + 0xc) == 0xfde9) {
    iVar8 = 0;
    if (0 < param_2) {
      do {
        if (*pbVar7 == 0) {
          return iVar8;
        }
        uVar4 = FUN_1400a5718(pbVar7);
        iVar3 = (int)uVar4;
        lVar6 = (longlong)iVar3;
        if (3 < iVar3 - 1U) {
          lVar6 = 1;
        }
        iVar2 = iVar8 + 1;
        if (iVar3 != 4) {
          iVar2 = iVar8;
        }
        iVar8 = iVar2 + 1;
        pbVar7 = pbVar7 + lVar6;
      } while (iVar8 < param_2);
    }
  }
  else {
    iVar8 = 0;
    if (0 < param_2) {
      do {
        if (*pbVar7 == 0) {
          return iVar8;
        }
        pbVar5 = pbVar7 + 1;
        if (-1 < *(short *)(*(longlong *)plVar1[3] + (ulonglong)*pbVar7 * 2)) {
          pbVar5 = pbVar7;
        }
        pbVar7 = pbVar5 + 1;
        iVar8 = iVar8 + 1;
      } while (iVar8 < param_2);
    }
  }
  return iVar8;
}

