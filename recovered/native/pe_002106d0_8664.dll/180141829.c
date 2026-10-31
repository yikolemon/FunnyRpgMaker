/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180141829 */

undefined4
FUN_180141829(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,ulonglong param_6,longlong param_7,uint param_8)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_148 [32];
  longlong local_128;
  ulonglong *local_120;
  longlong local_118;
  uint local_110;
  undefined8 *local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  float local_e4;
  ulonglong local_e0;
  undefined8 local_d8;
  float fStack_d4;
  undefined8 uStack_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  float local_b0 [2];
  undefined8 local_a8 [9];
  ulonglong local_60;
  
  lVar4 = DAT_180419160;
  local_60 = DAT_180402640 ^ (ulonglong)auStack_148;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  lVar2 = *(longlong *)(lVar4 + 0x1608);
  if (*(char *)(lVar2 + 0x10e) != '\0') {
    uVar8 = 0;
    goto LAB_180141be5;
  }
  local_fc = param_3;
  iVar7 = FUN_180106d4e(lVar2,param_1,0);
  uVar10 = FUN_180101d94(param_1,0);
  local_128 = CONCAT44(local_128._4_4_,0xbf800000);
  FUN_1801023ca(local_b0,param_1,uVar10,0);
  local_c0 = *(undefined8 *)(lVar2 + 0x158);
  fVar16 = 0.0;
  fVar14 = (float)*param_2 + (float)local_c0;
  fVar13 = (float)((ulonglong)local_c0 >> 0x20);
  fVar15 = (float)((ulonglong)*param_2 >> 0x20) + fVar13;
  local_b8 = CONCAT44(fVar15,fVar14);
  if (0.0 < local_b0[0]) {
    fVar16 = local_b0[0] + *(float *)(lVar4 + 0xe0c);
  }
  local_a8[0] = CONCAT44((fVar15 + 0.0) - fVar13,(fVar16 + fVar14) - (float)local_c0);
  FUN_180111514(local_a8,*(undefined4 *)(lVar4 + 0xdf8));
  uVar8 = 0;
  cVar5 = FUN_1801116b6(&local_c0,iVar7,0,0);
  if (cVar5 == '\0') goto LAB_180141be5;
  local_f8 = uVar10;
  local_f0 = param_4;
  if (param_7 == 0) {
    lVar11 = FUN_180139a46(local_fc);
    param_7 = *(longlong *)(lVar11 + 0x10);
  }
  bVar6 = FUN_180107870(&local_c0,iVar7,*(undefined4 *)(lVar4 + 0x1fe4));
  if (bVar6 == 0) {
LAB_1801419c0:
    if (*(int *)(lVar4 + 0x2214) == iVar7) goto LAB_1801419c9;
  }
  else {
    cVar5 = FUN_180108ba4(0,0,iVar7);
    if (cVar5 == '\0') goto LAB_1801419c0;
    FUN_1801191ef(0x290,iVar7,0);
LAB_1801419c9:
    FUN_1801071f0(iVar7,lVar2);
    FUN_18011c05d(iVar7,lVar2);
    FUN_1801080ec(lVar2,0);
    *(byte *)(lVar4 + 0x1f90) = *(byte *)(lVar4 + 0x1f90) | 0xc;
  }
  iVar12 = 9;
  if (*(int *)(lVar4 + 0x167c) != iVar7) {
    iVar12 = bVar6 + 7;
  }
  uVar8 = FUN_18010129b(iVar12,DAT_1802ac570);
  FUN_180102b0e(&local_c0,iVar7,0);
  local_128 = CONCAT44(local_128._4_4_,*(undefined4 *)(lVar4 + 0xdfc));
  FUN_1801027d9(local_c0,local_b8,uVar8,1);
  uVar10 = local_f0;
  local_108 = &stack0xffffffffffffff28;
  local_d8 = 0;
  uStack_d0 = 0;
  local_110 = param_8 | 0x100000;
  local_120 = (ulonglong *)param_6;
  local_128 = param_5;
  local_118 = param_7;
  uVar8 = FUN_18013dad4(&local_c0,iVar7,local_fc,local_f0);
  if ((char)uVar8 != '\0') {
    FUN_18010748b(iVar7);
  }
  if (fStack_d4 < uStack_d0._4_4_) {
    uVar3 = *(undefined8 *)(lVar2 + 800);
    uVar1 = *(undefined4 *)(lVar4 + 0xe3c);
    uVar9 = FUN_18010129b(*(int *)(lVar4 + 0x167c) == iVar7 | 0x14,DAT_1802ac570);
    local_128 = CONCAT44(local_128._4_4_,uVar1);
    local_120 = (ulonglong *)((ulonglong)local_120 & 0xffffffff00000000);
    FUN_180192d20(uVar3,&stack0xffffffffffffff28,&uStack_d0,uVar9);
  }
  local_128 = param_7;
  iVar7 = FUN_180139a58(local_a8,0x40,local_fc,uVar10);
  local_e0 = (ulonglong)DAT_1802dbb2c;
  local_120 = &local_e0;
  local_e4 = local_c0._4_4_ + *(float *)(lVar4 + 0xdf8);
  local_e8 = (undefined4)local_c0;
  local_118 = 0;
  local_128 = 0;
  FUN_180102475(&local_e8,&local_b8,local_a8,(longlong)local_a8 + (longlong)iVar7);
  if (0.0 < local_b0[0]) {
    FUN_180101dc8(CONCAT44(local_c0._4_4_ + *(float *)(lVar4 + 0xdf8),
                           (float)local_b8 + *(float *)(lVar4 + 0xe0c)),param_1,local_f8,0);
  }
LAB_180141be5:
  if (DAT_180402640 == (local_60 ^ (ulonglong)auStack_148)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_60 ^ (ulonglong)auStack_148);
}

