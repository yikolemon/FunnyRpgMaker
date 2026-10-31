/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140106240 */

void FUN_140106240(longlong param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  
  lVar8 = (longlong)param_2;
  lVar4 = (longlong)param_3;
  if (0 < *(int *)(param_1 + lVar8 * 0x10)) {
    piVar9 = (int *)(lVar8 * 0x10 + param_1);
    piVar6 = (int *)(lVar4 * 0x10 + param_1);
    iVar7 = 0;
    do {
      uVar10 = (ulonglong)iVar7;
      uVar1 = *(undefined4 *)(*(longlong *)(piVar9 + 2) + uVar10 * 4);
      cVar2 = FUN_1400c85b6(param_1 + lVar8 * 0x30 + 0x20,uVar1);
      if (cVar2 == '\0') {
        iVar7 = iVar7 + 1;
      }
      else {
        FUN_1401c5180(*(longlong *)(piVar9 + 2) + uVar10 * 4,
                      *(longlong *)(piVar9 + 2) + uVar10 * 4 + 4,(~uVar10 + (longlong)*piVar9) * 4);
        *piVar9 = *piVar9 + -1;
        iVar12 = *piVar6;
        if (iVar12 == piVar6[1]) {
          if (iVar12 == 0) {
            iVar3 = 8;
          }
          else {
            iVar3 = iVar12 / 2 + iVar12;
          }
          iVar11 = iVar12 + 1;
          if (iVar12 + 1 < iVar3) {
            iVar11 = iVar3;
          }
          lVar5 = FUN_140077ab4((longlong)iVar11 << 2);
          if (*(longlong *)(piVar6 + 2) != 0) {
            FUN_1401c5180(lVar5,*(longlong *)(piVar6 + 2),(longlong)*piVar6 << 2);
            FUN_140077b90(*(undefined8 *)(piVar6 + 2));
          }
          *(longlong *)(piVar6 + 2) = lVar5;
          piVar6[1] = iVar11;
          iVar12 = *piVar6;
        }
        else {
          lVar5 = *(longlong *)(piVar6 + 2);
        }
        *(undefined4 *)(lVar5 + (longlong)iVar12 * 4) = uVar1;
        *piVar6 = *piVar6 + 1;
      }
    } while (iVar7 < *piVar9);
  }
  if (*(char *)(param_1 + 0x80) != '\0') {
    FUN_1401a7460(*(undefined8 *)(param_1 + 8 + lVar4 * 0x10),
                  (longlong)*(int *)(param_1 + lVar4 * 0x10),4,&LAB_1401063ec);
  }
  lVar8 = param_1 + lVar8 * 0x30 + 0x20;
  FUN_1400c8568(lVar8,param_1 + lVar4 * 0x30 + 0x20);
  FUN_1400c8506(lVar8);
  return;
}

