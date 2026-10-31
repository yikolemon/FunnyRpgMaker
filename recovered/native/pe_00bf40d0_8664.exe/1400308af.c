/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400308af */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1400308af(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  uint *puVar7;
  byte *pbVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStackY_2858 [32];
  uint local_2830;
  uint local_282c;
  uint local_2828 [2];
  longlong local_2820;
  undefined8 local_2818;
  undefined4 local_280c;
  undefined4 local_2804;
  uint local_27e8;
  longlong local_2458 [9];
  uint local_2410 [2];
  ulonglong auStack_2408 [1144];
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_2858;
  FUN_140031179(local_2458,*(undefined8 *)(param_2 + 0x98));
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  pbVar8 = *(byte **)((&PTR_DAT_1400f0d50)[*(int *)(*param_1 + 8)] + 0x20);
  lVar10 = param_1[6];
  uVar6 = FUN_14002fd6a(lVar10);
  if ((char)uVar6 == '\0') {
    puVar7 = &local_282c;
  }
  else {
    puVar7 = (uint *)FUN_140030328(lVar10);
  }
  bVar2 = *pbVar8;
  if (bVar2 != 0) {
    do {
      while (bVar2 == 0x20) {
        pbVar1 = pbVar8 + 1;
        pbVar8 = pbVar8 + 1;
        bVar2 = *pbVar1;
      }
      pbVar8 = (byte *)FUN_14003039c(pbVar8,param_1,puVar7,local_2828);
      if ((local_2828[0] < 2) &&
         (iVar5 = FUN_140030754((longlong)param_1,puVar7,0,(undefined4 *)0x0,(undefined4 *)0x0),
         iVar5 != 0)) {
        FUN_14003035d(param_1[6],puVar7);
        iVar5 = FUN_14001d8c9(param_2,iVar5,1);
        if ((iVar5 != 0) || (lVar10 = *(longlong *)(param_2 + 0x78), *(short *)(lVar10 + 0x9a) == 0)
           ) goto LAB_1400309a6;
        FUN_1400b3c00((undefined1 (*) [32])local_2828,0,0x3d0);
        local_27e8 = *(uint *)(param_1 + 8);
        local_2818 = 0x1000000010000;
        local_280c = 0;
        local_2804 = 0;
        local_2820 = param_2;
        FUN_1400311a0((longlong)local_2458,(longlong)local_2828);
        iVar5 = FUN_1400311b1(local_2458,(ushort *)(lVar10 + 0x98));
        if (iVar5 != 0) goto LAB_1400309a6;
        uVar16 = 0;
        bVar13 = true;
        goto LAB_140030af9;
      }
      bVar2 = *pbVar8;
    } while (bVar2 != 0);
  }
  FUN_14003035d(param_1[6],puVar7);
  goto LAB_1400309a6;
  while( true ) {
    lVar10 = uVar16 * 0x1c4;
    uVar15 = 0;
    FUN_14003204e((longlong)local_2458,0,0,uVar16);
    if ((ulonglong)local_2410[uVar16 * 0x226] != 0) {
      uVar9 = auStack_2408[uVar16 * 0x113];
      uVar16 = uVar9 + (ulonglong)local_2410[uVar16 * 0x226] * 0x48;
      uVar11 = 0;
      do {
        uVar3 = *(ulonglong *)(uVar9 + 0x20);
        uVar12 = uVar11;
        if ((uVar3 != 0) &&
           (((uint)uVar11 < 0x10 && uVar9 < uVar3) && uVar9 == *(ulonglong *)(uVar3 + 0x20))) {
          iVar14 = (int)*(short *)(uVar9 + 2);
          iVar5 = (int)*(short *)(uVar3 + 2);
          uVar15 = iVar5 - iVar14;
          if (iVar5 < iVar14) {
            uVar15 = iVar14 - iVar5;
          }
          uVar12 = (ulonglong)((uint)uVar11 + 1);
          *(uint *)((longlong)param_1 + uVar11 * 0xc + lVar10 + 0x50) = uVar15 & 0xffff;
        }
        uVar15 = (uint)uVar12;
        uVar9 = uVar9 + 0x48;
        uVar11 = uVar12;
      } while (uVar9 < uVar16);
    }
    local_2830 = uVar15;
    FUN_1400321f5(&local_2830,(int *)((longlong)param_1 + lVar10 + 0x50),local_27e8 / 100);
    *(uint *)((longlong)param_1 + lVar10 + 0x4c) = local_2830;
    uVar16 = 1;
    bVar4 = !bVar13;
    bVar13 = false;
    if (bVar4) break;
LAB_140030af9:
    iVar5 = FUN_14003190a(local_2458,(uint)uVar16);
    if (iVar5 != 0) break;
  }
LAB_1400309a6:
  lVar10 = 0;
  bVar13 = true;
  do {
    bVar4 = bVar13;
    lVar10 = lVar10 * 0x1c4;
    if (*(int *)((longlong)param_1 + lVar10 + 0x4c) == 0) {
      iVar14 = (int)param_1[8] * 0x32;
      iVar5 = iVar14 + 0x7ff;
      if (-1 < iVar14) {
        iVar5 = iVar14;
      }
      iVar5 = iVar5 >> 0xb;
    }
    else {
      iVar5 = *(int *)((longlong)param_1 + lVar10 + 0x50);
    }
    *(int *)((longlong)param_1 + lVar10 + 0x110) = iVar5 / 5;
    *(int *)((longlong)param_1 + lVar10 + 0x114) = iVar5;
    *(undefined1 *)((longlong)param_1 + lVar10 + 0x118) = 0;
    lVar10 = 1;
    bVar13 = false;
  } while (bVar4);
  FUN_140032392(local_2458);
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_2858)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_2858);
}

