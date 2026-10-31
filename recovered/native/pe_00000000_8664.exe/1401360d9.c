/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401360d9 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1401360d9(longlong *param_1,longlong param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined1 *puVar8;
  char *pcVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_28d8 [32];
  undefined8 local_28b8;
  undefined4 local_28b0;
  undefined1 local_28ac [4];
  uint local_28a8 [2];
  longlong local_28a0;
  undefined8 local_2898;
  undefined4 local_288c;
  undefined4 local_2884;
  undefined4 local_2868;
  undefined1 local_2458 [72];
  uint local_2410 [2];
  ulonglong local_2408 [1144];
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_28d8;
  FUN_140133231(local_2458,*(undefined8 *)(param_2 + 0x98));
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  pcVar9 = *(char **)((&PTR_DAT_140e97f90)[*(int *)(*param_1 + 8)] + 0x20);
  lVar11 = param_1[6];
  cVar5 = FUN_140131e22(lVar11);
  if (cVar5 == '\0') {
    puVar8 = local_28ac;
  }
  else {
    puVar8 = (undefined1 *)FUN_1401323e0(lVar11);
  }
  cVar5 = *pcVar9;
  if (cVar5 != '\0') {
    do {
      while (cVar5 == ' ') {
        pcVar1 = pcVar9 + 1;
        pcVar9 = pcVar9 + 1;
        cVar5 = *pcVar1;
      }
      pcVar9 = (char *)FUN_140132454(pcVar9,param_1,puVar8,local_28a8);
      if (local_28a8[0] < 2) {
        local_28b8 = 0;
        iVar7 = FUN_14013280c(param_1,puVar8,0,0);
        if (iVar7 != 0) {
          FUN_140132415(param_1[6],puVar8);
          iVar7 = FUN_140129ec5(param_2,iVar7,1);
          if ((iVar7 != 0) ||
             (lVar11 = *(longlong *)(param_2 + 0x78), *(short *)(lVar11 + 0x9a) == 0))
          goto LAB_1401361d0;
          FUN_1401c5830(local_28a8,0,0x450);
          local_2868 = (undefined4)param_1[8];
          local_2898 = 0x1000000010000;
          local_288c = 0;
          local_2884 = 0;
          local_28a0 = param_2;
          FUN_140133258(local_2458,local_28a8);
          iVar7 = FUN_140133269(local_2458,lVar11 + 0x98);
          if (iVar7 != 0) goto LAB_1401361d0;
          lVar11 = 0;
          bVar12 = true;
          goto LAB_140136327;
        }
      }
      cVar5 = *pcVar9;
    } while (cVar5 != '\0');
  }
  FUN_140132415(param_1[6],puVar8);
  goto LAB_1401361d0;
  while( true ) {
    lVar4 = lVar11 * 0x204;
    FUN_140134106(local_2458,0,0,lVar11);
    uVar10 = local_2408[lVar11 * 0x113];
    local_28b0 = 0;
    if ((uVar10 != 0) && (local_28b0 = 0, (ulonglong)local_2410[lVar11 * 0x226] != 0)) {
      uVar2 = uVar10 + (ulonglong)local_2410[lVar11 * 0x226] * 0x48;
      uVar15 = 0;
      do {
        uVar3 = *(ulonglong *)(uVar10 + 0x20);
        uVar16 = uVar15;
        if ((uVar3 != 0) &&
           (((uint)uVar15 < 0x10 && uVar10 < uVar3) && uVar10 == *(ulonglong *)(uVar3 + 0x20))) {
          iVar13 = (int)*(short *)(uVar10 + 2);
          iVar7 = (int)*(short *)(uVar3 + 2);
          uVar14 = iVar7 - iVar13;
          if (iVar7 < iVar13) {
            uVar14 = iVar13 - iVar7;
          }
          uVar16 = (ulonglong)((uint)uVar15 + 1);
          *(uint *)((longlong)param_1 + uVar15 * 0xc + lVar4 + 0x50) = uVar14 & 0xffff;
        }
        local_28b0 = (undefined4)uVar16;
        uVar10 = uVar10 + 0x48;
        uVar15 = uVar16;
      } while (uVar10 < uVar2);
    }
    FUN_1401342ad(&local_28b0,(longlong)param_1 + lVar4 + 0x50);
    *(undefined4 *)((longlong)param_1 + lVar4 + 0x4c) = local_28b0;
    lVar11 = 1;
    bVar6 = !bVar12;
    bVar12 = false;
    if (bVar6) break;
LAB_140136327:
    iVar7 = FUN_1401339c2(local_2458,lVar11);
    if (iVar7 != 0) break;
  }
LAB_1401361d0:
  lVar11 = 0;
  bVar12 = true;
  do {
    bVar6 = bVar12;
    lVar11 = lVar11 * 0x204;
    if (*(int *)((longlong)param_1 + lVar11 + 0x4c) == 0) {
      iVar13 = (int)param_1[8] * 0x32;
      iVar7 = iVar13 + 0x7ff;
      if (-1 < iVar13) {
        iVar7 = iVar13;
      }
      iVar7 = iVar7 >> 0xb;
    }
    else {
      iVar7 = *(int *)((longlong)param_1 + lVar11 + 0x50);
    }
    *(int *)((longlong)param_1 + lVar11 + 0x110) = iVar7 / 5;
    *(int *)((longlong)param_1 + lVar11 + 0x114) = iVar7;
    *(undefined1 *)((longlong)param_1 + lVar11 + 0x118) = 0;
    lVar11 = 1;
    bVar12 = false;
  } while (bVar6);
  FUN_14013444a(local_2458);
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_28d8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_28d8);
}

