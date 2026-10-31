/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021de04 */

void FUN_18021de04(int *param_1,ulonglong param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  
  iVar6 = *param_1;
  if (iVar6 != 0) {
    lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 10) + 0xcc + (param_2 & 0xffffffff) * 0xcc);
    piVar7 = (int *)(*(longlong *)(param_1 + 2) + 0x38);
    do {
      piVar2 = *(int **)(piVar7 + -4);
      if (piVar2 != (int *)0x0) {
        uVar4 = piVar7[-7];
        if ((uVar4 >> 9 & 1) == 0) {
          if ((uVar4 >> 10 & 1) != 0) {
            iVar3 = piVar2[3] + piVar2[2];
            goto LAB_18021de84;
          }
          iVar3 = (int)((longlong)piVar7[-2] - (longlong)*piVar2);
          if (iVar3 < 1) {
            lVar8 = ((longlong)piVar7[-2] - (longlong)*piVar2) * lVar5;
            *piVar7 = (int)((ulonglong)(lVar8 + (lVar8 >> 0x3f) + 0x8000) >> 0x10) + piVar2[2];
          }
          else {
            iVar1 = piVar2[2];
            if (iVar3 < piVar2[1]) {
              iVar3 = FUN_1801cb4a4();
              *piVar7 = iVar3 + iVar1;
              uVar4 = piVar7[-7];
            }
            else {
              lVar8 = (ulonglong)(uint)(iVar3 - piVar2[1]) * lVar5;
              *piVar7 = iVar1 + piVar2[3] +
                        (int)((ulonglong)((lVar8 >> 0x3f) + lVar8 + 0x8000) >> 0x10);
            }
          }
        }
        else {
          iVar3 = piVar2[2];
LAB_18021de84:
          *piVar7 = iVar3;
        }
        piVar7[-7] = uVar4 | 0x20;
      }
      piVar7 = piVar7 + 0x10;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

