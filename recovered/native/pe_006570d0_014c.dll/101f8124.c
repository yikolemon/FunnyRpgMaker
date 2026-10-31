/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f8124 */

int __fastcall
FUN_101f8124(uint *param_1,int param_2,uint param_3,int param_4,int param_5,uint param_6)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined *puVar14;
  uint *local_30;
  byte local_29;
  uint local_28;
  int local_24;
  uint local_20;
  uint *local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_30;
  iVar10 = 3;
  if (*(int *)(param_2 + 8) == 0) goto LAB_101f830d;
  local_30 = param_1;
  if (param_6 < 2) {
    if ((param_6 & 1) == 0) {
      puVar14 = &DAT_1030f768;
    }
    else {
      puVar14 = &DAT_103105fc;
    }
    FUN_1025b2d0(param_1 + 3,puVar14,0x200);
    puVar7 = local_30;
    local_30[1] = param_6;
    local_30[2] = 0;
    iVar10 = FUN_101f86d8(*(undefined4 *)(param_4 + 0x1c));
    if (iVar10 != 0) goto LAB_101f830d;
    iVar10 = -0x100;
    do {
      if ((*(short *)((int)puVar7 + iVar10 * 2 + 0x20c) == 0) ||
         (iVar6 = FUN_101f6644(), puVar7 = local_30, iVar6 == 0)) {
        pbVar1 = (byte *)((int)puVar7 + iVar10 * 2 + 0x40c);
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1 = (byte *)((int)puVar7 + iVar10 * 2 + 0x20c);
        pbVar1[0] = 0;
        pbVar1[1] = 0;
      }
      else {
        *(short *)((int)local_30 + iVar10 * 2 + 0x40c) = (short)iVar6;
        local_30[2] = iVar10 + 0x101;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != 0);
  }
  else {
    _memset(param_1 + 3,0,0x400);
    param_1[1] = param_6 + param_5;
    local_18 = FUN_101c461e(param_4,param_6 + param_5);
    iVar10 = local_18;
    if (local_18 != 0) goto LAB_101f830d;
    local_24 = param_2;
    local_1c = param_1 + 3;
    uVar5 = FUN_101c4d1e(param_4,&local_18);
    *param_1 = uVar5 & 0xff;
    iVar10 = local_18;
    if ((local_18 != 0) ||
       (uVar5 = FUN_101c4d1e(param_4,&local_18), iVar10 = local_18, local_18 != 0))
    goto LAB_101f830d;
    uVar5 = uVar5 & 0xff;
    local_28 = uVar5;
    if ((*local_30 & 0x7f) == 1) {
      local_30[2] = 0;
      if (uVar5 != 0) {
        uVar11 = 0;
        uVar5 = 1;
        do {
          local_29 = FUN_101c4d1e(param_4,&local_18);
          iVar10 = local_18;
          if ((local_18 != 0) ||
             (uVar9 = FUN_101c4d1e(param_4,&local_18), iVar10 = local_18, local_18 != 0))
          goto LAB_101f830d;
          uVar9 = uVar9 & 0xff;
          uVar8 = uVar9 + 1;
          local_20 = local_30[2];
          if (local_30[2] <= uVar9) {
            local_30[2] = uVar8;
            local_20 = uVar8;
          }
          uVar8 = uVar8 + uVar5;
          if (uVar5 < uVar8) {
            uVar12 = (uint)local_29;
            iVar10 = uVar9 + 1;
            do {
              if (uVar12 < 0x100 && uVar5 < param_3) {
                *(short *)((int)local_30 + uVar12 * 2 + 0x20c) = (short)uVar5;
                *(undefined2 *)((int)local_30 + uVar12 * 2 + 0xc) =
                     *(undefined2 *)(*(int *)(local_24 + 8) + uVar5 * 2);
              }
              uVar5 = uVar5 + 1;
              uVar12 = uVar12 + 1;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
          uVar11 = uVar11 + 1;
          uVar5 = uVar8;
        } while (uVar11 != local_28);
        if (0x100 < local_20) {
          local_30[2] = 0x100;
        }
      }
    }
    else {
      iVar10 = 3;
      if ((*local_30 & 0x7f) != 0) goto LAB_101f830d;
      local_30[2] = uVar5 + 1;
      local_18 = FUN_101c4b69(param_4,uVar5);
      iVar10 = local_18;
      if (local_18 != 0) goto LAB_101f830d;
      if (uVar5 != 0) {
        iVar10 = *(int *)(param_4 + 0x20);
        uVar11 = 1;
        do {
          if (uVar11 < param_3) {
            uVar9 = (uint)*(byte *)(iVar10 + -1 + uVar11);
            *(short *)((int)local_30 + uVar9 * 2 + 0x20c) = (short)uVar11;
            *(undefined2 *)((int)local_30 + uVar9 * 2 + 0xc) =
                 *(undefined2 *)(*(int *)(local_24 + 8) + uVar11 * 2);
          }
          bVar13 = uVar11 != uVar5;
          uVar11 = uVar11 + 1;
        } while (bVar13);
      }
      FUN_101c4c66(param_4);
    }
    iVar10 = local_18;
    if ((*local_30 & 0x80) == 0) goto LAB_101f830d;
    bVar2 = FUN_101c4d1e(param_4,&local_18);
    iVar10 = local_18;
    if (bVar2 == 0 || local_18 != 0) goto LAB_101f830d;
    uVar5 = 0;
    do {
      uVar3 = FUN_101c4d1e(param_4,&local_18);
      local_28 = CONCAT31(local_28._1_3_,uVar3);
      iVar10 = local_18;
      if ((local_18 != 0) ||
         (sVar4 = FUN_101c4692(param_4,&local_18), iVar10 = local_18, local_18 != 0))
      goto LAB_101f830d;
      *(short *)((int)local_1c + (local_28 & 0xff) * 2) = sVar4;
      if (param_3 != 0) {
        uVar11 = 0;
        do {
          if (*(short *)(*(int *)(local_24 + 8) + uVar11 * 2) == sVar4) {
            *(short *)((int)local_30 + (local_28 & 0xff) * 2 + 0x20c) = (short)uVar11;
            break;
          }
          uVar11 = uVar11 + 1;
        } while (param_3 != uVar11);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != bVar2);
  }
  iVar10 = 0;
LAB_101f830d:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_30)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar10;
}

