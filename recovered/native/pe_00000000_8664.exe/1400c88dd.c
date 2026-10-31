/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c88dd */

void FUN_1400c88dd(int *param_1,int param_2,byte param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  piVar2 = (int *)FUN_14007896c(*(longlong *)(param_1 + 10),
                                *(longlong *)(param_1 + 10) + (longlong)param_4 * 0x10,param_2);
  lVar3 = *(longlong *)(param_1 + 10);
  uVar6 = 0;
  bVar4 = 1;
  if ((piVar2 != (int *)((longlong)param_4 * 0x10 + lVar3)) && (*piVar2 == param_2)) {
    uVar6 = (uint)(piVar2[2] != 0);
    bVar4 = 0;
  }
  if (uVar6 != param_3) {
    if ((param_3 & bVar4) == 1) {
      iVar1 = param_1[8];
      if (iVar1 == param_1[9]) {
        if (iVar1 == 0) {
          iVar5 = 8;
        }
        else {
          iVar5 = iVar1 / 2 + iVar1;
        }
        iVar7 = iVar1 + 1;
        if (iVar1 + 1 < iVar5) {
          iVar7 = iVar5;
        }
        lVar3 = FUN_140077ab4((longlong)iVar7 << 4);
        if (*(longlong *)(param_1 + 10) != 0) {
          FUN_1401c5180(lVar3,*(longlong *)(param_1 + 10),(longlong)param_1[8] << 4);
          FUN_140077b90(*(undefined8 *)(param_1 + 10));
        }
        *(longlong *)(param_1 + 10) = lVar3;
        param_1[9] = iVar7;
        iVar1 = param_1[8];
      }
      *(int *)(lVar3 + (longlong)iVar1 * 0x10) = param_2;
      *(int *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = param_5;
      param_1[8] = param_1[8] + 1;
    }
    else if (bVar4 == 0) {
      iVar1 = 0;
      if (param_3 != 0) {
        iVar1 = param_5;
      }
      piVar2[2] = iVar1;
    }
    *param_1 = *param_1 + (param_3 - 1 | 1);
  }
  return;
}

