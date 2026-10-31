/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00417309 */

undefined8 __cdecl FUN_00417309(uint *param_1,uint *param_2,longlong param_3,uint param_4)

{
  bool bVar1;
  size_t sVar2;
  uint *puVar3;
  undefined **ppuVar4;
  uint uVar5;
  uint *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  int iVar9;
  size_t sVar10;
  undefined4 uVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  undefined8 uVar17;
  uint local_330;
  undefined *local_328;
  undefined *puStack_324;
  uint local_31d [193];
  uint local_18 [2];
  
  local_18[0] = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  local_328 = (undefined *)param_3;
  puStack_324 = (undefined *)((ulonglong)param_3 >> 0x20);
  if (param_3 == 0) {
    if (param_1 == param_2) {
      uVar11 = 0x84;
    }
    else {
      *(undefined1 *)param_1 = 0x30;
      param_2 = (uint *)((int)param_1 + 1);
      uVar11 = 0;
    }
    goto LAB_00417550;
  }
  if ((int)param_4 < 0) {
    param_4 = 6;
LAB_004173a5:
    uVar5 = (param_4 - 1) * (param_4 + 10) & 0xfffe;
    ppuVar12 = (undefined **)(&DAT_004cbc78 + uVar5);
    ppuVar4 = (undefined **)(&DAT_004cbca0 + param_4 * 8 + uVar5 * 4);
    local_330 = param_4;
    ppuVar13 = ppuVar12;
    ppuVar7 = ppuVar4;
joined_r0x004173d1:
    for (; (ppuVar8 = ppuVar7, ppuVar12 != ppuVar7 &&
           (ppuVar8 = ppuVar12, ppuVar4 = ppuVar13,
           ppuVar12[1] < puStack_324 ||
           (uint)((int)ppuVar12[1] - (int)puStack_324) < (uint)(*ppuVar12 < local_328)));
        ppuVar12 = ppuVar12 + 2) {
    }
  }
  else {
    if (param_4 == 0) {
      param_4 = 1;
      goto LAB_004173a5;
    }
    ppuVar4 = &PTR_s_device_or_resource_busy_004ccc60;
    if (999999 < param_4) {
      local_330 = 1000000;
      goto LAB_00417401;
    }
    if (param_4 < 0x10) goto LAB_004173a5;
    local_330 = param_4;
    if (param_4 < 0x136) {
      ppuVar12 = (undefined **)&DAT_004cc290;
      ppuVar4 = (undefined **)(&DAT_004cc2b8 + param_4 * 8);
      ppuVar13 = ppuVar12;
      ppuVar7 = ppuVar4;
      if (0x9b < param_4) goto LAB_00417401;
      goto joined_r0x004173d1;
    }
LAB_00417401:
    uVar5 = (int)(ppuVar4 + -0x1330a4) >> 3;
    ppuVar8 = (undefined **)&DAT_004cc290;
    ppuVar4 = (undefined **)&DAT_004cc290;
    if (0 < (int)uVar5) {
      do {
        uVar14 = uVar5 >> 1;
        if (ppuVar8[uVar14 * 2 + 1] < puStack_324 ||
            (uint)((int)ppuVar8[uVar14 * 2 + 1] - (int)puStack_324) <
            (uint)(ppuVar8[uVar14 * 2] < local_328)) {
          ppuVar8 = ppuVar8 + uVar14 * 2 + 2;
          uVar14 = ~uVar14 + uVar5;
        }
        uVar5 = uVar14;
      } while (0 < (int)uVar14);
      ppuVar4 = (undefined **)&DAT_004cc290;
    }
  }
  iVar9 = (int)ppuVar8 - (int)ppuVar4 >> 3;
  bVar1 = (int)local_330 <= iVar9 + -5;
  if (iVar9 < 1 || bVar1) {
    uVar5 = 0x2ff;
    if ((int)local_330 < 0x2ff) {
      uVar5 = local_330;
    }
    sVar10 = uVar5 - 1;
    uVar17 = FUN_00417245((byte *)local_31d,(byte *)local_18,param_3,sVar10);
    iVar15 = (int)uVar17;
    puVar3 = (uint *)FUN_004165c0(local_31d,iVar15,0x65);
    puVar16 = puVar3;
  }
  else {
    sVar2 = (local_330 - iVar9) + 4;
    sVar10 = 0x42;
    if ((int)sVar2 < 0x42) {
      sVar10 = sVar2;
    }
    uVar17 = FUN_0041728c((byte *)local_31d,(byte *)local_18,param_3,sVar10);
    puVar3 = (uint *)0x0;
    iVar15 = 0;
    puVar16 = (uint *)uVar17;
  }
  if (0 < (int)sVar10) {
    do {
      puVar6 = puVar16;
      puVar16 = (uint *)((int)puVar6 + -1);
    } while (*(char *)((int)puVar6 + -1) == '0');
    if (*(char *)((int)puVar6 + -1) != '.') {
      puVar16 = puVar6;
    }
  }
  uVar5 = (int)puVar16 - (int)local_31d;
  uVar11 = 0x84;
  if ((int)uVar5 <= (int)param_2 - (int)param_1) {
    FUN_004878c0(param_1,local_31d,uVar5);
    puVar16 = (uint *)((int)param_1 + uVar5);
    if (iVar9 < 1 || bVar1) {
      uVar5 = iVar15 - (int)puVar3;
      if ((int)param_2 - (int)puVar16 < (int)uVar5) goto LAB_00417550;
      FUN_004878c0(puVar16,puVar3,uVar5);
      puVar16 = (uint *)((int)puVar16 + uVar5);
    }
    param_2 = puVar16;
    uVar11 = 0;
  }
LAB_00417550:
  if (DAT_0050e8c0 != (local_18[0] ^ (uint)&stack0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_18[0] ^ (uint)&stack0xfffffffc);
  }
  return CONCAT44(uVar11,param_2);
}

