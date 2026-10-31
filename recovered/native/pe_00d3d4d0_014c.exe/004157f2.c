/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004157f2 */

undefined8 __cdecl FUN_004157f2(uint *param_1,uint *param_2,float param_3,uint param_4)

{
  bool bVar1;
  size_t sVar2;
  float *pfVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  size_t sVar7;
  undefined4 uVar8;
  uint *puVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auStack_94 [3];
  char local_91;
  uint *local_90;
  uint local_89 [29];
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)auStack_94;
  if (param_3 == 0.0) {
    if (param_1 == param_2) {
      uVar8 = 0x84;
    }
    else {
      *(undefined1 *)param_1 = 0x30;
      param_2 = (uint *)((int)param_1 + 1);
      uVar8 = 0;
    }
    goto LAB_004159dc;
  }
  if ((int)param_4 < 0) {
    param_4 = 6;
LAB_0041586b:
    uVar6 = (param_4 - 1) * (param_4 + 10) & 0xfe;
    pfVar3 = (float *)(&DAT_004cbac8 + uVar6 * 2);
    puVar4 = (undefined4 *)(&DAT_004cbac8 + param_4 * 4 + uVar6 * 2);
  }
  else {
    if (param_4 == 0) {
      param_4 = 1;
      goto LAB_0041586b;
    }
    if (param_4 < 1000000) {
      if (param_4 < 8) goto LAB_0041586b;
      uVar6 = 0x27;
      if (param_4 < 0x27) {
        uVar6 = param_4;
      }
    }
    else {
      param_4 = 1000000;
      uVar6 = 0x27;
    }
    puVar4 = &DAT_004cbbc8 + uVar6;
    pfVar3 = (float *)&DAT_004cbbc8;
  }
  pfVar11 = pfVar3;
  for (pfVar10 = pfVar3;
      (pfVar10 != (float *)(puVar4 + 5) && (pfVar11 = pfVar10, (uint)*pfVar10 < (uint)param_3));
      pfVar10 = pfVar10 + 1) {
    pfVar11 = (float *)(puVar4 + 5);
  }
  iVar12 = (int)pfVar11 - (int)pfVar3 >> 2;
  bVar1 = iVar12 + -5 < (int)param_4;
  local_91 = 0 < iVar12 && bVar1;
  if (0 < iVar12 && bVar1) {
    sVar2 = (param_4 - iVar12) + 4;
    sVar7 = 0x25;
    if ((int)sVar2 < 0x25) {
      sVar7 = sVar2;
    }
    uVar13 = FUN_00415775((byte *)local_89,(byte *)&local_14,param_3,sVar7);
    puVar9 = (uint *)uVar13;
    local_90 = (uint *)0x0;
    iVar12 = 0;
  }
  else {
    uVar6 = 0x70;
    if ((int)param_4 < 0x70) {
      uVar6 = param_4;
    }
    sVar7 = uVar6 - 1;
    uVar13 = FUN_0041572e((byte *)local_89,(byte *)&local_14,param_3,sVar7);
    iVar12 = (int)uVar13;
    puVar9 = (uint *)FUN_004165c0(local_89,iVar12,0x65);
    local_90 = puVar9;
  }
  if (0 < (int)sVar7) {
    do {
      puVar5 = puVar9;
      puVar9 = (uint *)((int)puVar5 + -1);
    } while (*(char *)((int)puVar5 + -1) == '0');
    if (*(char *)((int)puVar5 + -1) != '.') {
      puVar9 = puVar5;
    }
  }
  uVar6 = (int)puVar9 - (int)local_89;
  uVar8 = 0x84;
  if ((int)uVar6 <= (int)param_2 - (int)param_1) {
    FUN_004878c0(param_1,local_89,uVar6);
    puVar9 = (uint *)((int)param_1 + uVar6);
    if (local_91 == '\0') {
      uVar6 = iVar12 - (int)local_90;
      if ((int)param_2 - (int)puVar9 < (int)uVar6) goto LAB_004159dc;
      FUN_004878c0(puVar9,local_90,uVar6);
      puVar9 = (uint *)((int)puVar9 + uVar6);
    }
    param_2 = puVar9;
    uVar8 = 0;
  }
LAB_004159dc:
  if (DAT_0050e8c0 == (local_14 ^ (uint)auStack_94)) {
    return CONCAT44(uVar8,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)auStack_94);
}

