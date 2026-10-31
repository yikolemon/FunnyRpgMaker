/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004337e1 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __fastcall FUN_004337e1(int *param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  bool bVar4;
  undefined4 uVar5;
  uint *puVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint local_1e88;
  int *local_1e84;
  int *local_1e80;
  uint local_1e7c;
  uint local_1e78;
  uint local_1e74;
  uint local_1e70;
  undefined4 local_1e6c;
  undefined4 local_1e68;
  undefined4 local_1e60;
  undefined4 local_1e58;
  uint local_1e48;
  int local_1a3c [13];
  uint local_1a08 [1661];
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_1e88;
  local_1e88 = param_2;
  FUN_00430b87(local_1a3c,*(undefined4 *)(param_2 + 100));
  param_1[0xe] = 0;
  param_1[0x8f] = 0;
  pbVar7 = *(byte **)((&PTR_DAT_004df518)[*(int *)(*param_1 + 8)] + 0x10);
  iVar8 = param_1[9];
  uVar5 = FUN_0042fab9(iVar8);
  if ((char)uVar5 == '\0') {
    puVar6 = &local_1e78;
  }
  else {
    puVar6 = (uint *)FUN_0042ff7b(iVar8);
  }
  local_1e80 = param_1 + 0xc;
  bVar2 = *pbVar7;
  local_1e84 = param_1;
  while (bVar2 != 0) {
    while (bVar2 == 0x20) {
      pbVar1 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      bVar2 = *pbVar1;
    }
    pbVar7 = (byte *)FUN_0042ffd7(pbVar7,param_1,puVar6,&local_1e74);
    if ((local_1e74 < 2) &&
       (iVar8 = FUN_00430301((int)param_1,puVar6,0,(undefined4 *)0x0,(undefined4 *)0x0), iVar8 != 0)
       ) {
      FUN_0042ffa3(param_1[9],puVar6);
      uVar10 = local_1e88;
      iVar8 = FUN_0041d7a9(local_1e88,iVar8,1);
      if ((iVar8 != 0) || (iVar8 = *(int *)(uVar10 + 0x54), *(short *)(iVar8 + 0x6e) == 0))
      goto LAB_004338ac;
      iVar11 = 0;
      _memset(&local_1e74,0,0x438);
      local_1e48 = local_1e84[0xb];
      local_1e6c = 0x10000;
      local_1e68 = 0x10000;
      local_1e60 = 0;
      local_1e70 = uVar10;
      local_1e58 = 0;
      FUN_00430ba5((int)local_1a3c,(int)&local_1e74);
      iVar8 = FUN_00430bb5(local_1a3c,(ushort *)(iVar8 + 0x6c));
      if (iVar8 != 0) goto LAB_004338ac;
      uVar10 = CONCAT31((int3)((uint)local_1a3c >> 8),1);
      goto LAB_004339df;
    }
    bVar2 = *pbVar7;
  }
  FUN_0042ffa3(param_1[9],puVar6);
  goto LAB_004338ac;
  while( true ) {
    uVar14 = 0;
    local_1e88 = uVar10;
    FUN_004319af((int)local_1a3c,0,0,iVar11);
    uVar10 = local_1a08[iVar11 * 0x151 + 2];
    if ((uVar10 != 0) && (local_1a08[iVar11 * 0x151] != 0)) {
      uVar16 = local_1a08[iVar11 * 0x151] * 0x2c + uVar10;
      uVar15 = 0;
      do {
        uVar12 = *(uint *)(uVar10 + 0x14);
        uVar14 = uVar15;
        if ((uVar12 != 0) &&
           ((uVar15 < 0x10 && uVar10 < uVar12) && uVar10 == *(uint *)(uVar12 + 0x14))) {
          iVar8 = (int)*(short *)(uVar10 + 2);
          iVar9 = (int)*(short *)(uVar12 + 2);
          uVar12 = iVar9 - iVar8;
          if (iVar9 < iVar8) {
            uVar12 = iVar8 - iVar9;
          }
          uVar14 = uVar15 + 1;
          piVar3[iVar11 * 0x81 + uVar15 * 3 + 3] = uVar12 & 0xffff;
        }
        uVar10 = uVar10 + 0x2c;
        uVar15 = uVar14;
      } while (uVar10 < uVar16);
    }
    local_1e7c = uVar14;
    FUN_00431b47(&local_1e7c,piVar3 + iVar11 * 0x81 + 3,local_1e48 / 100);
    piVar3[iVar11 * 0x81 + 2] = local_1e7c;
    iVar11 = 1;
    uVar10 = 0;
    if ((local_1e88 & 1) == 0) break;
LAB_004339df:
    iVar8 = FUN_0043122d(local_1a3c,iVar11);
    piVar3 = local_1e80;
    if (iVar8 != 0) break;
  }
LAB_004338ac:
  iVar8 = 0;
  bVar4 = true;
  do {
    bVar13 = bVar4;
    if (local_1e80[iVar8 * 0x81 + 2] == 0) {
      iVar9 = local_1e84[0xb] * 0x32;
      iVar11 = iVar9 + 0x7ff;
      if (-1 < iVar9) {
        iVar11 = iVar9;
      }
      iVar11 = iVar11 >> 0xb;
    }
    else {
      iVar11 = local_1e80[iVar8 * 0x81 + 3];
    }
    local_1e80[iVar8 * 0x81 + 0x33] = iVar11 / 5;
    local_1e80[iVar8 * 0x81 + 0x34] = iVar11;
    *(undefined1 *)(local_1e80 + iVar8 * 0x81 + 0x35) = 0;
    iVar8 = 1;
    bVar4 = false;
  } while (bVar13);
  FUN_00431cd1(local_1a3c);
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_1e88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_1e88);
}

