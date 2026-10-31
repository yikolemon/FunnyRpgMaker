/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005c6c4 */

int FUN_14005c6c4(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auStackY_88 [32];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  lVar1 = *(longlong *)(param_2 + 0x98);
  uVar6 = FUN_140020a41((longlong)param_1,0);
  iVar10 = 1;
  if ((int)uVar6 != 0) goto LAB_14005c90a;
  local_44 = FUN_1400214cf(param_1,0x1400f8d20,param_2 + 0x138);
  if ((local_44 != 0) || (iVar10 = 3, *(int *)(param_2 + 0x138) != 0x70636601)) goto LAB_14005c90a;
  uVar9 = *(uint *)(param_2 + 0x13c);
  if ((uVar9 == 0) || (uVar5 = *(uint *)(param_1 + 1), uVar5 < 0x10)) goto LAB_14005c90a;
  if (9 < uVar9 || uVar5 >> 4 < uVar9) {
    uVar9 = 9;
    if (uVar5 < 0x90) {
      uVar9 = uVar5 >> 4;
    }
    *(uint *)(param_2 + 0x13c) = uVar9;
  }
  uVar5 = 0;
  lVar7 = FUN_14001f231(lVar1,0x10,0,uVar9,0,&local_44);
  *(longlong *)(param_2 + 0x140) = lVar7;
  iVar10 = local_44;
  if (local_44 != 0) goto LAB_14005c90a;
  if (*(int *)(param_2 + 0x13c) == 0) {
LAB_14005c823:
    uVar9 = 0;
    while (uVar8 = uVar9 + 1, uVar5 != uVar8) {
      uVar13 = *(uint *)(lVar7 + 0xc);
      bVar4 = false;
      uVar12 = 0;
      puVar11 = (uint *)(lVar7 + 0x1c);
      do {
        bVar2 = *puVar11 < uVar13;
        uVar13 = *puVar11;
        if (bVar2) {
          uVar6 = *(undefined8 *)(puVar11 + -7);
          uVar3 = *(undefined8 *)(puVar11 + -5);
          *(undefined8 *)(puVar11 + -7) = *(undefined8 *)(puVar11 + -3);
          *(undefined8 *)(puVar11 + -5) = *(undefined8 *)(puVar11 + -1);
          *(undefined8 *)(puVar11 + -3) = uVar6;
          *(undefined8 *)(puVar11 + -1) = uVar3;
          uVar13 = *puVar11;
          bVar4 = true;
        }
        if ((uVar13 < puVar11[-5]) || (uVar13 - puVar11[-5] < puVar11[-4])) {
          local_44 = 9;
          goto LAB_14005c8ec;
        }
        uVar12 = uVar12 + 1;
        uVar5 = *(uint *)(param_2 + 0x13c);
        puVar11 = puVar11 + 4;
      } while (uVar12 < uVar5 + ~uVar9);
      if ((!bVar4) || (uVar9 = uVar8, uVar5 - 1 <= uVar8)) break;
    }
    lVar7 = *(longlong *)(param_2 + 0x140);
    uVar9 = *(uint *)(param_1 + 1);
    while (uVar5 = uVar5 - 1, uVar5 != 0) {
      if ((uVar9 < *(uint *)(lVar7 + 8)) || (uVar9 - *(uint *)(lVar7 + 8) < *(uint *)(lVar7 + 0xc)))
      goto LAB_14005c816;
      lVar7 = lVar7 + 0x10;
    }
  }
  else {
    uVar9 = 0;
    do {
      local_44 = iVar10;
      local_44 = FUN_1400214cf(param_1,0x1400f8d30,lVar7);
      if (local_44 != 0) goto LAB_14005c8ec;
      lVar7 = lVar7 + 0x10;
      uVar9 = uVar9 + 1;
      uVar5 = *(uint *)(param_2 + 0x13c);
      iVar10 = 0;
    } while (uVar9 < uVar5);
    lVar7 = *(longlong *)(param_2 + 0x140);
    if (uVar5 != 1) goto LAB_14005c823;
    uVar9 = *(uint *)(param_1 + 1);
  }
  uVar5 = uVar9 - *(uint *)(lVar7 + 0xc);
  if (uVar9 < *(uint *)(lVar7 + 0xc)) {
LAB_14005c816:
    local_44 = 8;
LAB_14005c8ec:
    FUN_14001c53d(lVar1,*(longlong *)(param_2 + 0x140));
    *(undefined8 *)(param_2 + 0x140) = 0;
    iVar10 = local_44;
  }
  else {
    iVar10 = 0;
    if (uVar5 < *(uint *)(lVar7 + 8)) {
      *(uint *)(lVar7 + 8) = uVar5;
      iVar10 = 0;
    }
  }
LAB_14005c90a:
  if (DAT_14012ea80 == (local_40 ^ (ulonglong)auStackY_88)) {
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_40 ^ (ulonglong)auStackY_88);
}

