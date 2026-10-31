/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400eb630 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400eb630(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4,
                  undefined2 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 ****ppppuVar7;
  uint uVar8;
  int iVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined1 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  bool bVar17;
  uint uVar18;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  undefined8 local_b8;
  undefined8 ***local_b0;
  longlong local_a8;
  undefined1 local_a0;
  int local_98 [4];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 ***local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined2 local_56;
  undefined1 auStack_54 [4];
  ulonglong local_50;
  
  puVar13 = auStack_d8;
  local_50 = DAT_1401c9640 ^ (ulonglong)auStack_d8;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0xf;
  local_78 = (undefined8 ****)0x0;
  uVar8 = *(uint *)(param_4 + 0x18) & 0x3000;
  iVar6 = 0;
  if (uVar8 == 0x3000) {
    iVar6 = 0xd;
    uVar12 = 0xffffffffffffffff;
  }
  else {
    uVar12 = *(ulonglong *)(param_4 + 0x20);
    if ((longlong)uVar12 < 1) {
      if (uVar12 == 0) {
        if (uVar8 == 0) {
          iVar6 = 1;
        }
      }
      else {
        iVar6 = 6;
      }
    }
    else {
      iVar6 = (int)uVar12;
    }
  }
  uVar18 = (uint)((ulonglong)param_6 >> 0x20);
  bVar17 = (uVar18 >> 0x14 & 0x7ff) != 0x7ff;
  if (((uVar8 != 0x2000) || (!bVar17)) ||
     (uVar8 = (uint)param_6 & _DAT_1401390c0, uVar18 = uVar18 & _UNK_1401390c4,
     (double)CONCAT44(uVar18,uVar8) < DAT_1401390d0 ||
     (double)CONCAT44(uVar18,uVar8) == DAT_1401390d0)) {
    FUN_140024d7e(&local_78,(longlong)iVar6 + 0x32,0);
    if (bVar17) {
      uVar8 = *(uint *)(param_4 + 0x18);
    }
    else {
      uVar8 = *(uint *)(param_4 + 0x18) & 0xffffffef;
    }
  }
  else {
    local_98[0] = 0;
    FUN_140116b20((uint)param_6,local_98);
    iVar9 = -local_98[0];
    if (-local_98[0] < 0) {
      iVar9 = local_98[0];
    }
    FUN_140024d7e(&local_78,(longlong)((iVar9 * 0x7597) / 100000) + 0x32 + (longlong)iVar6,0);
    uVar8 = *(uint *)(param_4 + 0x18);
  }
  local_58 = 0x25;
  puVar10 = (undefined2 *)&local_57;
  if ((uVar8 & 0x20) != 0) {
    local_57 = 0x2b;
    puVar10 = &local_56;
  }
  if ((uVar8 & 0x10) != 0) {
    *(undefined1 *)puVar10 = 0x23;
    puVar10 = (undefined2 *)((longlong)puVar10 + 1);
  }
  *puVar10 = 0x2a2e;
  uVar18 = uVar8 & 0x3000;
  if ((uVar8 & 4) == 0) {
    if (uVar18 == 0x2000) {
      uVar5 = 0x66;
    }
    else {
      if (uVar18 != 0x3000) {
        uVar5 = 0x67;
        uVar14 = 0x65;
        goto LAB_1400eb7f3;
      }
      uVar5 = 0x61;
    }
  }
  else if (uVar18 == 0x2000) {
    uVar5 = 0x46;
  }
  else if (uVar18 == 0x3000) {
    uVar5 = 0x41;
  }
  else {
    uVar5 = 0x47;
    uVar14 = 0x45;
LAB_1400eb7f3:
    if (uVar18 == 0x1000) {
      uVar5 = uVar14;
    }
  }
  *(undefined1 *)(puVar10 + 1) = uVar5;
  *(undefined1 *)((longlong)puVar10 + 3) = 0;
  ppppuVar7 = &local_78;
  if (0xf < local_60) {
    ppppuVar7 = (undefined8 ****)local_78;
  }
  local_b8 = param_6;
  iVar6 = FUN_140023fef(ppppuVar7,local_68,&local_58,uVar12 & 0xffffffff);
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  if (iVar6 < 0) {
    *param_2 = *param_3;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    puVar13 = auStack_d8;
    if (local_60 < 0x10) goto LAB_1400eb945;
    if (DAT_140166098 != '\0') {
      uVar16 = local_60 + 1 + (longlong)local_78;
      uVar15 = local_68 + 1 + (longlong)local_78;
      uVar11 = uVar16 + 7 & 0xfffffffffffffff8;
      uVar12 = uVar11;
      if (uVar15 <= uVar11) {
        uVar12 = uVar15;
      }
      if (uVar11 < uVar16) {
        uVar16 = uVar11;
      }
LAB_1400eb906:
      _guard_check_icall(local_78,uVar11,uVar12,uVar16);
    }
  }
  else {
    local_b0 = &local_78;
    if (0xf < local_60) {
      local_b0 = local_78;
    }
    local_a8 = (longlong)iVar6;
    local_b8 = CONCAT62(local_b8._2_6_,param_5);
    local_a0 = bVar17;
    local_88 = *param_3;
    uStack_84 = uVar2;
    uStack_80 = uVar3;
    uStack_7c = uVar4;
    FUN_1400f42f0(param_1,param_2,&local_88,param_4);
    if (local_60 < 0x10) goto LAB_1400eb945;
    if (DAT_140166098 != '\0') {
      uVar16 = local_60 + 1 + (longlong)local_78;
      uVar15 = local_68 + 1 + (longlong)local_78;
      uVar11 = uVar16 + 7 & 0xfffffffffffffff8;
      uVar12 = uVar11;
      if (uVar15 <= uVar11) {
        uVar12 = uVar15;
      }
      if (uVar11 < uVar16) {
        uVar16 = uVar11;
      }
      goto LAB_1400eb906;
    }
  }
  ppppuVar7 = (undefined8 ****)local_78;
  puVar13 = auStack_d8;
  if ((0xfff < local_60 + 1) &&
     (ppppuVar7 = (undefined8 ****)local_78[-1], puVar13 = auStack_d8,
     0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)ppppuVar7)))) {
    pcVar1 = (code *)swi(0x29);
    ppppuVar7 = (undefined8 ****)(*pcVar1)(5);
    puVar13 = auStack_d0;
  }
  *(undefined8 *)(puVar13 + -8) = 0x1400eb945;
  thunk_FUN_1400ddcd0(ppppuVar7);
LAB_1400eb945:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar13 + -8) = &UNK_1400eb954;
  FUN_1400d3720(local_50 ^ (ulonglong)puVar13);
}

