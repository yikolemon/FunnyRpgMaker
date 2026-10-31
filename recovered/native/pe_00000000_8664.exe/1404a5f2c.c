/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a5f2c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1404a5f2c(uint param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte bVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  undefined4 local_res10;
  longlong *plVar12;
  
  plVar12 = (longlong *)0x0;
  plVar11 = (longlong *)0x0;
  local_res10 = 0;
  bVar2 = true;
  if (param_1 == 2) {
LAB_1404a5f83:
    if (param_1 == 2) {
      puVar10 = (ulonglong *)&DAT_140632d28;
    }
    else if (param_1 == 6) {
LAB_1404a6025:
      puVar10 = &DAT_140632d38;
      plVar11 = plVar12;
    }
    else if (param_1 == 0xf) {
      puVar10 = (ulonglong *)&DAT_140632d40;
    }
    else if (param_1 == 0x15) {
      puVar10 = (ulonglong *)&DAT_140632d30;
      plVar11 = plVar12;
    }
    else {
      if (param_1 == 0x16) goto LAB_1404a6025;
      puVar10 = (ulonglong *)0x0;
      plVar11 = plVar12;
    }
  }
  else {
    if (param_1 != 4) {
      if (param_1 != 6) {
        if ((param_1 == 8) || (param_1 == 0xb)) goto LAB_1404a5fb3;
        if ((param_1 != 0xf) && ((param_1 != 0x15 && (param_1 != 0x16)))) goto LAB_1404a6005;
      }
      goto LAB_1404a5f83;
    }
LAB_1404a5fb3:
    plVar11 = (longlong *)FUN_1404a2608();
    if (plVar11 == (longlong *)0x0) {
      return 0xffffffff;
    }
    lVar5 = *plVar11;
    lVar4 = DAT_1405614f0 * 0x10 + lVar5;
    for (; lVar5 != lVar4; lVar5 = lVar5 + 0x10) {
      if (*(uint *)(lVar5 + 4) == param_1) goto LAB_1404a6000;
    }
    lVar5 = 0;
LAB_1404a6000:
    if (lVar5 == 0) {
LAB_1404a6005:
      puVar3 = (undefined4 *)FUN_14048fb3c();
      *puVar3 = 0x16;
      FUN_1404a1f20();
      return 0xffffffff;
    }
    puVar10 = (ulonglong *)(lVar5 + 8);
    bVar2 = false;
  }
  lVar5 = 0;
  if (bVar2) {
    FID_conflict___acrt_lock(3);
  }
  uVar9 = *puVar10;
  if (bVar2) {
    bVar7 = (byte)ram0x000140613b10 & 0x3f;
    uVar9 = (uVar9 ^ ram0x000140613b10) >> bVar7 | (uVar9 ^ ram0x000140613b10) << 0x40 - bVar7;
  }
  if (uVar9 == 1) goto LAB_1404a610e;
  if (uVar9 == 0) {
    if (bVar2) {
      FID_conflict___acrt_lock(3);
    }
    FUN_14048f0f4(3);
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  if ((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) {
    lVar5 = plVar11[1];
    plVar11[1] = 0;
    if (param_1 == 8) {
      lVar4 = FUN_1404a25a8();
      local_res10 = *(undefined4 *)(lVar4 + 0x10);
      lVar4 = FUN_1404a25a8();
      *(undefined4 *)(lVar4 + 0x10) = 0x8c;
      goto LAB_1404a60c6;
    }
  }
  else {
LAB_1404a60c6:
    if (param_1 == 8) {
      lVar4 = DAT_1405614f8 * 0x10 + *plVar11;
      lVar8 = DAT_140561500 * 0x10 + lVar4;
      for (; lVar4 != lVar8; lVar4 = lVar4 + 0x10) {
        *(undefined8 *)(lVar4 + 8) = 0;
      }
      goto LAB_1404a610e;
    }
  }
  *puVar10 = ram0x000140613b10;
LAB_1404a610e:
  if (bVar2) {
    FID_conflict___acrt_lock(3);
  }
  if (uVar9 != 1) {
    if (param_1 == 8) {
      lVar4 = FUN_1404a25a8();
      FUN_1404b9600(8,*(undefined4 *)(lVar4 + 0x10));
    }
    else {
      FUN_1404b9600(param_1);
    }
    if (((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) &&
       (plVar11[1] = lVar5, param_1 == 8)) {
      lVar5 = FUN_1404a25a8();
      *(undefined4 *)(lVar5 + 0x10) = local_res10;
    }
  }
  return 0;
}

