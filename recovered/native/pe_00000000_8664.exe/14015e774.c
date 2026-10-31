/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015e774 */

int FUN_14015e774(longlong param_1,longlong param_2)

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
  
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  iVar6 = FUN_14012d612(param_1,0);
  iVar11 = 1;
  if (iVar6 != 0) goto LAB_14015e9ba;
  local_44 = FUN_14012e0a0(param_1,&DAT_140e9ff60,(int *)(param_2 + 0x138));
  if ((local_44 != 0) || (iVar11 = 3, *(int *)(param_2 + 0x138) != 0x70636601)) goto LAB_14015e9ba;
  uVar7 = *(uint *)(param_2 + 0x13c);
  if ((uVar7 == 0) || (uVar10 = *(uint *)(param_1 + 8), uVar10 < 0x10)) goto LAB_14015e9ba;
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
  lVar8 = FUN_14012b8aa(uVar1,0x10,0);
  *(longlong *)(param_2 + 0x140) = lVar8;
  iVar11 = local_44;
  if (local_44 != 0) goto LAB_14015e9ba;
  if (*(int *)(param_2 + 0x13c) == 0) {
LAB_14015e8d3:
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
          goto LAB_14015e99c;
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
         (uVar10 - *(uint *)(lVar8 + 8) < *(uint *)(lVar8 + 0xc))) goto LAB_14015e8c6;
      lVar8 = lVar8 + 0x10;
    }
  }
  else {
    uVar10 = 0;
    do {
      local_44 = iVar11;
      local_44 = FUN_14012e0a0(param_1,&DAT_140e9ff70,lVar8);
      if (local_44 != 0) goto LAB_14015e99c;
      lVar8 = lVar8 + 0x10;
      uVar10 = uVar10 + 1;
      uVar7 = *(uint *)(param_2 + 0x13c);
      iVar11 = 0;
    } while (uVar10 < uVar7);
    lVar8 = *(longlong *)(param_2 + 0x140);
    if (uVar7 != 1) goto LAB_14015e8d3;
    uVar10 = *(uint *)(param_1 + 8);
  }
  uVar7 = uVar10 - *(uint *)(lVar8 + 0xc);
  if (uVar10 < *(uint *)(lVar8 + 0xc)) {
LAB_14015e8c6:
    local_44 = 8;
LAB_14015e99c:
    FUN_140128b39(uVar1,*(undefined8 *)(param_2 + 0x140));
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
LAB_14015e9ba:
  if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_88)) {
    return iVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_40 ^ (ulonglong)auStack_88);
}

