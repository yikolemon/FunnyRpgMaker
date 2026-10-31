/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140124874 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_140124874(uint param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  code *pcVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  undefined4 local_res10;
  longlong *plVar10;
  
  plVar10 = (longlong *)0x0;
  plVar9 = (longlong *)0x0;
  local_res10 = 0;
  bVar1 = true;
  if (param_1 == 2) {
LAB_1401248cb:
    if (param_1 == 2) {
      puVar8 = (ulonglong *)&DAT_140355608;
    }
    else if (param_1 == 6) {
LAB_14012496d:
      puVar8 = &DAT_140355618;
      plVar9 = plVar10;
    }
    else if (param_1 == 0xf) {
      puVar8 = (ulonglong *)&DAT_140355620;
    }
    else if (param_1 == 0x15) {
      puVar8 = (ulonglong *)&DAT_140355610;
      plVar9 = plVar10;
    }
    else {
      if (param_1 == 0x16) goto LAB_14012496d;
      puVar8 = (ulonglong *)0x0;
      plVar9 = plVar10;
    }
  }
  else {
    if (param_1 != 4) {
      if (param_1 != 6) {
        if ((param_1 == 8) || (param_1 == 0xb)) goto LAB_1401248fb;
        if ((param_1 != 0xf) && ((param_1 != 0x15 && (param_1 != 0x16)))) goto LAB_14012494d;
      }
      goto LAB_1401248cb;
    }
LAB_1401248fb:
    plVar9 = (longlong *)FUN_1401215d8();
    if (plVar9 == (longlong *)0x0) {
      return 0xffffffff;
    }
    lVar4 = *plVar9;
    lVar3 = DAT_140167330 * 0x10 + lVar4;
    for (; lVar4 != lVar3; lVar4 = lVar4 + 0x10) {
      if (*(uint *)(lVar4 + 4) == param_1) goto LAB_140124948;
    }
    lVar4 = 0;
LAB_140124948:
    if (lVar4 == 0) {
LAB_14012494d:
      puVar2 = (undefined4 *)FUN_140113dd4();
      *puVar2 = 0x16;
      FUN_140120ee8();
      return 0xffffffff;
    }
    puVar8 = (ulonglong *)(lVar4 + 8);
    bVar1 = false;
  }
  lVar4 = 0;
  if (bVar1) {
    __acrt_lock(3);
  }
  pcVar7 = (code *)*puVar8;
  if (bVar1) {
    bVar5 = (byte)DAT_1401c9640 & 0x3f;
    pcVar7 = (code *)(((ulonglong)pcVar7 ^ DAT_1401c9640) >> bVar5 |
                     ((ulonglong)pcVar7 ^ DAT_1401c9640) << 0x40 - bVar5);
  }
  if (pcVar7 == (code *)0x1) goto LAB_140124a56;
  if (pcVar7 == (code *)0x0) {
    if (bVar1) {
      __acrt_unlock(3);
    }
                    /* WARNING: Subroutine does not return */
    FUN_1401115f4(3);
  }
  if ((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) {
    lVar4 = plVar9[1];
    plVar9[1] = 0;
    if (param_1 == 8) {
      lVar3 = FUN_140121578();
      local_res10 = *(undefined4 *)(lVar3 + 0x10);
      lVar3 = FUN_140121578();
      *(undefined4 *)(lVar3 + 0x10) = 0x8c;
      goto LAB_140124a0e;
    }
  }
  else {
LAB_140124a0e:
    if (param_1 == 8) {
      lVar3 = DAT_140167338 * 0x10 + *plVar9;
      lVar6 = DAT_140167340 * 0x10 + lVar3;
      for (; lVar3 != lVar6; lVar3 = lVar3 + 0x10) {
        *(undefined8 *)(lVar3 + 8) = 0;
      }
      goto LAB_140124a56;
    }
  }
  *puVar8 = DAT_1401c9640;
LAB_140124a56:
  if (bVar1) {
    __acrt_unlock(3);
  }
  if (pcVar7 != (code *)0x1) {
    if (param_1 == 8) {
      lVar3 = FUN_140121578();
      (*pcVar7)(8,*(undefined4 *)(lVar3 + 0x10));
    }
    else {
      (*pcVar7)(param_1);
    }
    if (((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) &&
       (plVar9[1] = lVar4, param_1 == 8)) {
      lVar4 = FUN_140121578();
      *(undefined4 *)(lVar4 + 0x10) = local_res10;
    }
  }
  return 0;
}

