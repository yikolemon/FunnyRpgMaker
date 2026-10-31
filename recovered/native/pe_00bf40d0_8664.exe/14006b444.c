/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006b444 */

void FUN_14006b444(int *param_1,ulonglong param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  
  iVar8 = *param_1;
  if (iVar8 != 0) {
    lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 10) + 0xcc + (param_2 & 0xffffffff) * 0xcc);
    piVar9 = (int *)(*(longlong *)(param_1 + 2) + 0x38);
    do {
      piVar2 = *(int **)(piVar9 + -4);
      if (piVar2 != (int *)0x0) {
        uVar4 = piVar9[-7];
        if ((uVar4 >> 9 & 1) == 0) {
          if ((uVar4 >> 10 & 1) != 0) {
            iVar6 = piVar2[3] + piVar2[2];
            goto LAB_14006b4c4;
          }
          uVar5 = (uint)((longlong)piVar9[-2] - (longlong)*piVar2);
          if ((int)uVar5 < 1) {
            lVar10 = ((longlong)piVar9[-2] - (longlong)*piVar2) * lVar7;
            *piVar9 = (int)((ulonglong)(lVar10 + (lVar10 >> 0x3f) + 0x8000) >> 0x10) + piVar2[2];
          }
          else {
            uVar1 = piVar2[1];
            iVar6 = piVar2[2];
            if ((int)uVar5 < (int)uVar1) {
              iVar3 = FUN_14001de7c(uVar5,piVar2[3],uVar1);
              *piVar9 = iVar3 + iVar6;
              uVar4 = piVar9[-7];
            }
            else {
              lVar10 = (ulonglong)(uVar5 - uVar1) * lVar7;
              *piVar9 = iVar6 + piVar2[3] +
                        (int)((ulonglong)((lVar10 >> 0x3f) + lVar10 + 0x8000) >> 0x10);
            }
          }
        }
        else {
          iVar6 = piVar2[2];
LAB_14006b4c4:
          *piVar9 = iVar6;
        }
        piVar9[-7] = uVar4 | 0x20;
      }
      piVar9 = piVar9 + 0x10;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}

