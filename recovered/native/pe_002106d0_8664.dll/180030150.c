/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180030150 */

void FUN_180030150(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  bool bVar15;
  uint *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  code *local_e0;
  uint local_d8 [36];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar5 = param_1[1];
  local_f8 = (uint *)0x0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_e0 = FUN_18003005e;
  FUN_1800303a0(&local_f8,param_1);
  uVar1 = (uint)lVar5;
  uVar2 = uVar1 * 2;
  uVar3 = (ulonglong)uVar2;
  uVar4 = param_1[2];
  if (uVar4 < uVar3) {
    (*(code *)param_1[3])(param_1,uVar3);
    uVar4 = param_1[2];
  }
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  param_1[1] = uVar4;
  if ((int)uVar1 < 1) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar12 = 0;
    uVar3 = 0;
    uVar4 = 0;
    puVar7 = local_f8;
    uVar13 = uVar12;
    do {
      do {
        bVar15 = CARRY8(uVar3,(ulonglong)local_f8[uVar12] * (ulonglong)*puVar7);
        uVar3 = uVar3 + (ulonglong)local_f8[uVar12] * (ulonglong)*puVar7;
        uVar9 = uVar4 + bVar15;
        bVar15 = uVar12 != 0;
        uVar12 = uVar12 - 1;
        uVar4 = uVar9;
        puVar7 = puVar7 + 1;
      } while (bVar15);
      *(int *)(*param_1 + uVar13 * 4) = (int)uVar3;
      uVar4 = uVar9 >> 0x20;
      uVar3 = uVar3 >> 0x20 | uVar9 << 0x20;
      uVar12 = uVar13 + 1;
      puVar7 = local_f8;
      uVar13 = uVar12;
    } while (uVar12 != (uVar1 & 0x7fffffff));
  }
  if ((int)uVar1 < (int)uVar2) {
    lVar5 = lVar5 << 0x20;
    lVar8 = (longlong)(int)uVar1;
    lVar10 = (lVar5 + -0x100000000 >> 0x20) + lVar8;
    iVar6 = -uVar1;
    iVar11 = 1;
    do {
      if (lVar8 < lVar10) {
        puVar7 = local_f8 + iVar11;
        lVar14 = -1;
        do {
          uVar13 = (ulonglong)*(uint *)((longlong)local_f8 + lVar14 * 4 + (lVar5 >> 0x1e)) *
                   (ulonglong)*puVar7;
          bVar15 = CARRY8(uVar3,uVar13);
          uVar3 = uVar3 + uVar13;
          uVar4 = uVar4 + bVar15;
          lVar14 = lVar14 + -1;
          puVar7 = puVar7 + 1;
        } while (iVar6 != (int)lVar14);
      }
      *(int *)(*param_1 + lVar8 * 4) = (int)uVar3;
      uVar3 = uVar3 >> 0x20 | uVar4 << 0x20;
      lVar8 = lVar8 + 1;
      iVar11 = iVar11 + 1;
      iVar6 = iVar6 + 1;
      uVar4 = uVar4 >> 0x20;
    } while (lVar8 != (int)uVar2);
  }
  FUN_18003033c(param_1);
  *(int *)(param_1 + 0x15) = (int)param_1[0x15] << 1;
  if (local_f8 != local_d8) {
    thunk_FUN_180290e40();
  }
  return;
}

