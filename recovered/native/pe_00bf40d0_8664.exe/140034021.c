/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140034021 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_140034021(longlong *param_1,longlong param_2)

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
  bool bVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStackY_28d8 [32];
  uint local_28b0;
  uint local_28ac;
  uint local_28a8 [2];
  longlong local_28a0;
  undefined8 local_2898;
  undefined4 local_288c;
  undefined4 local_2884;
  uint local_2868;
  longlong local_2458 [9];
  uint local_2410 [2];
  ulonglong local_2408 [1144];
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_28d8;
  FUN_140031179(local_2458,*(undefined8 *)(param_2 + 0x98));
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  pbVar8 = *(byte **)((&PTR_DAT_1400f0d50)[*(int *)(*param_1 + 8)] + 0x20);
  lVar10 = param_1[6];
  uVar6 = FUN_14002fd6a(lVar10);
  if ((char)uVar6 == '\0') {
    puVar7 = &local_28ac;
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
      pbVar8 = (byte *)FUN_14003039c(pbVar8,param_1,puVar7,local_28a8);
      if ((local_28a8[0] < 2) &&
         (iVar5 = FUN_140030754((longlong)param_1,puVar7,0,(undefined4 *)0x0,(undefined4 *)0x0),
         iVar5 != 0)) {
        FUN_14003035d(param_1[6],puVar7);
        iVar5 = FUN_14001d8c9(param_2,iVar5,1);
        if ((iVar5 != 0) || (lVar10 = *(longlong *)(param_2 + 0x78), *(short *)(lVar10 + 0x9a) == 0)
           ) goto LAB_140034118;
        FUN_1400b3c00((undefined1 (*) [32])local_28a8,0,0x450);
        local_2868 = *(uint *)(param_1 + 8);
        local_2898 = 0x1000000010000;
        local_288c = 0;
        local_2884 = 0;
        local_28a0 = param_2;
        FUN_1400311a0((longlong)local_2458,(longlong)local_28a8);
        iVar5 = FUN_1400311b1(local_2458,(ushort *)(lVar10 + 0x98));
        if (iVar5 != 0) goto LAB_140034118;
        uVar14 = 0;
        bVar11 = true;
        goto LAB_14003426f;
      }
      bVar2 = *pbVar8;
    } while (bVar2 != 0);
  }
  FUN_14003035d(param_1[6],puVar7);
  goto LAB_140034118;
  while( true ) {
    lVar10 = uVar14 * 0x204;
    FUN_14003204e((longlong)local_2458,0,0,uVar14);
    uVar9 = local_2408[uVar14 * 0x113];
    local_28b0 = 0;
    if ((uVar9 != 0) && (local_28b0 = 0, (ulonglong)local_2410[uVar14 * 0x226] != 0)) {
      uVar14 = uVar9 + (ulonglong)local_2410[uVar14 * 0x226] * 0x48;
      uVar15 = 0;
      do {
        uVar3 = *(ulonglong *)(uVar9 + 0x20);
        uVar16 = uVar15;
        if ((uVar3 != 0) &&
           (((uint)uVar15 < 0x10 && uVar9 < uVar3) && uVar9 == *(ulonglong *)(uVar3 + 0x20))) {
          iVar12 = (int)*(short *)(uVar9 + 2);
          iVar5 = (int)*(short *)(uVar3 + 2);
          uVar13 = iVar5 - iVar12;
          if (iVar5 < iVar12) {
            uVar13 = iVar12 - iVar5;
          }
          uVar16 = (ulonglong)((uint)uVar15 + 1);
          *(uint *)((longlong)param_1 + uVar15 * 0xc + lVar10 + 0x50) = uVar13 & 0xffff;
        }
        local_28b0 = (uint)uVar16;
        uVar9 = uVar9 + 0x48;
        uVar15 = uVar16;
      } while (uVar9 < uVar14);
    }
    FUN_1400321f5(&local_28b0,(int *)((longlong)param_1 + lVar10 + 0x50),local_2868 / 100);
    *(uint *)((longlong)param_1 + lVar10 + 0x4c) = local_28b0;
    uVar14 = 1;
    bVar4 = !bVar11;
    bVar11 = false;
    if (bVar4) break;
LAB_14003426f:
    iVar5 = FUN_14003190a(local_2458,(uint)uVar14);
    if (iVar5 != 0) break;
  }
LAB_140034118:
  lVar10 = 0;
  bVar11 = true;
  do {
    bVar4 = bVar11;
    lVar10 = lVar10 * 0x204;
    if (*(int *)((longlong)param_1 + lVar10 + 0x4c) == 0) {
      iVar12 = (int)param_1[8] * 0x32;
      iVar5 = iVar12 + 0x7ff;
      if (-1 < iVar12) {
        iVar5 = iVar12;
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
    bVar11 = false;
  } while (bVar4);
  FUN_140032392(local_2458);
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_28d8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_28d8);
}

