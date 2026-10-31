/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140014f1a */

longlong *
FUN_140014f1a(longlong *param_1,undefined8 *param_2,undefined8 *param_3,float param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined1 (*pauVar4) [32];
  int iVar5;
  float *pfVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  float *pfVar9;
  float *pfVar10;
  undefined1 (*pauVar11) [32];
  uint uVar12;
  undefined4 uVar13;
  undefined1 (*pauVar14) [32];
  undefined1 (*pauVar15) [32];
  undefined1 auStackY_108 [32];
  undefined1 (*local_d8 [2]) [32];
  undefined8 local_c8 [14];
  undefined1 local_53 [11];
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_108;
  if (param_4 == 0.0) {
    if (param_2 == param_3) {
      *param_1 = (longlong)param_3;
      *(undefined4 *)(param_1 + 1) = 0x84;
    }
    else {
      *(undefined1 *)param_2 = 0x30;
      *param_1 = (longlong)param_2 + 1;
      *(undefined4 *)(param_1 + 1) = 0;
    }
    goto LAB_140015123;
  }
  if ((int)param_5 < 0) {
    param_5 = 6;
LAB_140014f9e:
    pfVar6 = (float *)(&DAT_1400da7b0 + (ulonglong)((param_5 + 10) * (param_5 - 1) & 0xfe) * 2);
    uVar8 = (ulonglong)param_5;
  }
  else {
    if (param_5 == 0) {
      param_5 = 1;
      goto LAB_140014f9e;
    }
    if (param_5 < 1000000) {
      if (param_5 < 8) goto LAB_140014f9e;
      uVar8 = 0x27;
      if (param_5 < 0x27) {
        uVar8 = (ulonglong)param_5;
      }
    }
    else {
      uVar8 = 0x27;
      param_5 = 1000000;
    }
    pfVar6 = (float *)&DAT_1400da8b0;
  }
  pfVar10 = pfVar6;
  for (pfVar9 = pfVar6;
      (pfVar9 != pfVar6 + uVar8 + 5 && (pfVar10 = pfVar9, (uint)*pfVar9 < (uint)param_4));
      pfVar9 = pfVar9 + 1) {
    pfVar10 = pfVar6 + uVar8 + 5;
  }
  iVar2 = (int)((ulonglong)((longlong)pfVar10 - (longlong)pfVar6) >> 2);
  iVar5 = iVar2 + -5;
  if (iVar5 < -4 || (int)param_5 <= iVar5) {
    uVar12 = 0x70;
    if ((int)param_5 < 0x70) {
      uVar12 = param_5;
    }
    uVar12 = uVar12 - 1;
    pauVar4 = (undefined1 (*) [32])local_53;
    FUN_140014e51(local_d8,(undefined1 (*) [32])local_c8,pauVar4,param_4,uVar12);
    pauVar4 = (undefined1 (*) [32])
              FUN_140015f31((undefined1 (*) [32])local_c8,local_d8[0],
                            (int)CONCAT71((int7)((ulonglong)pauVar4 >> 8),0x65));
    pauVar14 = local_d8[0];
    pauVar15 = pauVar4;
  }
  else {
    uVar3 = (param_5 - iVar2) + 4;
    uVar12 = 0x25;
    if ((int)uVar3 < 0x25) {
      uVar12 = uVar3;
    }
    FUN_140014e92((longlong *)local_d8,(undefined1 (*) [32])local_c8,(undefined1 (*) [32])local_53,
                  param_4,uVar12);
    pauVar4 = local_d8[0];
    pauVar14 = (undefined1 (*) [32])0x0;
    pauVar15 = (undefined1 (*) [32])0x0;
  }
  if (0 < (int)uVar12) {
    do {
      pauVar11 = pauVar4;
      cVar1 = *(char *)((longlong)pauVar11[-1] + 0x1f);
      pauVar4 = (undefined1 (*) [32])((longlong)pauVar11[-1] + 0x1f);
    } while (cVar1 == '0');
    if (cVar1 != '.') {
      pauVar4 = pauVar11;
    }
  }
  uVar8 = (longlong)pauVar4 - (longlong)local_c8;
  uVar13 = 0x84;
  if ((longlong)uVar8 <= (longlong)param_3 - (longlong)param_2) {
    FUN_1400b3550(param_2,local_c8,uVar8);
    puVar7 = (undefined8 *)((longlong)param_2 + uVar8);
    if (iVar5 < -4 || (int)param_5 <= iVar5) {
      uVar8 = (longlong)pauVar14 - (longlong)pauVar15;
      if ((longlong)param_3 - (longlong)puVar7 < (longlong)uVar8) goto LAB_14001511c;
      FUN_1400b3550(puVar7,(undefined8 *)pauVar15,uVar8);
      puVar7 = (undefined8 *)((longlong)puVar7 + uVar8);
    }
    param_3 = puVar7;
    uVar13 = 0;
  }
LAB_14001511c:
  *param_1 = (longlong)param_3;
  *(undefined4 *)(param_1 + 1) = uVar13;
LAB_140015123:
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_108)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_108);
}

