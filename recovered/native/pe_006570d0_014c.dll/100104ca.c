/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100104ca */

undefined8 FUN_100104ca(undefined1 *param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_94 [3];
  char local_91;
  int local_90;
  undefined1 local_89 [117];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_94;
  if (param_3 == 0) {
    if (param_1 == param_2) {
      uVar5 = 0x84;
    }
    else {
      *param_1 = 0x30;
      param_2 = param_1 + 1;
      uVar5 = 0;
    }
    goto LAB_100106b4;
  }
  if ((int)param_4 < 0) {
    param_4 = 6;
LAB_10010543:
    uVar6 = (param_4 - 1) * (param_4 + 10) & 0xfe;
    puVar2 = (uint *)(&DAT_102b5968 + uVar6 * 2);
    puVar3 = (undefined4 *)(&DAT_102b5968 + param_4 * 4 + uVar6 * 2);
  }
  else {
    if (param_4 == 0) {
      param_4 = 1;
      goto LAB_10010543;
    }
    if (param_4 < 1000000) {
      if (param_4 < 8) goto LAB_10010543;
      uVar6 = 0x27;
      if (param_4 < 0x27) {
        uVar6 = param_4;
      }
    }
    else {
      param_4 = 1000000;
      uVar6 = 0x27;
    }
    puVar3 = &DAT_102b5a68 + uVar6;
    puVar2 = &DAT_102b5a68;
  }
  puVar8 = puVar2;
  for (puVar7 = puVar2; (puVar7 != puVar3 + 5 && (puVar8 = puVar7, *puVar7 < param_3));
      puVar7 = puVar7 + 1) {
    puVar8 = puVar3 + 5;
  }
  iVar9 = (int)puVar8 - (int)puVar2 >> 2;
  bVar1 = iVar9 + -5 < (int)param_4;
  local_91 = 0 < iVar9 && bVar1;
  if (0 < iVar9 && bVar1) {
    iVar9 = (param_4 - iVar9) + 4;
    iVar4 = 0x25;
    if (iVar9 < 0x25) {
      iVar4 = iVar9;
    }
    iVar9 = FUN_1001044d(local_89,&local_14,param_3,iVar4);
    local_90 = 0;
    iVar10 = 0;
  }
  else {
    uVar6 = 0x70;
    if ((int)param_4 < 0x70) {
      uVar6 = param_4;
    }
    iVar4 = uVar6 - 1;
    iVar10 = FUN_10010406(local_89,&local_14,param_3,iVar4);
    iVar9 = FUN_100062be(local_89,iVar10,0x65);
    local_90 = iVar9;
  }
  if (0 < iVar4) {
    do {
      iVar4 = iVar9;
      iVar9 = iVar4 + -1;
    } while (*(char *)(iVar4 + -1) == '0');
    if (*(char *)(iVar4 + -1) != '.') {
      iVar9 = iVar4;
    }
  }
  iVar9 = iVar9 - (int)local_89;
  uVar5 = 0x84;
  if (iVar9 <= (int)param_2 - (int)param_1) {
    FUN_1025b2d0(param_1,local_89,iVar9);
    param_1 = param_1 + iVar9;
    if (local_91 == '\0') {
      iVar10 = iVar10 - local_90;
      if ((int)param_2 - (int)param_1 < iVar10) goto LAB_100106b4;
      FUN_1025b2d0(param_1,local_90,iVar10);
      param_1 = param_1 + iVar10;
    }
    param_2 = param_1;
    uVar5 = 0;
  }
LAB_100106b4:
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_94)) {
    return CONCAT44(uVar5,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

