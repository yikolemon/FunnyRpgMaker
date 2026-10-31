/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801556f5 */

void FUN_1801556f5(undefined8 param_1,int *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  
  lVar8 = (longlong)(short)param_2[0x28e];
  if (lVar8 != 0) {
    piVar1 = param_2 + 8;
    iVar3 = param_2[lVar8 * 4 + 4];
    iVar7 = param_2[lVar8 * 4 + 5];
    iVar4 = param_2[lVar8 * 4 + 6];
    iVar5 = param_2[lVar8 * 4 + 7];
    lVar8 = (longlong)*(short *)((longlong)param_2 + 0xa3a);
    param_2[lVar8 * 4 + 7] = -1;
    param_2[lVar8 * 4 + 5] = iVar4;
    param_2[lVar8 * 4 + 6] = iVar7;
    param_2[lVar8 * 4 + 4] = iVar3;
    if (iVar4 != 0) {
      iVar9 = param_2[0x28f] + iVar4;
      if (iVar9 < 999) {
        while (param_2[0x290] < iVar9) {
          if (*(short *)((longlong)param_2 + 0xa3a) == 99) {
            return;
          }
          FUN_180156090(piVar1);
          iVar9 = param_2[0x28f] + iVar4;
        }
        sVar2 = *(short *)((longlong)param_2 + 0xa3a);
        iVar9 = param_2[0x290] - iVar4;
        param_2[(longlong)sVar2 * 4 + 7] = iVar9;
        param_2[0x290] = iVar9;
        if (0 < iVar4) {
          piVar10 = param_2 + 0x194;
          iVar9 = iVar3;
          iVar11 = iVar4;
          do {
            uVar6 = FUN_1801476cb(param_1,iVar9);
            *(undefined1 *)((longlong)piVar10 + (longlong)piVar1[(longlong)sVar2 * 4 + -1]) = uVar6;
            piVar10 = (int *)((longlong)piVar10 + 1);
            iVar9 = iVar9 + 1;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
      }
      else {
        piVar1[lVar8 * 4 + -3] = 0;
      }
      FUN_18015615c(param_1,iVar3,iVar4);
    }
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_18015619b(param_1,iVar3,(longlong)param_2 + (longlong)iVar5 + 0x650,iVar7);
      param_2[0x28f] = param_2[0x28f] - iVar7;
    }
    *param_2 = iVar7 + iVar3;
    param_2[0x28e] = CONCAT22((short)((uint)param_2[0x28e] >> 0x10) + -1,(short)param_2[0x28e] + -1)
    ;
  }
  return;
}

