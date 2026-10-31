/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020f088 */

int FUN_18020f088(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_88;
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  iVar6 = FUN_1801ce63e(param_1,0);
  iVar11 = 1;
  if (iVar6 != 0) goto LAB_18020f2ce;
  local_44 = FUN_1801cf0cc(param_1,&DAT_18033bbf0,(int *)(param_2 + 0x138));
  if ((local_44 != 0) || (iVar11 = 3, *(int *)(param_2 + 0x138) != 0x70636601)) goto LAB_18020f2ce;
  uVar7 = *(uint *)(param_2 + 0x13c);
  if ((uVar7 == 0) || (uVar10 = *(uint *)(param_1 + 8), uVar10 < 0x10)) goto LAB_18020f2ce;
  if (9 < uVar7 || uVar10 >> 4 < uVar7) {
    uVar7 = 9;
    if (uVar10 < 0x90) {
      uVar7 = uVar10 >> 4;
    }
    *(uint *)(param_2 + 0x13c) = uVar7;
  }
  local_60 = &local_44;
  local_68 = 0;
  uVar7 = 0;
  lVar8 = FUN_1801cc8d6(uVar1,0x10,0);
  *(longlong *)(param_2 + 0x140) = lVar8;
  iVar11 = local_44;
  if (local_44 != 0) goto LAB_18020f2ce;
  if (*(int *)(param_2 + 0x13c) == 0) {
LAB_18020f1e7:
    uVar10 = 0;
    while (uVar9 = uVar10 + 1, uVar7 != uVar9) {
      uVar14 = *(uint *)(lVar8 + 0xc);
      bVar5 = false;
      uVar13 = 0;
      puVar12 = (uint *)(lVar8 + 0x1c);
      do {
        bVar2 = *puVar12 < uVar14;
        uVar14 = *puVar12;
        if (bVar2) {
          uVar3 = *(undefined8 *)(puVar12 + -7);
          uVar4 = *(undefined8 *)(puVar12 + -5);
          *(undefined8 *)(puVar12 + -7) = *(undefined8 *)(puVar12 + -3);
          *(undefined8 *)(puVar12 + -5) = *(undefined8 *)(puVar12 + -1);
          local_58._0_4_ = (uint)uVar3;
          local_58._4_4_ = (uint)((ulonglong)uVar3 >> 0x20);
          uStack_50._0_4_ = (uint)uVar4;
          uStack_50._4_4_ = (uint)((ulonglong)uVar4 >> 0x20);
          puVar12[-3] = (uint)local_58;
          puVar12[-2] = local_58._4_4_;
          puVar12[-1] = (uint)uStack_50;
          *puVar12 = uStack_50._4_4_;
          uVar14 = *puVar12;
          bVar5 = true;
          local_58 = uVar3;
          uStack_50 = uVar4;
        }
        if ((uVar14 < puVar12[-5]) || (uVar14 - puVar12[-5] < puVar12[-4])) {
          local_44 = 9;
          goto LAB_18020f2b0;
        }
        uVar13 = uVar13 + 1;
        uVar7 = *(uint *)(param_2 + 0x13c);
        puVar12 = puVar12 + 4;
      } while (uVar13 < uVar7 + ~uVar10);
      if ((!bVar5) || (uVar10 = uVar9, uVar7 - 1 <= uVar9)) break;
    }
    lVar8 = *(longlong *)(param_2 + 0x140);
    uVar10 = *(uint *)(param_1 + 8);
    while (uVar7 = uVar7 - 1, uVar7 != 0) {
      if ((uVar10 < *(uint *)(lVar8 + 8)) ||
         (uVar10 - *(uint *)(lVar8 + 8) < *(uint *)(lVar8 + 0xc))) goto LAB_18020f1da;
      lVar8 = lVar8 + 0x10;
    }
  }
  else {
    uVar10 = 0;
    do {
      local_44 = iVar11;
      local_44 = FUN_1801cf0cc(param_1,&DAT_18033bc00,lVar8);
      if (local_44 != 0) goto LAB_18020f2b0;
      lVar8 = lVar8 + 0x10;
      uVar10 = uVar10 + 1;
      uVar7 = *(uint *)(param_2 + 0x13c);
      iVar11 = 0;
    } while (uVar10 < uVar7);
    lVar8 = *(longlong *)(param_2 + 0x140);
    if (uVar7 != 1) goto LAB_18020f1e7;
    uVar10 = *(uint *)(param_1 + 8);
  }
  uVar7 = uVar10 - *(uint *)(lVar8 + 0xc);
  if (uVar10 < *(uint *)(lVar8 + 0xc)) {
LAB_18020f1da:
    local_44 = 8;
LAB_18020f2b0:
    FUN_1801c9b65(uVar1,*(undefined8 *)(param_2 + 0x140));
    *(undefined8 *)(param_2 + 0x140) = 0;
    iVar11 = local_44;
  }
  else {
    iVar11 = 0;
    if (uVar7 < *(uint *)(lVar8 + 8)) {
      *(uint *)(lVar8 + 8) = uVar7;
      iVar11 = 0;
    }
  }
LAB_18020f2ce:
  if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_88)) {
    return iVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_88);
}

