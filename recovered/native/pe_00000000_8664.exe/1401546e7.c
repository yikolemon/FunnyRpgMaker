/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401546e7 */

int FUN_1401546e7(uint *param_1,uint param_2,longlong param_3,int param_4,uint param_5,char param_6)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  undefined2 uVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined *puVar13;
  ulonglong uVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int *local_60;
  int local_4c;
  ulonglong local_48;
  
  uVar14 = (ulonglong)param_2;
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  uVar2 = *(undefined8 *)(param_3 + 0x30);
  local_4c = 0;
  if (param_5 < 3) {
    param_1[1] = param_5;
    if (param_5 == 2) {
      if (0x57 < param_2) goto LAB_140154921;
      local_60 = &local_4c;
      local_68 = 0;
      uVar10 = FUN_14012b8aa(uVar2,2,0,uVar14);
      *(undefined8 *)(param_1 + 2) = uVar10;
      if (local_4c == 0) {
        puVar13 = &DAT_140e9e270;
        goto LAB_14015496d;
      }
    }
    else if (param_5 == 1) {
      if (param_2 < 0xa7) {
        local_60 = &local_4c;
        local_68 = 0;
        uVar10 = FUN_14012b8aa(uVar2,2,0,uVar14);
        *(undefined8 *)(param_1 + 2) = uVar10;
        if (local_4c == 0) {
          puVar13 = &DAT_140e9e120;
LAB_14015496d:
          FUN_1401c5180(uVar10,puVar13,param_2 * 2);
          goto LAB_140154975;
        }
      }
      else {
LAB_140154921:
        local_4c = 3;
      }
    }
    else {
      if (0xe5 < param_2) goto LAB_140154921;
      local_60 = &local_4c;
      local_68 = 0;
      uVar10 = FUN_14012b8aa(uVar2,2,0,uVar14);
      *(undefined8 *)(param_1 + 2) = uVar10;
      if (local_4c == 0) {
        puVar13 = &DAT_140e9df50;
        goto LAB_14015496d;
      }
    }
  }
  else {
    param_1[1] = param_5 + param_4;
    local_4c = FUN_14012d612(param_3);
    if (local_4c == 0) {
      bVar4 = FUN_14012de17(param_3,&local_4c);
      *param_1 = (uint)bVar4;
      if (local_4c == 0) {
        local_68 = 0;
        local_60 = &local_4c;
        puVar9 = (undefined2 *)FUN_14012b8aa(uVar2,2,0,param_2);
        *(undefined2 **)(param_1 + 2) = puVar9;
        if (local_4c == 0) {
          *puVar9 = 0;
          if (*param_1 - 1 < 2) {
            if (1 < param_2) {
              uVar15 = 1;
              do {
                uVar5 = FUN_14012d676(param_3,&local_4c);
                if (local_4c != 0) goto LAB_1401549e5;
                if (*param_1 == 2) {
                  uVar6 = FUN_14012d676(param_3,&local_4c);
                  if (local_4c != 0) goto LAB_1401549e5;
                  uVar11 = (uint)uVar6;
                }
                else {
                  bVar4 = FUN_14012de17(param_3,&local_4c);
                  if (local_4c != 0) goto LAB_1401549e5;
                  uVar11 = (uint)bVar4;
                }
                uVar3 = uVar5 ^ 0xffff;
                if ((uint)uVar5 <= (uVar11 ^ 0xffff)) {
                  uVar3 = uVar11;
                }
                if (uVar15 < param_2) {
                  uVar12 = (ulonglong)uVar15;
                  uVar11 = 0;
                  do {
                    uVar12 = uVar12 + 1;
                    *(ushort *)(*(longlong *)(param_1 + 2) + -2 + uVar12 * 2) =
                         uVar5 + (short)uVar11;
                    uVar1 = uVar11 + 1;
                    if (uVar14 <= uVar12) break;
                    bVar16 = uVar11 < uVar3;
                    uVar11 = uVar1;
                  } while (bVar16);
                  uVar15 = uVar15 + uVar1;
                }
              } while (uVar15 < param_2);
            }
LAB_140154975:
            if (param_6 != '\0') {
              local_4c = FUN_140155087(param_1,uVar14,uVar2);
            }
          }
          else if (*param_1 == 0) {
            local_4c = FUN_14012dc34(param_3,param_2 * 2 + -2);
            if (local_4c == 0) {
              if (1 < param_2) {
                uVar12 = 1;
                do {
                  uVar7 = FUN_14012dd9f(param_3);
                  *(undefined2 *)(*(longlong *)(param_1 + 2) + uVar12 * 2) = uVar7;
                  uVar12 = uVar12 + 1;
                } while (uVar14 != uVar12);
              }
              FUN_14012dd58(param_3);
              goto LAB_140154975;
            }
          }
          else {
            local_4c = 3;
          }
        }
      }
    }
LAB_1401549e5:
    if (local_4c == 0) {
      iVar8 = 0;
      goto LAB_140154a16;
    }
  }
  FUN_140128b39(uVar2,*(undefined8 *)(param_1 + 2));
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_140128b39(uVar2,*(undefined8 *)(param_1 + 4));
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  iVar8 = local_4c;
LAB_140154a16:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_88);
  }
  return iVar8;
}

