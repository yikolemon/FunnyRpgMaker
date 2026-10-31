/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021dd04 */

void FUN_18021dd04(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  int *piVar7;
  uint uVar8;
  
  iVar2 = *param_2;
  if (iVar2 != 0) {
    lVar3 = *(longlong *)(param_2 + 2);
    do {
      if ((((*(byte *)(lVar3 + 0x20) & 0xc) != 0) || ((*(byte *)(lVar3 + 0x24) & 0xc) != 0)) &&
         (uVar8 = *(uint *)(lVar3 + 0x1c), (uVar8 & 0x10) == 0)) {
        iVar1 = *(int *)(lVar3 + 0x30);
        piVar7 = param_1 + 7;
        for (iVar4 = *param_1; iVar4 != 0; iVar4 = iVar4 + -1) {
          if (iVar1 - piVar7[-3] < -param_1[0x207]) break;
          if ((iVar1 <= param_1[0x207] + piVar7[-4]) &&
             (((char)param_1[0x208] != '\0' || (iVar1 - piVar7[-3] <= param_1[0x206])))) {
            *(int *)(lVar3 + 0x38) = *piVar7;
            uVar8 = uVar8 | 0x30;
            *(uint *)(lVar3 + 0x1c) = uVar8;
          }
          piVar7 = piVar7 + 8;
        }
        uVar6 = (ulonglong)(uint)param_1[0x81];
        if (uVar6 != 0) {
          piVar7 = param_1 + uVar6 * 8 + 0x7c;
          do {
            if (*piVar7 - iVar1 < -param_1[0x207]) break;
            if ((piVar7[1] - param_1[0x207] <= iVar1) &&
               (((char)param_1[0x208] != '\0' || (*piVar7 - iVar1 < param_1[0x206])))) {
              *(int *)(lVar3 + 0x38) = piVar7[5];
              uVar8 = uVar8 | 0x30;
              *(uint *)(lVar3 + 0x1c) = uVar8;
            }
            piVar7 = piVar7 + -8;
            uVar5 = (int)uVar6 - 1;
            uVar6 = (ulonglong)uVar5;
          } while (uVar5 != 0);
        }
      }
      lVar3 = lVar3 + 0x40;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

