/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140154a49 */

ulonglong FUN_140154a49(uint *param_1,longlong param_2,uint param_3,longlong param_4,int param_5,
                       uint param_6)

{
  byte *pbVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auStack_88 [44];
  uint local_5c;
  ulonglong local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  uVar9 = 3;
  if (*(longlong *)(param_2 + 8) == 0) goto LAB_140154c35;
  if (param_6 < 2) {
    if ((param_6 & 1) == 0) {
      puVar11 = &DAT_140e9d330;
    }
    else {
      puVar11 = &DAT_140e9e320;
    }
    FUN_1401c5180(param_1 + 3,puVar11,0x200);
    param_1[1] = param_6;
    param_1[2] = 0;
    uVar9 = FUN_140155087(param_2,param_3,*(undefined8 *)(param_4 + 0x30));
    if ((int)uVar9 != 0) goto LAB_140154c35;
    lVar12 = -0x100;
    do {
      if ((*(short *)((longlong)param_1 + lVar12 * 2 + 0x20c) == 0) ||
         (iVar5 = FUN_140152bca(param_2), iVar5 == 0)) {
        pbVar1 = (byte *)((longlong)param_1 + lVar12 * 2 + 0x40c);
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1 = (byte *)((longlong)param_1 + lVar12 * 2 + 0x20c);
        pbVar1[0] = 0;
        pbVar1[1] = 0;
      }
      else {
        *(short *)((longlong)param_1 + lVar12 * 2 + 0x40c) = (short)iVar5;
        param_1[2] = (int)lVar12 + 0x101;
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 != 0);
  }
  else {
    FUN_1401c5830(param_1 + 3,0,0x400);
    param_1[1] = param_6 + param_5;
    uVar9 = FUN_14012d612(param_4,param_6 + param_5);
    local_4c = (uint)uVar9;
    if (local_4c != 0) goto LAB_140154c35;
    bVar2 = FUN_14012de17(param_4,&local_4c);
    *param_1 = (uint)bVar2;
    uVar9 = (ulonglong)local_4c;
    if (local_4c != 0) goto LAB_140154c35;
    uVar4 = FUN_14012de17(param_4);
    uVar9 = (ulonglong)local_4c;
    if (local_4c != 0) goto LAB_140154c35;
    uVar13 = (ulonglong)uVar4 & 0xff;
    iVar5 = (int)uVar13;
    local_58 = uVar13;
    if ((*param_1 & 0x7f) == 1) {
      param_1[2] = 0;
      if (iVar5 != 0) {
        uVar8 = 0;
        uVar4 = 1;
        do {
          local_5c = uVar8;
          uVar8 = FUN_14012de17(param_4,&local_4c);
          uVar9 = (ulonglong)local_4c;
          if (local_4c != 0) goto LAB_140154c35;
          uVar6 = FUN_14012de17(param_4,&local_4c);
          uVar9 = (ulonglong)local_4c;
          if (local_4c != 0) goto LAB_140154c35;
          uVar10 = (uVar6 & 0xff) + 1;
          uVar7 = param_1[2];
          if (param_1[2] <= (uVar6 & 0xff)) {
            param_1[2] = uVar10;
            uVar7 = uVar10;
          }
          uVar10 = uVar10 + uVar4;
          if (uVar4 < uVar10) {
            uVar9 = (ulonglong)uVar8 & 0xff;
            uVar13 = (ulonglong)uVar4;
            do {
              if ((uint)uVar9 < 0x100 && uVar13 < param_3) {
                *(short *)((longlong)param_1 + uVar9 * 2 + 0x20c) = (short)uVar13;
                *(undefined2 *)((longlong)param_1 + uVar9 * 2 + 0xc) =
                     *(undefined2 *)(*(longlong *)(param_2 + 8) + uVar13 * 2);
              }
              uVar13 = uVar13 + 1;
              uVar9 = (ulonglong)((uint)uVar9 + 1);
            } while (uVar10 != uVar13);
          }
          uVar8 = local_5c + 1;
          uVar4 = uVar10;
        } while (uVar8 != (uint)local_58);
        if (0x100 < uVar7) {
          param_1[2] = 0x100;
        }
      }
    }
    else {
      uVar9 = 3;
      if ((*param_1 & 0x7f) != 0) goto LAB_140154c35;
      param_1[2] = iVar5 + 1;
      uVar9 = FUN_14012dc34(param_4,uVar13);
      local_4c = (uint)uVar9;
      if (local_4c != 0) goto LAB_140154c35;
      if (iVar5 != 0) {
        lVar12 = *(longlong *)(param_4 + 0x38);
        uVar9 = 1;
        do {
          if (uVar9 < param_3) {
            uVar14 = (ulonglong)*(byte *)(lVar12 + -1 + uVar9);
            *(short *)((longlong)param_1 + uVar14 * 2 + 0x20c) = (short)uVar9;
            *(undefined2 *)((longlong)param_1 + uVar14 * 2 + 0xc) =
                 *(undefined2 *)(*(longlong *)(param_2 + 8) + uVar9 * 2);
          }
          bVar15 = uVar9 != uVar13;
          uVar9 = uVar9 + 1;
        } while (bVar15);
      }
      FUN_14012dd58(param_4);
    }
    if ((*param_1 & 0x80) == 0) {
      uVar9 = (ulonglong)local_4c;
      goto LAB_140154c35;
    }
    bVar2 = FUN_14012de17(param_4,&local_4c);
    uVar9 = (ulonglong)local_4c;
    if (bVar2 == 0 || local_4c != 0) goto LAB_140154c35;
    local_5c = (uint)bVar2;
    uVar4 = 0;
    do {
      uVar8 = FUN_14012de17(param_4,&local_4c);
      uVar9 = (ulonglong)local_4c;
      if (local_4c != 0) goto LAB_140154c35;
      sVar3 = FUN_14012d676(param_4,&local_4c);
      uVar9 = (ulonglong)local_4c;
      if (local_4c != 0) goto LAB_140154c35;
      *(short *)((longlong)param_1 + ((ulonglong)uVar8 & 0xff) * 2 + 0xc) = sVar3;
      if (param_3 != 0) {
        uVar9 = 0;
        do {
          if (*(short *)(*(longlong *)(param_2 + 8) + uVar9 * 2) == sVar3) {
            *(short *)((longlong)param_1 + ((ulonglong)uVar8 & 0xff) * 2 + 0x20c) = (short)uVar9;
            break;
          }
          uVar9 = uVar9 + 1;
        } while (param_3 != uVar9);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != local_5c);
  }
  uVar9 = 0;
LAB_140154c35:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_88);
  }
  return uVar9;
}

