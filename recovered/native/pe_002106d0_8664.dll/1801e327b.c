/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e327b */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801e327b(longlong *param_1,longlong param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined1 *puVar7;
  char *pcVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auStack_2858 [32];
  undefined8 local_2838;
  undefined4 local_2830;
  undefined1 local_282c [4];
  uint local_2828 [2];
  longlong local_2820;
  undefined8 local_2818;
  undefined4 local_280c;
  undefined4 local_2804;
  undefined4 local_27e8;
  undefined1 local_2458 [72];
  uint local_2410 [2];
  ulonglong auStack_2408 [1144];
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_2858;
  FUN_1801e3b45(local_2458,*(undefined8 *)(param_2 + 0x98));
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  pcVar8 = *(char **)((&PTR_DAT_180333c30)[*(int *)(*param_1 + 8)] + 0x20);
  lVar10 = param_1[6];
  cVar4 = FUN_1801e2736(lVar10);
  if (cVar4 == '\0') {
    puVar7 = local_282c;
  }
  else {
    puVar7 = (undefined1 *)FUN_1801e2cf4(lVar10);
  }
  cVar4 = *pcVar8;
  if (cVar4 != '\0') {
    do {
      while (cVar4 == ' ') {
        pcVar1 = pcVar8 + 1;
        pcVar8 = pcVar8 + 1;
        cVar4 = *pcVar1;
      }
      pcVar8 = (char *)FUN_1801e2d68(pcVar8,param_1,puVar7,local_2828);
      if (local_2828[0] < 2) {
        local_2838 = 0;
        iVar6 = FUN_1801e3120(param_1,puVar7,0,0);
        if (iVar6 != 0) {
          FUN_1801e2d29(param_1[6],puVar7);
          iVar6 = FUN_1801caef1(param_2,iVar6,1);
          if ((iVar6 != 0) ||
             (lVar10 = *(longlong *)(param_2 + 0x78), *(short *)(lVar10 + 0x9a) == 0))
          goto LAB_1801e3372;
          FUN_1802a89a0(local_2828,0,0x3d0);
          local_27e8 = (undefined4)param_1[8];
          local_2818 = 0x1000000010000;
          local_280c = 0;
          local_2804 = 0;
          local_2820 = param_2;
          FUN_1801e3b6c(local_2458,local_2828);
          iVar6 = FUN_1801e3b7d(local_2458,lVar10 + 0x98);
          if (iVar6 != 0) goto LAB_1801e3372;
          lVar10 = 0;
          bVar14 = true;
          goto LAB_1801e34c5;
        }
      }
      cVar4 = *pcVar8;
    } while (cVar4 != '\0');
  }
  FUN_1801e2d29(param_1[6],puVar7);
  goto LAB_1801e3372;
  while( true ) {
    lVar17 = lVar10 * 0x1c4;
    uVar11 = 0;
    FUN_1801e4a1a(local_2458,0,0,lVar10);
    if ((ulonglong)local_2410[lVar10 * 0x226] != 0) {
      uVar9 = auStack_2408[lVar10 * 0x113];
      uVar2 = uVar9 + (ulonglong)local_2410[lVar10 * 0x226] * 0x48;
      uVar12 = 0;
      do {
        uVar3 = *(ulonglong *)(uVar9 + 0x20);
        uVar13 = uVar12;
        if ((uVar3 != 0) &&
           (((uint)uVar12 < 0x10 && uVar9 < uVar3) && uVar9 == *(ulonglong *)(uVar3 + 0x20))) {
          iVar15 = (int)*(short *)(uVar9 + 2);
          iVar6 = (int)*(short *)(uVar3 + 2);
          uVar16 = iVar6 - iVar15;
          if (iVar6 < iVar15) {
            uVar16 = iVar15 - iVar6;
          }
          uVar13 = (ulonglong)((uint)uVar12 + 1);
          *(uint *)((longlong)param_1 + uVar12 * 0xc + lVar17 + 0x50) = uVar16 & 0xffff;
        }
        uVar11 = (undefined4)uVar13;
        uVar9 = uVar9 + 0x48;
        uVar12 = uVar13;
      } while (uVar9 < uVar2);
    }
    local_2830 = uVar11;
    FUN_1801e4bc1(&local_2830,(longlong)param_1 + lVar17 + 0x50);
    *(undefined4 *)((longlong)param_1 + lVar17 + 0x4c) = local_2830;
    lVar10 = 1;
    bVar5 = !bVar14;
    bVar14 = false;
    if (bVar5) break;
LAB_1801e34c5:
    iVar6 = FUN_1801e42d6(local_2458,lVar10);
    if (iVar6 != 0) break;
  }
LAB_1801e3372:
  lVar10 = 0;
  bVar14 = true;
  do {
    bVar5 = bVar14;
    lVar10 = lVar10 * 0x1c4;
    if (*(int *)((longlong)param_1 + lVar10 + 0x4c) == 0) {
      iVar15 = (int)param_1[8] * 0x32;
      iVar6 = iVar15 + 0x7ff;
      if (-1 < iVar15) {
        iVar6 = iVar15;
      }
      iVar6 = iVar6 >> 0xb;
    }
    else {
      iVar6 = *(int *)((longlong)param_1 + lVar10 + 0x50);
    }
    *(int *)((longlong)param_1 + lVar10 + 0x110) = iVar6 / 5;
    *(int *)((longlong)param_1 + lVar10 + 0x114) = iVar6;
    *(undefined1 *)((longlong)param_1 + lVar10 + 0x118) = 0;
    lVar10 = 1;
    bVar14 = false;
  } while (bVar5);
  FUN_1801e4d5e(local_2458);
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_2858)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_2858);
}

