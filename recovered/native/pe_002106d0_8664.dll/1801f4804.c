/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f4804 */

int FUN_1801f4804(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_1a8 [32];
  ushort *local_188;
  ushort local_17e;
  ushort local_17c;
  undefined1 local_17a [2];
  undefined1 local_178 [24];
  longlong local_160;
  short local_144;
  int local_140;
  int local_13c [3];
  int local_130 [2];
  int local_128;
  int local_120;
  longlong local_a0;
  int local_88;
  int local_84;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_1a8;
  lVar16 = *(longlong *)(param_2 + 8);
  if ((*(int *)(param_1 + 0x80) != -1) &&
     (((((param_4 & 8) == 0 || ((*(byte *)(lVar16 + 8) & 1) == 0)) &&
       ((*(ushort *)(lVar16 + 6) & 0x7fff) == 0)) && ((*(byte *)(lVar16 + 9) & 0x80) == 0)))) {
    iVar11 = FUN_1801f4c8d(param_1,param_2,param_3,param_4);
    uVar13 = *(uint *)(*(longlong *)(param_2 + 8) + 8);
    if (iVar11 == 0) {
      if ((uVar13 & 0x20001) == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = *(int *)(param_1 + 0x1c);
        iVar12 = *(int *)(param_1 + 0x20);
        local_188 = (ushort *)CONCAT71(local_188._1_7_,1);
        FUN_1801f4ef6(local_178,param_1,param_2,param_4);
        FUN_1801f50f8(local_178,param_3,0,1);
        FUN_1801f5c12(local_178);
        *(int *)(param_2 + 0x50) = local_128;
        *(int *)(param_2 + 0x54) = local_84;
        if ((*(int *)(lVar16 + 0x474) == 3) && (0 < local_144)) {
          bVar17 = (param_4 & 0x10) != 0;
          piVar15 = local_130;
          if (bVar17) {
            piVar15 = &local_140;
          }
          piVar14 = local_13c;
          if (bVar17) {
            piVar14 = &local_88;
          }
          lVar16 = (longlong)*piVar15 * (longlong)iVar11;
          iVar1 = *piVar14;
          *(int *)(param_2 + 0x90) =
               *(int *)(param_2 + 0x90) +
               ((int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10) >> 6);
          lVar16 = (longlong)iVar1 * (longlong)iVar12;
          *(int *)(param_2 + 0x94) =
               *(int *)(param_2 + 0x94) +
               ((int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10) >> 6);
        }
        if ((*(int *)(param_2 + 0x40) == 0) && (local_128 != 0)) {
          lVar16 = (longlong)local_128 * (longlong)iVar11;
          *(int *)(param_2 + 0x40) = (int)((ulonglong)(lVar16 + (lVar16 >> 0x3f) + 0x8000) >> 0x10);
        }
        iVar11 = 0;
        if ((*(int *)(param_2 + 0x4c) == 0) && (local_84 != 0)) {
          lVar16 = (longlong)local_84 * (longlong)iVar12;
          *(int *)(param_2 + 0x4c) = (int)((ulonglong)(lVar16 + (lVar16 >> 0x3f) + 0x8000) >> 0x10);
        }
      }
      goto LAB_1801f4c4f;
    }
    if ((uVar13 & 1) == 0) goto LAB_1801f4c4f;
  }
  iVar11 = 6;
  if ((param_4 >> 0xe & 1) != 0) goto LAB_1801f4c4f;
  if (((param_4 & 1) == 0) && (*(short *)(param_1 + 0x74) == 0)) {
    iVar11 = 0x24;
    goto LAB_1801f4c4f;
  }
  if (((param_4 & 0x1100000) == 0x100000) && (*(longlong *)(lVar16 + 0x4e8) != 0)) {
    lVar2 = *(longlong *)(lVar16 + 0x2d0);
    iVar12 = (**(code **)(lVar2 + 0x178))(param_2,param_3);
    if (iVar12 == 0) {
      iVar12 = *(int *)(param_1 + 0x1c);
      iVar1 = *(int *)(param_1 + 0x20);
      *(undefined4 *)(param_2 + 0x60) = 0x53564720;
      local_188 = &local_17c;
      iVar11 = 0;
      (**(code **)(lVar2 + 0x150))(lVar16,0,param_3,local_178);
      local_188 = &local_17e;
      (**(code **)(lVar2 + 0x150))(lVar16,1,param_3,local_17a);
      *(uint *)(param_2 + 0x50) = (uint)local_17c;
      *(uint *)(param_2 + 0x54) = (uint)local_17e;
      lVar16 = (longlong)iVar12 * (ulonglong)local_17c;
      *(int *)(param_2 + 0x40) = (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
      lVar16 = (longlong)iVar1 * (ulonglong)local_17e;
      *(int *)(param_2 + 0x4c) = (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
      goto LAB_1801f4c4f;
    }
  }
  if ((param_4 >> 0x17 & 1) != 0) goto LAB_1801f4c4f;
  local_188 = (ushort *)((ulonglong)local_188 & 0xffffffffffffff00);
  iVar11 = FUN_1801f4ef6(local_178,param_1,param_2,param_4);
  if (iVar11 != 0) goto LAB_1801f4c4f;
  if (((param_4 >> 8 & 1) == 0) || (local_50 == 0 || (param_4 & 0x10) != 0)) {
    iVar11 = FUN_1801f50f8(local_178,param_3,0,0);
    if (iVar11 == 0) {
      if (*(int *)(param_2 + 0x60) == 0x636f6d70) {
        *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(local_160 + 0x50);
        *(undefined8 *)(param_2 + 200) = *(undefined8 *)(local_160 + 0x58);
      }
      else {
        *(undefined4 *)(param_2 + 0x60) = 0x6f75746c;
        uVar3 = *(undefined8 *)(local_160 + 0x38);
        *(undefined8 *)(param_2 + 0xb8) = uVar3;
        uVar4 = *(undefined4 *)(local_160 + 0x18);
        uVar5 = *(undefined4 *)(local_160 + 0x1c);
        uVar6 = *(undefined4 *)(local_160 + 0x20);
        uVar7 = *(undefined4 *)(local_160 + 0x24);
        uVar8 = *(undefined4 *)(local_160 + 0x2c);
        uVar9 = *(undefined4 *)(local_160 + 0x30);
        uVar10 = *(undefined4 *)(local_160 + 0x34);
        *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(local_160 + 0x28);
        *(undefined4 *)(param_2 + 0xac) = uVar8;
        *(undefined4 *)(param_2 + 0xb0) = uVar9;
        *(undefined4 *)(param_2 + 0xb4) = uVar10;
        *(undefined4 *)(param_2 + 0x98) = uVar4;
        *(undefined4 *)(param_2 + 0x9c) = uVar5;
        *(undefined4 *)(param_2 + 0xa0) = uVar6;
        *(undefined4 *)(param_2 + 0xa4) = uVar7;
        uVar13 = (uint)uVar3 & 0xfffffdff;
        *(uint *)(param_2 + 0xb8) = uVar13;
        if (((param_4 & 1) == 0) && (*(ushort *)(*(longlong *)(param_1 + 0x40) + 2) < 0x18)) {
          *(uint *)(param_2 + 0xb8) = uVar13 | 0x100;
        }
        if (local_120 != 0) {
          FUN_1801cb5a0(param_2 + 0x98,-local_120,0);
        }
      }
      if ((param_4 & 2) == 0) {
        *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(local_a0 + 0x220);
        *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(local_a0 + 0x218);
        uVar13 = 8;
        if (*(char *)(local_a0 + 0x1d2) != '\0') {
          switch(*(undefined4 *)(local_a0 + 0x1d4)) {
          case 0:
            uVar13 = 0x20;
            break;
          case 1:
            goto switchD_1801f4c1c_caseD_1;
          case 4:
            uVar13 = 0x30;
            break;
          case 5:
            uVar13 = 0x10;
          }
        }
        *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | uVar13;
      }
switchD_1801f4c1c_caseD_1:
      iVar11 = FUN_1801f5c2d(local_178,param_3);
    }
  }
  else {
    *(uint *)(param_2 + 0x40) = (uint)*(byte *)(local_50 + (ulonglong)param_3) << 6;
    iVar11 = 0;
  }
  FUN_1801f5c12(local_178);
LAB_1801f4c4f:
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_1a8)) {
    return iVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_1a8);
}

