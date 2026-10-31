/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101dc071 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __fastcall FUN_101dc071(int *param_1,uint param_2)

{
  char *pcVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  undefined1 *puVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint local_1e88;
  int *local_1e84;
  int *local_1e80;
  uint local_1e7c;
  undefined1 local_1e78 [4];
  uint local_1e74;
  uint local_1e70;
  undefined4 local_1e6c;
  undefined4 local_1e68;
  undefined4 local_1e60;
  undefined4 local_1e58;
  uint local_1e48;
  undefined1 local_1a3c [52];
  uint local_1a08 [1661];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1e88;
  local_1e88 = param_2;
  FUN_101d9417();
  param_1[0xe] = 0;
  param_1[0x8f] = 0;
  pcVar6 = *(char **)((&PTR_DAT_1030af74)[*(int *)(*param_1 + 8)] + 0x10);
  iVar7 = param_1[9];
  cVar4 = FUN_101d8349();
  if (cVar4 == '\0') {
    puVar5 = local_1e78;
  }
  else {
    puVar5 = (undefined1 *)FUN_101d880b(iVar7);
  }
  local_1e80 = param_1 + 0xc;
  cVar4 = *pcVar6;
  local_1e84 = param_1;
  while (cVar4 != '\0') {
    while (cVar4 == ' ') {
      pcVar1 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
      cVar4 = *pcVar1;
    }
    pcVar6 = (char *)FUN_101d8867(pcVar6,param_1,puVar5,&local_1e74);
    if ((local_1e74 < 2) && (iVar7 = FUN_101d8b91(param_1,puVar5,0,0,0), iVar7 != 0)) {
      FUN_101d8833(param_1[9],puVar5);
      uVar9 = local_1e88;
      iVar7 = FUN_101c11b9(local_1e88,iVar7,1);
      if ((iVar7 != 0) || (*(short *)(*(int *)(uVar9 + 0x54) + 0x6e) == 0)) goto LAB_101dc13c;
      iVar10 = 0;
      _memset(&local_1e74,0,0x438);
      local_1e48 = local_1e84[0xb];
      local_1e6c = 0x10000;
      local_1e68 = 0x10000;
      local_1e60 = 0;
      local_1e70 = uVar9;
      local_1e58 = 0;
      FUN_101d9435();
      iVar7 = FUN_101d9445();
      if (iVar7 != 0) goto LAB_101dc13c;
      uVar9 = CONCAT31((int3)((uint)local_1a3c >> 8),1);
      goto LAB_101dc26f;
    }
    cVar4 = *pcVar6;
  }
  FUN_101d8833(param_1[9],puVar5);
  goto LAB_101dc13c;
  while( true ) {
    uVar13 = 0;
    local_1e88 = uVar9;
    FUN_101da23f(0,iVar10);
    uVar9 = local_1a08[iVar10 * 0x151 + 2];
    if ((uVar9 != 0) && (local_1a08[iVar10 * 0x151] != 0)) {
      uVar15 = local_1a08[iVar10 * 0x151] * 0x2c + uVar9;
      uVar14 = 0;
      do {
        uVar11 = *(uint *)(uVar9 + 0x14);
        uVar13 = uVar14;
        if ((uVar11 != 0) &&
           ((uVar14 < 0x10 && uVar9 < uVar11) && uVar9 == *(uint *)(uVar11 + 0x14))) {
          iVar7 = (int)*(short *)(uVar9 + 2);
          iVar8 = (int)*(short *)(uVar11 + 2);
          uVar11 = iVar8 - iVar7;
          if (iVar8 < iVar7) {
            uVar11 = iVar7 - iVar8;
          }
          uVar13 = uVar14 + 1;
          piVar2[iVar10 * 0x81 + uVar14 * 3 + 3] = uVar11 & 0xffff;
        }
        uVar9 = uVar9 + 0x2c;
        uVar14 = uVar13;
      } while (uVar9 < uVar15);
    }
    local_1e7c = uVar13;
    FUN_101da3d7(local_1e48 / 100);
    piVar2[iVar10 * 0x81 + 2] = local_1e7c;
    iVar10 = 1;
    uVar9 = 0;
    if ((local_1e88 & 1) == 0) break;
LAB_101dc26f:
    iVar7 = FUN_101d9abd();
    piVar2 = local_1e80;
    if (iVar7 != 0) break;
  }
LAB_101dc13c:
  iVar7 = 0;
  bVar3 = true;
  do {
    bVar12 = bVar3;
    if (local_1e80[iVar7 * 0x81 + 2] == 0) {
      iVar8 = local_1e84[0xb] * 0x32;
      iVar10 = iVar8 + 0x7ff;
      if (-1 < iVar8) {
        iVar10 = iVar8;
      }
      iVar10 = iVar10 >> 0xb;
    }
    else {
      iVar10 = local_1e80[iVar7 * 0x81 + 3];
    }
    local_1e80[iVar7 * 0x81 + 0x33] = iVar10 / 5;
    local_1e80[iVar7 * 0x81 + 0x34] = iVar10;
    *(undefined1 *)(local_1e80 + iVar7 * 0x81 + 0x35) = 0;
    iVar7 = 1;
    bVar3 = false;
  } while (bVar12);
  FUN_101da561();
  if (DAT_10388d00 == (local_14 ^ (uint)&local_1e88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

