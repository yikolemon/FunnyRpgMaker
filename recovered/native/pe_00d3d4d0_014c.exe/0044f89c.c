/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044f89c */

int __fastcall
FUN_0044f89c(uint *param_1,int param_2,uint param_3,int *param_4,int param_5,uint param_6)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  ushort uVar5;
  undefined2 extraout_var;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  uint *puVar13;
  uint *local_30;
  byte local_29;
  uint local_28;
  int local_24;
  uint local_20;
  uint *local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_30;
  iVar9 = 3;
  if (*(int *)(param_2 + 8) == 0) goto LAB_0044fa85;
  local_30 = param_1;
  if (param_6 < 2) {
    if ((param_6 & 1) == 0) {
      puVar13 = (uint *)&DAT_004e3d08;
    }
    else {
      puVar13 = (uint *)&DAT_004e4b9c;
    }
    FUN_004878c0(param_1 + 3,puVar13,0x200);
    puVar13 = local_30;
    local_30[1] = param_6;
    local_30[2] = 0;
    iVar9 = FUN_0044fe50(param_2,param_3,param_4[7]);
    if (iVar9 != 0) goto LAB_0044fa85;
    iVar9 = -0x100;
    do {
      uVar6 = (uint)*(ushort *)((int)puVar13 + iVar9 * 2 + 0x20c);
      if ((uVar6 == 0) ||
         (uVar4 = FUN_0044ddbc(param_2,uVar6), puVar13 = local_30, CONCAT22(extraout_var,uVar4) == 0
         )) {
        pbVar1 = (byte *)((int)puVar13 + iVar9 * 2 + 0x40c);
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1 = (byte *)((int)puVar13 + iVar9 * 2 + 0x20c);
        pbVar1[0] = 0;
        pbVar1[1] = 0;
      }
      else {
        *(undefined2 *)((int)local_30 + iVar9 * 2 + 0x40c) = uVar4;
        local_30[2] = iVar9 + 0x101;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0);
  }
  else {
    _memset(param_1 + 3,0,0x400);
    param_1[1] = param_6 + param_5;
    local_18 = FUN_00420696((int)param_4,param_6 + param_5);
    iVar9 = local_18;
    if (local_18 != 0) goto LAB_0044fa85;
    local_24 = param_2;
    local_1c = param_1 + 3;
    bVar2 = FUN_00420d96(param_4,&local_18);
    *param_1 = (uint)bVar2;
    iVar9 = local_18;
    if ((local_18 != 0) ||
       (bVar2 = FUN_00420d96(param_4,&local_18), iVar9 = local_18, local_18 != 0))
    goto LAB_0044fa85;
    uVar6 = (uint)bVar2;
    local_28 = uVar6;
    if ((*local_30 & 0x7f) == 1) {
      local_30[2] = 0;
      if (uVar6 != 0) {
        uVar10 = 0;
        uVar6 = 1;
        do {
          local_29 = FUN_00420d96(param_4,&local_18);
          iVar9 = local_18;
          if ((local_18 != 0) ||
             (bVar2 = FUN_00420d96(param_4,&local_18), iVar9 = local_18, local_18 != 0))
          goto LAB_0044fa85;
          uVar8 = (uint)bVar2;
          uVar7 = uVar8 + 1;
          local_20 = local_30[2];
          if (local_30[2] <= uVar8) {
            local_30[2] = uVar7;
            local_20 = uVar7;
          }
          uVar7 = uVar7 + uVar6;
          if (uVar6 < uVar7) {
            uVar11 = (uint)local_29;
            iVar9 = uVar8 + 1;
            do {
              if (uVar11 < 0x100 && uVar6 < param_3) {
                *(short *)((int)local_30 + uVar11 * 2 + 0x20c) = (short)uVar6;
                *(undefined2 *)((int)local_30 + uVar11 * 2 + 0xc) =
                     *(undefined2 *)(*(int *)(local_24 + 8) + uVar6 * 2);
              }
              uVar6 = uVar6 + 1;
              uVar11 = uVar11 + 1;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
          uVar10 = uVar10 + 1;
          uVar6 = uVar7;
        } while (uVar10 != local_28);
        if (0x100 < local_20) {
          local_30[2] = 0x100;
        }
      }
    }
    else {
      iVar9 = 3;
      if ((*local_30 & 0x7f) != 0) goto LAB_0044fa85;
      local_30[2] = uVar6 + 1;
      local_18 = FUN_00420be1(param_4,uVar6);
      iVar9 = local_18;
      if (local_18 != 0) goto LAB_0044fa85;
      if (uVar6 != 0) {
        iVar9 = param_4[8];
        uVar10 = 1;
        do {
          if (uVar10 < param_3) {
            uVar7 = (uint)*(byte *)(iVar9 + -1 + uVar10);
            *(short *)((int)local_30 + uVar7 * 2 + 0x20c) = (short)uVar10;
            *(undefined2 *)((int)local_30 + uVar7 * 2 + 0xc) =
                 *(undefined2 *)(*(int *)(local_24 + 8) + uVar10 * 2);
          }
          bVar12 = uVar10 != uVar6;
          uVar10 = uVar10 + 1;
        } while (bVar12);
      }
      FUN_00420cde(param_4);
    }
    iVar9 = local_18;
    if ((*local_30 & 0x80) == 0) goto LAB_0044fa85;
    bVar2 = FUN_00420d96(param_4,&local_18);
    iVar9 = local_18;
    if (bVar2 == 0 || local_18 != 0) goto LAB_0044fa85;
    uVar6 = 0;
    do {
      uVar3 = FUN_00420d96(param_4,&local_18);
      local_28 = CONCAT31(local_28._1_3_,uVar3);
      iVar9 = local_18;
      if ((local_18 != 0) ||
         (uVar5 = FUN_0042070a(param_4,&local_18), iVar9 = local_18, local_18 != 0))
      goto LAB_0044fa85;
      *(ushort *)((int)local_1c + (local_28 & 0xff) * 2) = uVar5;
      if (param_3 != 0) {
        uVar10 = 0;
        do {
          if (*(ushort *)(*(int *)(local_24 + 8) + uVar10 * 2) == uVar5) {
            *(short *)((int)local_30 + (local_28 & 0xff) * 2 + 0x20c) = (short)uVar10;
            break;
          }
          uVar10 = uVar10 + 1;
        } while (param_3 != uVar10);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != bVar2);
  }
  iVar9 = 0;
LAB_0044fa85:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_30)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_30);
  }
  return iVar9;
}

