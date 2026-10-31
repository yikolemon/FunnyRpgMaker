/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140041e38 */

int FUN_140041e38(longlong *param_1,longlong param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  int *piVar11;
  int *piVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_1a8 [32];
  ushort local_17e;
  ushort local_17c;
  undefined1 local_17a [2];
  longlong local_178 [3];
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
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_1a8;
  lVar13 = *(longlong *)(param_2 + 8);
  if (((int)param_1[0x10] != -1) &&
     (((((param_4 & 8) == 0 || ((*(byte *)(lVar13 + 8) & 1) == 0)) &&
       ((*(ushort *)(lVar13 + 6) & 0x7fff) == 0)) && ((*(byte *)(lVar13 + 9) & 0x80) == 0)))) {
    iVar6 = FUN_1400422c1((longlong)param_1,param_2,param_3,param_4);
    uVar8 = *(uint *)(*(longlong *)(param_2 + 8) + 8);
    if (iVar6 == 0) {
      if ((uVar8 & 0x20001) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)((longlong)param_1 + 0x1c);
        lVar1 = param_1[4];
        FUN_14004252a((undefined1 (*) [32])local_178,param_1,param_2,param_4,'\x01');
        FUN_14004272c(local_178,param_3,0,'\x01');
        FUN_140043246(local_178);
        *(int *)(param_2 + 0x50) = local_128;
        *(int *)(param_2 + 0x54) = local_84;
        if ((*(int *)(lVar13 + 0x474) == 3) && (0 < local_144)) {
          bVar14 = (param_4 & 0x10) != 0;
          piVar12 = local_130;
          if (bVar14) {
            piVar12 = &local_140;
          }
          piVar11 = local_13c;
          if (bVar14) {
            piVar11 = &local_88;
          }
          lVar13 = (longlong)*piVar12 * (longlong)iVar6;
          iVar7 = *piVar11;
          *(int *)(param_2 + 0x90) =
               *(int *)(param_2 + 0x90) +
               ((int)((ulonglong)(lVar13 + 0x8000 + (lVar13 >> 0x3f)) >> 0x10) >> 6);
          lVar13 = (longlong)iVar7 * (longlong)(int)lVar1;
          *(int *)(param_2 + 0x94) =
               *(int *)(param_2 + 0x94) +
               ((int)((ulonglong)(lVar13 + 0x8000 + (lVar13 >> 0x3f)) >> 0x10) >> 6);
        }
        if ((*(int *)(param_2 + 0x40) == 0) && (local_128 != 0)) {
          lVar13 = (longlong)local_128 * (longlong)iVar6;
          *(int *)(param_2 + 0x40) = (int)((ulonglong)(lVar13 + (lVar13 >> 0x3f) + 0x8000) >> 0x10);
        }
        iVar6 = 0;
        if ((*(int *)(param_2 + 0x4c) == 0) && (local_84 != 0)) {
          lVar13 = (longlong)local_84 * (longlong)(int)lVar1;
          *(int *)(param_2 + 0x4c) = (int)((ulonglong)(lVar13 + (lVar13 >> 0x3f) + 0x8000) >> 0x10);
        }
      }
      goto LAB_140042283;
    }
    if ((uVar8 & 1) == 0) goto LAB_140042283;
  }
  iVar6 = 6;
  if ((param_4 >> 0xe & 1) != 0) goto LAB_140042283;
  if (((param_4 & 1) == 0) && (*(short *)((longlong)param_1 + 0x74) == 0)) {
    iVar6 = 0x24;
    goto LAB_140042283;
  }
  if (((param_4 & 0x1100000) == 0x100000) && (*(longlong *)(lVar13 + 0x4e8) != 0)) {
    lVar1 = *(longlong *)(lVar13 + 0x2d0);
    iVar7 = (**(code **)(lVar1 + 0x178))(param_2,param_3);
    if (iVar7 == 0) {
      iVar7 = *(int *)((longlong)param_1 + 0x1c);
      lVar5 = param_1[4];
      *(undefined4 *)(param_2 + 0x60) = 0x53564720;
      iVar6 = 0;
      (**(code **)(lVar1 + 0x150))(lVar13,0,param_3,local_178);
      (**(code **)(lVar1 + 0x150))(lVar13,1,param_3,local_17a);
      *(uint *)(param_2 + 0x50) = (uint)local_17c;
      *(uint *)(param_2 + 0x54) = (uint)local_17e;
      lVar13 = (longlong)iVar7 * (ulonglong)local_17c;
      *(int *)(param_2 + 0x40) = (int)((ulonglong)(lVar13 + 0x8000 + (lVar13 >> 0x3f)) >> 0x10);
      lVar13 = (longlong)(int)lVar5 * (ulonglong)local_17e;
      *(int *)(param_2 + 0x4c) = (int)((ulonglong)(lVar13 + 0x8000 + (lVar13 >> 0x3f)) >> 0x10);
      goto LAB_140042283;
    }
  }
  if ((param_4 >> 0x17 & 1) != 0) goto LAB_140042283;
  uVar9 = FUN_14004252a((undefined1 (*) [32])local_178,param_1,param_2,param_4,'\0');
  iVar6 = (int)uVar9;
  if (iVar6 != 0) goto LAB_140042283;
  if (((param_4 >> 8 & 1) == 0) || (local_50 == 0 || (param_4 & 0x10) != 0)) {
    iVar6 = FUN_14004272c(local_178,param_3,0,'\0');
    if (iVar6 == 0) {
      if (*(int *)(param_2 + 0x60) == 0x636f6d70) {
        *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(local_160 + 0x50);
        *(undefined8 *)(param_2 + 200) = *(undefined8 *)(local_160 + 0x58);
      }
      else {
        *(undefined4 *)(param_2 + 0x60) = 0x6f75746c;
        uVar10 = *(undefined8 *)(local_160 + 0x38);
        *(undefined8 *)(param_2 + 0xb8) = uVar10;
        uVar2 = *(undefined8 *)(local_160 + 0x18);
        uVar3 = *(undefined8 *)(local_160 + 0x20);
        uVar4 = *(undefined8 *)(local_160 + 0x30);
        *(undefined8 *)(param_2 + 0xa8) = *(undefined8 *)(local_160 + 0x28);
        *(undefined8 *)(param_2 + 0xb0) = uVar4;
        *(undefined8 *)(param_2 + 0x98) = uVar2;
        *(undefined8 *)(param_2 + 0xa0) = uVar3;
        uVar8 = (uint)uVar10 & 0xfffffdff;
        *(uint *)(param_2 + 0xb8) = uVar8;
        if (((param_4 & 1) == 0) && (*(ushort *)(param_1[8] + 2) < 0x18)) {
          *(uint *)(param_2 + 0xb8) = uVar8 | 0x100;
        }
        if (local_120 != 0) {
          FUN_14001df78(param_2 + 0x98,-local_120,0);
        }
      }
      if ((param_4 & 2) == 0) {
        *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(local_a0 + 0x220);
        *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(local_a0 + 0x218);
        uVar8 = 8;
        if (*(char *)(local_a0 + 0x1d2) != '\0') {
          switch(*(undefined4 *)(local_a0 + 0x1d4)) {
          case 0:
            uVar8 = 0x20;
            break;
          case 1:
            goto switchD_140042250_caseD_1;
          case 4:
            uVar8 = 0x30;
            break;
          case 5:
            uVar8 = 0x10;
          }
        }
        *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | uVar8;
      }
switchD_140042250_caseD_1:
      uVar10 = FUN_140043261(local_178,param_3);
      iVar6 = (int)uVar10;
    }
  }
  else {
    *(uint *)(param_2 + 0x40) = (uint)*(byte *)(local_50 + (ulonglong)param_3) << 6;
    iVar6 = 0;
  }
  FUN_140043246(local_178);
LAB_140042283:
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStack_1a8)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStack_1a8);
}

