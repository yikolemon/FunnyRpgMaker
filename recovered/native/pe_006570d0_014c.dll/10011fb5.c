/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10011fb5 */

undefined8 FUN_10011fb5(undefined1 *param_1,undefined1 *param_2,undefined8 param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  uint uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  uint uVar13;
  int iVar14;
  uint local_330;
  undefined *local_328;
  undefined *puStack_324;
  undefined1 local_31d [773];
  uint local_18 [2];
  
  local_18[0] = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_328 = (undefined *)param_3;
  puStack_324 = (undefined *)((ulonglong)param_3 >> 0x20);
  if (local_328 == (undefined *)0x0 && puStack_324 == (undefined *)0x0) {
    if (param_1 == param_2) {
      uVar10 = 0x84;
    }
    else {
      *param_1 = 0x30;
      param_2 = param_1 + 1;
      uVar10 = 0;
    }
    goto LAB_100121fc;
  }
  if ((int)param_4 < 0) {
    param_4 = 6;
LAB_10012051:
    uVar5 = (param_4 - 1) * (param_4 + 10) & 0xfffe;
    ppuVar11 = (undefined **)(&DAT_102b5b18 + uVar5);
    ppuVar4 = (undefined **)(&DAT_102b5b40 + param_4 * 8 + uVar5 * 4);
    local_330 = param_4;
    ppuVar12 = ppuVar11;
    ppuVar6 = ppuVar4;
joined_r0x1001207d:
    for (; (ppuVar7 = ppuVar6, ppuVar11 != ppuVar6 &&
           (ppuVar7 = ppuVar11, ppuVar4 = ppuVar12,
           ppuVar11[1] < puStack_324 ||
           (uint)((int)ppuVar11[1] - (int)puStack_324) < (uint)(*ppuVar11 < local_328)));
        ppuVar11 = ppuVar11 + 2) {
    }
  }
  else {
    if (param_4 == 0) {
      param_4 = 1;
      goto LAB_10012051;
    }
    ppuVar4 = &PTR_s_device_or_resource_busy_102b6b00;
    if (999999 < param_4) {
      local_330 = 1000000;
      goto LAB_100120ad;
    }
    if (param_4 < 0x10) goto LAB_10012051;
    local_330 = param_4;
    if (param_4 < 0x136) {
      ppuVar11 = (undefined **)&DAT_102b6130;
      ppuVar4 = (undefined **)(&DAT_102b6158 + param_4 * 8);
      ppuVar12 = ppuVar11;
      ppuVar6 = ppuVar4;
      if (0x9b < param_4) goto LAB_100120ad;
      goto joined_r0x1001207d;
    }
LAB_100120ad:
    uVar5 = (int)(ppuVar4 + -0x40ad84c) >> 3;
    ppuVar7 = (undefined **)&DAT_102b6130;
    ppuVar4 = (undefined **)&DAT_102b6130;
    if (0 < (int)uVar5) {
      do {
        uVar13 = uVar5 >> 1;
        if (ppuVar7[uVar13 * 2 + 1] < puStack_324 ||
            (uint)((int)ppuVar7[uVar13 * 2 + 1] - (int)puStack_324) <
            (uint)(ppuVar7[uVar13 * 2] < local_328)) {
          ppuVar7 = ppuVar7 + uVar13 * 2 + 2;
          uVar13 = ~uVar13 + uVar5;
        }
        uVar5 = uVar13;
      } while (0 < (int)uVar13);
      ppuVar4 = (undefined **)&DAT_102b6130;
    }
  }
  iVar8 = (int)ppuVar7 - (int)ppuVar4 >> 3;
  bVar1 = (int)local_330 <= iVar8 + -5;
  if (iVar8 < 1 || bVar1) {
    uVar5 = 0x2ff;
    if ((int)local_330 < 0x2ff) {
      uVar5 = local_330;
    }
    iVar9 = uVar5 - 1;
    iVar14 = FUN_10011ef1(local_31d,local_18,param_3,iVar9);
    iVar3 = FUN_100062be(local_31d,iVar14,0x65);
    iVar2 = iVar3;
  }
  else {
    iVar2 = (local_330 - iVar8) + 4;
    iVar9 = 0x42;
    if (iVar2 < 0x42) {
      iVar9 = iVar2;
    }
    iVar2 = FUN_10011f38(local_31d,local_18,param_3,iVar9);
    iVar3 = 0;
    iVar14 = 0;
  }
  if (0 < iVar9) {
    do {
      iVar9 = iVar2;
      iVar2 = iVar9 + -1;
    } while (*(char *)(iVar9 + -1) == '0');
    if (*(char *)(iVar9 + -1) != '.') {
      iVar2 = iVar9;
    }
  }
  iVar2 = iVar2 - (int)local_31d;
  uVar10 = 0x84;
  if (iVar2 <= (int)param_2 - (int)param_1) {
    FUN_1025b2d0(param_1,local_31d,iVar2);
    param_1 = param_1 + iVar2;
    if (iVar8 < 1 || bVar1) {
      iVar14 = iVar14 - iVar3;
      if ((int)param_2 - (int)param_1 < iVar14) goto LAB_100121fc;
      FUN_1025b2d0(param_1,iVar3,iVar14);
      param_1 = param_1 + iVar14;
    }
    param_2 = param_1;
    uVar10 = 0;
  }
LAB_100121fc:
  if (DAT_10388d00 != (local_18[0] ^ (uint)&stack0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return CONCAT44(uVar10,param_2);
}

