/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400442ff */

void FUN_1400442ff(undefined8 param_1,undefined8 param_2,int *param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  int local_a0;
  ulonglong local_98;
  int local_90;
  ulonglong local_88;
  int local_80;
  longlong local_78;
  int local_70;
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_e8;
  local_b8 = param_1;
  local_b0 = param_2;
  FUN_140044537(&local_a8,param_4);
  iVar2 = -0x3d - local_80;
  iVar5 = iVar2 * 0x13441;
  iVar6 = iVar5 + 0x3ffff;
  if (-1 < iVar5) {
    iVar6 = iVar5;
  }
  sVar4 = (short)(iVar6 >> 0x12);
  sVar1 = sVar4 + (ushort)(0 < iVar2) + 0x133;
  sVar4 = (ushort)(0 < iVar2) + sVar4 + 0x13a;
  if (-1 < sVar1) {
    sVar4 = sVar1;
  }
  lVar9 = (longlong)(short)((uint)(int)sVar4 >> 3) * 0x10;
  local_70 = *(int *)(&DAT_1401cdbd0 + lVar9) + 0x40;
  uVar7 = *(ulonglong *)(&DAT_1401cdbc8 + lVar9) & 0xffffffff;
  uVar8 = *(ulonglong *)(&DAT_1401cdbc8 + lVar9) >> 0x20;
  uVar11 = (local_a8 & 0xffffffff) * uVar8;
  uVar3 = uVar7 * (local_a8 >> 0x20);
  local_60 = local_a0 + local_70;
  local_70 = local_70 + local_90;
  local_68 = ((uVar3 & 0xffffffff) +
              (uVar11 & 0xffffffff) + (uVar7 * (local_a8 & 0xffffffff) >> 0x20) + 0x80000000 >> 0x20
             ) + (uVar3 >> 0x20) + (local_a8 >> 0x20) * uVar8 + (uVar11 >> 0x20);
  uVar12 = (local_98 & 0xffffffff) * uVar8;
  uVar11 = uVar7 * (local_98 >> 0x20);
  uVar10 = (local_88 & 0xffffffff) * uVar8;
  uVar3 = uVar7 * (local_88 >> 0x20);
  local_50 = *(int *)(&DAT_1401cdbd0 + lVar9) + local_80 + 0x40;
  local_78 = ((uVar11 & 0xffffffff) +
              (uVar12 & 0xffffffff) + (uVar7 * (local_98 & 0xffffffff) >> 0x20) + 0x80000000 >> 0x20
             ) + (uVar11 >> 0x20) + (local_98 >> 0x20) * uVar8 + (uVar12 >> 0x20) + 1;
  local_58 = (uVar3 >> 0x20) + (local_88 >> 0x20) * uVar8 + (uVar10 >> 0x20) +
             ((uVar3 & 0xffffffff) +
              (uVar10 & 0xffffffff) + (uVar7 * (local_88 & 0xffffffff) >> 0x20) + 0x80000000 >> 0x20
             ) + -1;
  *param_3 = -*(int *)(&DAT_1401cdbd4 + lVar9);
  local_c0 = &local_58;
  local_c8 = &local_68;
  FUN_1400445fa(local_b8,local_b0,param_3);
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_e8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_e8);
}

