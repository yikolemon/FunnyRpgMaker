/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006c33e */

void FUN_14006c33e(longlong param_1,longlong param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int *piVar9;
  
  if (param_3 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    uVar1 = *(uint *)(param_1 + 4);
    uVar4 = (ulonglong)uVar1;
    do {
      uVar5 = *(uint *)(param_2 + 0x1c);
      if ((uVar5 & 0x10) == 0) {
        iVar2 = *(int *)(param_2 + 0x30);
        uVar6 = (*(uint *)(param_2 + 0x24) | *(uint *)(param_2 + 0x20)) & param_5;
        if ((uVar6 & 10) == 0) {
          if (uVar6 == 0) {
            if ((uVar5 & 0x40) != 0) {
              if ((uVar5 & (uint)(param_5 != 0xc) * 0x80 + 0x80) == 0) {
                if (((uVar5 & (uint)(param_5 == 0xc) * 0x80 + 0x80) != 0) && (uVar1 != 0)) {
                  uVar8 = 0;
                  do {
                    piVar9 = *(int **)(lVar3 + uVar8 * 8);
                    iVar7 = iVar2 - (*piVar9 + piVar9[1]);
                    if (-iVar7 < param_4 && iVar7 < param_4) {
                      uVar6 = 0x410;
                      goto LAB_14006c4c8;
                    }
                    uVar8 = uVar8 + 1;
                  } while (uVar4 != uVar8);
                }
LAB_14006c4d1:
                if (*(longlong *)(param_2 + 0x28) == 0 && uVar1 != 0) {
                  uVar8 = 0;
                  do {
                    piVar9 = *(int **)(lVar3 + uVar8 * 8);
                    if ((*piVar9 <= iVar2) && (iVar2 <= *piVar9 + piVar9[1])) {
                      *(int **)(param_2 + 0x28) = piVar9;
                      break;
                    }
                    uVar8 = uVar8 + 1;
                  } while (uVar4 != uVar8);
                }
              }
              else if (uVar4 != 0) {
                uVar8 = 0;
LAB_14006c434:
                piVar9 = *(int **)(lVar3 + uVar8 * 8);
                if (param_4 <= iVar2 - *piVar9 || param_4 <= -(iVar2 - *piVar9))
                goto code_r0x00014006c452;
                uVar6 = 0x210;
LAB_14006c4c8:
                *(int **)(param_2 + 0x28) = piVar9;
                *(uint *)(param_2 + 0x1c) = uVar5 | uVar6;
                goto LAB_14006c4d1;
              }
            }
          }
          else if (uVar4 != 0) {
            uVar8 = 0;
            do {
              piVar9 = *(int **)(lVar3 + uVar8 * 8);
              iVar7 = iVar2 - (*piVar9 + piVar9[1]);
              if (-iVar7 < param_4 && iVar7 < param_4) {
                uVar5 = uVar5 | 0x410;
                goto LAB_14006c462;
              }
              uVar8 = uVar8 + 1;
            } while (uVar4 != uVar8);
          }
        }
        else if (uVar4 != 0) {
          uVar8 = 0;
LAB_14006c3a6:
          piVar9 = *(int **)(lVar3 + uVar8 * 8);
          if (param_4 <= -(iVar2 - *piVar9) || param_4 <= iVar2 - *piVar9)
          goto code_r0x00014006c3c8;
          uVar5 = uVar5 | 0x210;
LAB_14006c462:
          *(uint *)(param_2 + 0x1c) = uVar5;
          *(int **)(param_2 + 0x28) = piVar9;
        }
      }
LAB_14006c469:
      param_2 = param_2 + 0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
code_r0x00014006c452:
  uVar8 = uVar8 + 1;
  if (uVar4 == uVar8) goto LAB_14006c4d1;
  goto LAB_14006c434;
code_r0x00014006c3c8:
  uVar8 = uVar8 + 1;
  if (uVar4 == uVar8) goto LAB_14006c469;
  goto LAB_14006c3a6;
}

