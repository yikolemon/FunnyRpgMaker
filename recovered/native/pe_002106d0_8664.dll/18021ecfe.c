/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021ecfe */

void FUN_18021ecfe(longlong param_1,longlong param_2,int param_3,int param_4,uint param_5)

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
                      goto LAB_18021ee88;
                    }
                    uVar8 = uVar8 + 1;
                  } while (uVar4 != uVar8);
                }
LAB_18021ee91:
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
LAB_18021edf4:
                piVar9 = *(int **)(lVar3 + uVar8 * 8);
                if (param_4 <= iVar2 - *piVar9 || param_4 <= -(iVar2 - *piVar9))
                goto code_r0x00018021ee12;
                uVar6 = 0x210;
LAB_18021ee88:
                *(int **)(param_2 + 0x28) = piVar9;
                *(uint *)(param_2 + 0x1c) = uVar5 | uVar6;
                goto LAB_18021ee91;
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
                goto LAB_18021ee22;
              }
              uVar8 = uVar8 + 1;
            } while (uVar4 != uVar8);
          }
        }
        else if (uVar4 != 0) {
          uVar8 = 0;
LAB_18021ed66:
          piVar9 = *(int **)(lVar3 + uVar8 * 8);
          if (param_4 <= -(iVar2 - *piVar9) || param_4 <= iVar2 - *piVar9)
          goto code_r0x00018021ed88;
          uVar5 = uVar5 | 0x210;
LAB_18021ee22:
          *(uint *)(param_2 + 0x1c) = uVar5;
          *(int **)(param_2 + 0x28) = piVar9;
        }
      }
LAB_18021ee29:
      param_2 = param_2 + 0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
code_r0x00018021ee12:
  uVar8 = uVar8 + 1;
  if (uVar4 == uVar8) goto LAB_18021ee91;
  goto LAB_18021edf4;
code_r0x00018021ed88:
  uVar8 = uVar8 + 1;
  if (uVar4 == uVar8) goto LAB_18021ee29;
  goto LAB_18021ed66;
}

