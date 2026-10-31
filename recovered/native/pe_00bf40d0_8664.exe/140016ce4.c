/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140016ce4 */

longlong *
FUN_140016ce4(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined *param_4,
             uint param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined1 (*pauVar4) [32];
  int iVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 (*pauVar14) [32];
  uint uVar15;
  undefined4 uVar16;
  undefined1 (*pauVar17) [32];
  undefined1 (*pauVar18) [32];
  undefined1 auStackY_398 [32];
  undefined1 (*local_368 [2]) [32];
  undefined8 local_358 [96];
  undefined1 local_53 [11];
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_398;
  if (param_4 == (undefined *)0x0) {
    if (param_2 == param_3) {
      *param_1 = (longlong)param_3;
      *(undefined4 *)(param_1 + 1) = 0x84;
    }
    else {
      *(undefined1 *)param_2 = 0x30;
      *param_1 = (longlong)param_2 + 1;
      *(undefined4 *)(param_1 + 1) = 0;
    }
    goto LAB_140016f5b;
  }
  if ((int)param_5 < 0) {
    param_5 = 6;
LAB_140016d92:
    ppuVar6 = (undefined **)
              ((longlong)&DAT_1400da960 + (ulonglong)((param_5 + 10) * (param_5 - 1) & 0xfffe) * 4);
    ppuVar11 = ppuVar6 + (ulonglong)param_5 + 5;
    ppuVar9 = ppuVar11;
    ppuVar7 = ppuVar6;
joined_r0x000140016dbd:
    for (; (ppuVar10 = ppuVar9, ppuVar6 != ppuVar9 &&
           (ppuVar11 = ppuVar7, ppuVar10 = ppuVar6, *ppuVar6 < param_4)); ppuVar6 = ppuVar6 + 1) {
    }
  }
  else {
    if (param_5 == 0) {
      param_5 = 1;
      goto LAB_140016d92;
    }
    ppuVar11 = &PTR_s_device_or_resource_busy_1400db950;
    if (999999 < param_5) {
      param_5 = 1000000;
      goto LAB_140016df0;
    }
    if (param_5 < 0x10) goto LAB_140016d92;
    if (param_5 < 0x136) {
      ppuVar6 = (undefined **)&DAT_1400daf80;
      ppuVar11 = (undefined **)(&UNK_1400dafa8 + (ulonglong)param_5 * 8);
      ppuVar9 = ppuVar11;
      ppuVar7 = ppuVar6;
      if (0x9b < param_5) goto LAB_140016df0;
      goto joined_r0x000140016dbd;
    }
LAB_140016df0:
    uVar12 = (longlong)(ppuVar11 + -0x2801b5f0) >> 3;
    if ((longlong)uVar12 < 1) {
      ppuVar11 = (undefined **)&DAT_1400daf80;
      ppuVar10 = (undefined **)&DAT_1400daf80;
    }
    else {
      ppuVar11 = (undefined **)&DAT_1400daf80;
      ppuVar10 = (undefined **)&DAT_1400daf80;
      do {
        uVar13 = uVar12 >> 1;
        uVar12 = ~uVar13 + uVar12;
        ppuVar6 = ppuVar10 + uVar13 + 1;
        if (param_4 <= ppuVar10[uVar13]) {
          uVar12 = uVar13;
          ppuVar6 = ppuVar10;
        }
        ppuVar10 = ppuVar6;
      } while (0 < (longlong)uVar12);
    }
  }
  iVar2 = (int)((ulonglong)((longlong)ppuVar10 - (longlong)ppuVar11) >> 3);
  iVar5 = iVar2 + -5;
  if (iVar5 < -4 || (int)param_5 <= iVar5) {
    uVar15 = 0x2ff;
    if ((int)param_5 < 0x2ff) {
      uVar15 = param_5;
    }
    uVar15 = uVar15 - 1;
    pauVar4 = (undefined1 (*) [32])local_53;
    FUN_140016c23(local_368,(undefined1 (*) [32])local_358,pauVar4,(ulonglong)param_4,uVar15);
    pauVar4 = (undefined1 (*) [32])
              FUN_140015f31((undefined1 (*) [32])local_358,local_368[0],
                            (int)CONCAT71((int7)((ulonglong)pauVar4 >> 8),0x65));
    pauVar17 = local_368[0];
    pauVar18 = pauVar4;
  }
  else {
    uVar3 = (param_5 - iVar2) + 4;
    uVar15 = 0x42;
    if ((int)uVar3 < 0x42) {
      uVar15 = uVar3;
    }
    FUN_140016c60((longlong *)local_368,(undefined1 (*) [32])local_358,(undefined1 (*) [32])local_53
                  ,(ulonglong)param_4,uVar15);
    pauVar4 = local_368[0];
    pauVar17 = (undefined1 (*) [32])0x0;
    pauVar18 = (undefined1 (*) [32])0x0;
  }
  if (0 < (int)uVar15) {
    do {
      pauVar14 = pauVar4;
      cVar1 = *(char *)((longlong)pauVar14[-1] + 0x1f);
      pauVar4 = (undefined1 (*) [32])((longlong)pauVar14[-1] + 0x1f);
    } while (cVar1 == '0');
    if (cVar1 != '.') {
      pauVar4 = pauVar14;
    }
  }
  uVar12 = (longlong)pauVar4 - (longlong)local_358;
  uVar16 = 0x84;
  if ((longlong)uVar12 <= (longlong)param_3 - (longlong)param_2) {
    FUN_1400b3550(param_2,local_358,uVar12);
    puVar8 = (undefined8 *)((longlong)param_2 + uVar12);
    if (iVar5 < -4 || (int)param_5 <= iVar5) {
      uVar12 = (longlong)pauVar17 - (longlong)pauVar18;
      if ((longlong)param_3 - (longlong)puVar8 < (longlong)uVar12) goto LAB_140016f54;
      FUN_1400b3550(puVar8,(undefined8 *)pauVar18,uVar12);
      puVar8 = (undefined8 *)((longlong)puVar8 + uVar12);
    }
    param_3 = puVar8;
    uVar16 = 0;
  }
LAB_140016f54:
  *param_1 = (longlong)param_3;
  *(undefined4 *)(param_1 + 1) = uVar16;
LAB_140016f5b:
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_398)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_398);
}

