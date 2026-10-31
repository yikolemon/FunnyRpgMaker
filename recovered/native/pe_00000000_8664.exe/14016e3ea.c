/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016e3ea */

void FUN_14016e3ea(longlong param_1,longlong param_2,int param_3,int param_4,uint param_5)

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
                      goto LAB_14016e574;
                    }
                    uVar8 = uVar8 + 1;
                  } while (uVar4 != uVar8);
                }
LAB_14016e57d:
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
LAB_14016e4e0:
                piVar9 = *(int **)(lVar3 + uVar8 * 8);
                if (param_4 <= iVar2 - *piVar9 || param_4 <= -(iVar2 - *piVar9))
                goto code_r0x00014016e4fe;
                uVar6 = 0x210;
LAB_14016e574:
                *(int **)(param_2 + 0x28) = piVar9;
                *(uint *)(param_2 + 0x1c) = uVar5 | uVar6;
                goto LAB_14016e57d;
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
                goto LAB_14016e50e;
              }
              uVar8 = uVar8 + 1;
            } while (uVar4 != uVar8);
          }
        }
        else if (uVar4 != 0) {
          uVar8 = 0;
LAB_14016e452:
          piVar9 = *(int **)(lVar3 + uVar8 * 8);
          if (param_4 <= -(iVar2 - *piVar9) || param_4 <= iVar2 - *piVar9)
          goto code_r0x00014016e474;
          uVar5 = uVar5 | 0x210;
LAB_14016e50e:
          *(uint *)(param_2 + 0x1c) = uVar5;
          *(int **)(param_2 + 0x28) = piVar9;
        }
      }
LAB_14016e515:
      param_2 = param_2 + 0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
code_r0x00014016e4fe:
  uVar8 = uVar8 + 1;
  if (uVar4 == uVar8) goto LAB_14016e57d;
  goto LAB_14016e4e0;
code_r0x00014016e474:
  uVar8 = uVar8 + 1;
  if (uVar4 == uVar8) goto LAB_14016e515;
  goto LAB_14016e452;
}

