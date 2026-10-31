/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140052637 */

int FUN_140052637(uint *param_1,uint param_2,longlong *param_3,int param_4,uint param_5,char param_6
                 )

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auStackY_88 [32];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  lVar2 = param_3[6];
  local_4c = 0;
  if (param_5 < 3) {
    param_1[1] = param_5;
    if (param_5 == 2) {
      if (0x57 < param_2) goto LAB_140052871;
      puVar10 = (undefined8 *)FUN_14001f231(lVar2,2,0,param_2,0,&local_4c);
      *(undefined8 **)(param_1 + 2) = puVar10;
      if (local_4c == 0) {
        uVar12 = (ulonglong)(param_2 * 2);
        puVar13 = (undefined8 *)&DAT_1400f7030;
        goto LAB_1400528bd;
      }
    }
    else if (param_5 == 1) {
      if (param_2 < 0xa7) {
        puVar10 = (undefined8 *)FUN_14001f231(lVar2,2,0,param_2,0,&local_4c);
        *(undefined8 **)(param_1 + 2) = puVar10;
        if (local_4c == 0) {
          uVar12 = (ulonglong)(param_2 * 2);
          puVar13 = (undefined8 *)&DAT_1400f6ee0;
LAB_1400528bd:
          FUN_1400b3550(puVar10,puVar13,uVar12);
          goto LAB_1400528c5;
        }
      }
      else {
LAB_140052871:
        local_4c = 3;
      }
    }
    else {
      if (0xe5 < param_2) goto LAB_140052871;
      puVar10 = (undefined8 *)FUN_14001f231(lVar2,2,0,param_2,0,&local_4c);
      *(undefined8 **)(param_1 + 2) = puVar10;
      if (local_4c == 0) {
        uVar12 = (ulonglong)(param_2 * 2);
        puVar13 = (undefined8 *)&DAT_1400f6d10;
        goto LAB_1400528bd;
      }
    }
  }
  else {
    param_1[1] = param_5 + param_4;
    uVar8 = FUN_140020a41((longlong)param_3,param_5 + param_4);
    local_4c = (int)uVar8;
    if (local_4c == 0) {
      bVar4 = FUN_140021246(param_3,&local_4c);
      *param_1 = (uint)bVar4;
      if (local_4c == 0) {
        puVar9 = (undefined2 *)FUN_14001f231(lVar2,2,0,param_2,0,&local_4c);
        *(undefined2 **)(param_1 + 2) = puVar9;
        if (local_4c == 0) {
          *puVar9 = 0;
          if (*param_1 - 1 < 2) {
            if (1 < param_2) {
              uVar14 = 1;
              do {
                uVar5 = FUN_140020aa5(param_3,&local_4c);
                if (local_4c != 0) goto LAB_140052935;
                if (*param_1 == 2) {
                  uVar6 = FUN_140020aa5(param_3,&local_4c);
                  if (local_4c != 0) goto LAB_140052935;
                  uVar11 = (uint)uVar6;
                }
                else {
                  bVar4 = FUN_140021246(param_3,&local_4c);
                  if (local_4c != 0) goto LAB_140052935;
                  uVar11 = (uint)bVar4;
                }
                uVar3 = uVar5 ^ 0xffff;
                if ((uint)uVar5 <= (uVar11 ^ 0xffff)) {
                  uVar3 = uVar11;
                }
                if (uVar14 < param_2) {
                  uVar12 = (ulonglong)uVar14;
                  uVar11 = 0;
                  do {
                    uVar12 = uVar12 + 1;
                    *(ushort *)(*(longlong *)(param_1 + 2) + -2 + uVar12 * 2) =
                         uVar5 + (short)uVar11;
                    uVar1 = uVar11 + 1;
                    if (param_2 <= uVar12) break;
                    bVar15 = uVar11 < uVar3;
                    uVar11 = uVar1;
                  } while (bVar15);
                  uVar14 = uVar14 + uVar1;
                }
              } while (uVar14 < param_2);
            }
LAB_1400528c5:
            if (param_6 != '\0') {
              local_4c = FUN_140052fd7((longlong)param_1,param_2,lVar2);
            }
          }
          else if (*param_1 == 0) {
            local_4c = FUN_140021063(param_3,param_2 * 2 - 2);
            if (local_4c == 0) {
              if (1 < param_2) {
                uVar12 = 1;
                do {
                  uVar5 = FUN_1400211ce((longlong)param_3);
                  *(ushort *)(*(longlong *)(param_1 + 2) + uVar12 * 2) = uVar5;
                  uVar12 = uVar12 + 1;
                } while (param_2 != uVar12);
              }
              FUN_140021187(param_3);
              goto LAB_1400528c5;
            }
          }
          else {
            local_4c = 3;
          }
        }
      }
    }
LAB_140052935:
    if (local_4c == 0) {
      iVar7 = 0;
      goto LAB_140052966;
    }
  }
  FUN_14001c53d(lVar2,*(longlong *)(param_1 + 2));
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_14001c53d(lVar2,*(longlong *)(param_1 + 4));
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  iVar7 = local_4c;
LAB_140052966:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_88);
  }
  return iVar7;
}

