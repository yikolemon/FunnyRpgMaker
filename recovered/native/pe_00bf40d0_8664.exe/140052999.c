/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140052999 */

ulonglong FUN_140052999(uint *param_1,longlong param_2,uint param_3,longlong *param_4,int param_5,
                       uint param_6)

{
  ulonglong uVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined6 extraout_var;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_88 [44];
  uint local_5c;
  ulonglong local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_88;
  uVar8 = 3;
  if (*(longlong *)(param_2 + 8) == 0) goto LAB_140052b85;
  uVar1 = (ulonglong)param_3;
  if (param_6 < 2) {
    if ((param_6 & 1) == 0) {
      puVar12 = (undefined8 *)&DAT_1400f60f0;
    }
    else {
      puVar12 = (undefined8 *)&DAT_1400f70e0;
    }
    FUN_1400b3550((undefined8 *)(param_1 + 3),puVar12,0x200);
    param_1[1] = param_6;
    param_1[2] = 0;
    iVar6 = FUN_140052fd7(param_2,param_3,param_4[6]);
    uVar8 = CONCAT44(extraout_var_01,iVar6);
    if (iVar6 != 0) goto LAB_140052b85;
    lVar13 = -0x100;
    do {
      uVar5 = *(ushort *)((longlong)param_1 + lVar13 * 2 + 0x20c);
      if ((uVar5 == 0) ||
         (uVar4 = FUN_140050b1a(param_2,(uint)uVar5), (int)CONCAT62(extraout_var,uVar4) == 0)) {
        *(undefined2 *)((longlong)param_1 + lVar13 * 2 + 0x40c) = 0;
        *(undefined2 *)((longlong)param_1 + lVar13 * 2 + 0x20c) = 0;
      }
      else {
        *(undefined2 *)((longlong)param_1 + lVar13 * 2 + 0x40c) = uVar4;
        param_1[2] = (int)lVar13 + 0x101;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0);
  }
  else {
    FUN_1400b3c00((undefined1 (*) [32])(param_1 + 3),0,0x400);
    param_1[1] = param_6 + param_5;
    uVar8 = FUN_140020a41((longlong)param_4,param_6 + param_5);
    local_4c = (uint)uVar8;
    if (local_4c != 0) goto LAB_140052b85;
    bVar2 = FUN_140021246(param_4,&local_4c);
    *param_1 = (uint)bVar2;
    uVar8 = (ulonglong)local_4c;
    if (local_4c != 0) goto LAB_140052b85;
    bVar2 = FUN_140021246(param_4,&local_4c);
    uVar8 = (ulonglong)local_4c;
    if (local_4c != 0) goto LAB_140052b85;
    uVar9 = (ulonglong)bVar2;
    local_58 = uVar9;
    if ((*param_1 & 0x7f) == 1) {
      param_1[2] = 0;
      if (bVar2 != 0) {
        uVar11 = 0;
        uVar15 = 1;
        do {
          local_5c = uVar11;
          bVar2 = FUN_140021246(param_4,&local_4c);
          uVar8 = (ulonglong)local_4c;
          if (local_4c != 0) goto LAB_140052b85;
          bVar3 = FUN_140021246(param_4,&local_4c);
          uVar8 = (ulonglong)local_4c;
          if (local_4c != 0) goto LAB_140052b85;
          uVar10 = bVar3 + 1;
          uVar7 = param_1[2];
          if (param_1[2] <= (uint)bVar3) {
            param_1[2] = uVar10;
            uVar7 = uVar10;
          }
          uVar10 = uVar10 + uVar15;
          if (uVar15 < uVar10) {
            uVar11 = (uint)bVar2;
            uVar8 = (ulonglong)uVar15;
            do {
              if (uVar11 < 0x100 && uVar8 < uVar1) {
                *(short *)((longlong)param_1 + (ulonglong)uVar11 * 2 + 0x20c) = (short)uVar8;
                *(undefined2 *)((longlong)param_1 + (ulonglong)uVar11 * 2 + 0xc) =
                     *(undefined2 *)(*(longlong *)(param_2 + 8) + uVar8 * 2);
              }
              uVar8 = uVar8 + 1;
              uVar11 = uVar11 + 1;
            } while (uVar10 != uVar8);
          }
          uVar11 = local_5c + 1;
          uVar15 = uVar10;
        } while (uVar11 != (uint)local_58);
        if (0x100 < uVar7) {
          param_1[2] = 0x100;
        }
      }
    }
    else {
      uVar8 = 3;
      if ((*param_1 & 0x7f) != 0) goto LAB_140052b85;
      uVar15 = (uint)bVar2;
      param_1[2] = uVar15 + 1;
      local_4c = FUN_140021063(param_4,uVar15);
      uVar8 = CONCAT44(extraout_var_00,local_4c);
      if (local_4c != 0) goto LAB_140052b85;
      if (uVar15 != 0) {
        lVar13 = param_4[7];
        uVar8 = 1;
        do {
          if (uVar8 < uVar1) {
            uVar14 = (ulonglong)*(byte *)(lVar13 + -1 + uVar8);
            *(short *)((longlong)param_1 + uVar14 * 2 + 0x20c) = (short)uVar8;
            *(undefined2 *)((longlong)param_1 + uVar14 * 2 + 0xc) =
                 *(undefined2 *)(*(longlong *)(param_2 + 8) + uVar8 * 2);
          }
          bVar16 = uVar8 != uVar9;
          uVar8 = uVar8 + 1;
        } while (bVar16);
      }
      FUN_140021187(param_4);
    }
    if ((*param_1 & 0x80) == 0) {
      uVar8 = (ulonglong)local_4c;
      goto LAB_140052b85;
    }
    bVar2 = FUN_140021246(param_4,&local_4c);
    uVar8 = (ulonglong)local_4c;
    if (bVar2 == 0 || local_4c != 0) goto LAB_140052b85;
    local_5c = (uint)bVar2;
    uVar15 = 0;
    do {
      bVar2 = FUN_140021246(param_4,&local_4c);
      uVar8 = (ulonglong)local_4c;
      if (local_4c != 0) goto LAB_140052b85;
      uVar5 = FUN_140020aa5(param_4,&local_4c);
      uVar8 = (ulonglong)local_4c;
      if (local_4c != 0) goto LAB_140052b85;
      *(ushort *)((longlong)param_1 + (ulonglong)bVar2 * 2 + 0xc) = uVar5;
      if (param_3 != 0) {
        uVar8 = 0;
        do {
          if (*(ushort *)(*(longlong *)(param_2 + 8) + uVar8 * 2) == uVar5) {
            *(short *)((longlong)param_1 + (ulonglong)bVar2 * 2 + 0x20c) = (short)uVar8;
            break;
          }
          uVar8 = uVar8 + 1;
        } while (uVar1 != uVar8);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != local_5c);
  }
  uVar8 = 0;
LAB_140052b85:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_88);
  }
  return uVar8;
}

