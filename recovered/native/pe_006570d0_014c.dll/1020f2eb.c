/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020f2eb */

void __fastcall FUN_1020f2eb(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = *(int *)(param_1 + 0xc);
    do {
      uVar4 = *(uint *)(param_2 + 0x10);
      if ((uVar4 & 0x10) == 0) {
        iVar3 = *(int *)(param_2 + 0x20);
        uVar5 = (*(uint *)(param_2 + 0x18) | *(uint *)(param_2 + 0x14)) & param_5;
        if ((uVar5 & 10) == 0) {
          if (uVar5 == 0) {
            if ((uVar4 & 0x40) != 0) {
              if (((uint)(param_5 != 0xc) * 0x80 + 0x80 & uVar4) == 0) {
                if ((((uint)(param_5 == 0xc) * 0x80 + 0x80 & uVar4) != 0) && (iVar1 != 0)) {
                  iVar7 = 0;
                  do {
                    piVar8 = *(int **)(iVar2 + iVar7 * 4);
                    iVar6 = iVar3 - (*piVar8 + piVar8[1]);
                    if (-iVar6 < param_4 && iVar6 < param_4) {
                      uVar5 = 0x410;
                      goto LAB_1020f485;
                    }
                    iVar7 = iVar7 + 1;
                  } while (iVar1 != iVar7);
                }
LAB_1020f491:
                if (*(int *)(param_2 + 0x1c) == 0 && iVar1 != 0) {
                  iVar7 = 0;
                  do {
                    piVar8 = *(int **)(iVar2 + iVar7 * 4);
                    if ((*piVar8 <= iVar3) && (iVar3 <= *piVar8 + piVar8[1])) goto LAB_1020f426;
                    iVar7 = iVar7 + 1;
                  } while (iVar1 != iVar7);
                }
              }
              else if (iVar1 != 0) {
                iVar7 = 0;
LAB_1020f3f3:
                piVar8 = *(int **)(iVar2 + iVar7 * 4);
                if (param_4 <= iVar3 - *piVar8 || param_4 <= -(iVar3 - *piVar8))
                goto code_r0x1020f412;
                uVar5 = 0x210;
LAB_1020f485:
                *(int **)(param_2 + 0x1c) = piVar8;
                *(uint *)(param_2 + 0x10) = uVar4 | uVar5;
                goto LAB_1020f491;
              }
            }
          }
          else if (iVar1 != 0) {
            iVar7 = 0;
            do {
              piVar8 = *(int **)(iVar2 + iVar7 * 4);
              iVar6 = iVar3 - (*piVar8 + piVar8[1]);
              if (-iVar6 < param_4 && iVar6 < param_4) {
                uVar4 = uVar4 | 0x410;
                goto LAB_1020f423;
              }
              iVar7 = iVar7 + 1;
            } while (iVar1 != iVar7);
          }
        }
        else if (iVar1 != 0) {
          iVar7 = 0;
LAB_1020f362:
          piVar8 = *(int **)(iVar2 + iVar7 * 4);
          if (param_4 <= -(iVar3 - *piVar8) || param_4 <= iVar3 - *piVar8) goto code_r0x1020f384;
          uVar4 = uVar4 | 0x210;
LAB_1020f423:
          *(uint *)(param_2 + 0x10) = uVar4;
LAB_1020f426:
          *(int **)(param_2 + 0x1c) = piVar8;
        }
      }
LAB_1020f429:
      param_2 = param_2 + 0x2c;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
code_r0x1020f412:
  iVar7 = iVar7 + 1;
  if (iVar1 == iVar7) goto LAB_1020f491;
  goto LAB_1020f3f3;
code_r0x1020f384:
  iVar7 = iVar7 + 1;
  if (iVar1 == iVar7) goto LAB_1020f429;
  goto LAB_1020f362;
}

