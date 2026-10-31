/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b25fc */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1401b25fc(uint param_1)

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
LAB_1401b2653:
    if (param_1 == 2) {
      puVar8 = (ulonglong *)&DAT_140f33208;
    }
    else if (param_1 == 6) {
LAB_1401b26f5:
      puVar8 = &DAT_140f33218;
      plVar9 = plVar10;
    }
    else if (param_1 == 0xf) {
      puVar8 = (ulonglong *)&DAT_140f33220;
    }
    else if (param_1 == 0x15) {
      puVar8 = (ulonglong *)&DAT_140f33210;
      plVar9 = plVar10;
    }
    else {
      if (param_1 == 0x16) goto LAB_1401b26f5;
      puVar8 = (ulonglong *)0x0;
      plVar9 = plVar10;
    }
  }
  else {
    if (param_1 != 4) {
      if (param_1 != 6) {
        if ((param_1 == 8) || (param_1 == 0xb)) goto LAB_1401b2683;
        if ((param_1 != 0xf) && ((param_1 != 0x15 && (param_1 != 0x16)))) goto LAB_1401b26d5;
      }
      goto LAB_1401b2653;
    }
LAB_1401b2683:
    plVar9 = (longlong *)FUN_1401aed28();
    if (plVar9 == (longlong *)0x0) {
      return 0xffffffff;
    }
    lVar4 = *plVar9;
    lVar3 = DAT_140eb4410 * 0x10 + lVar4;
    for (; lVar4 != lVar3; lVar4 = lVar4 + 0x10) {
      if (*(uint *)(lVar4 + 4) == param_1) goto LAB_1401b26d0;
    }
    lVar4 = 0;
LAB_1401b26d0:
    if (lVar4 == 0) {
LAB_1401b26d5:
      puVar2 = (undefined4 *)FUN_14019e8cc();
      *puVar2 = 0x16;
      FUN_1401ae640();
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
    bVar5 = (byte)DAT_140f17b40 & 0x3f;
    pcVar7 = (code *)(((ulonglong)pcVar7 ^ DAT_140f17b40) >> bVar5 |
                     ((ulonglong)pcVar7 ^ DAT_140f17b40) << 0x40 - bVar5);
  }
  if (pcVar7 == (code *)0x1) goto LAB_1401b27de;
  if (pcVar7 == (code *)0x0) {
    if (bVar1) {
      __acrt_unlock(3);
    }
                    /* WARNING: Subroutine does not return */
    FUN_14019c430(3);
  }
  if ((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) {
    lVar4 = plVar9[1];
    plVar9[1] = 0;
    if (param_1 == 8) {
      lVar3 = FUN_1401aecc8();
      local_res10 = *(undefined4 *)(lVar3 + 0x10);
      lVar3 = FUN_1401aecc8();
      *(undefined4 *)(lVar3 + 0x10) = 0x8c;
      goto LAB_1401b2796;
    }
  }
  else {
LAB_1401b2796:
    if (param_1 == 8) {
      lVar3 = DAT_140eb4418 * 0x10 + *plVar9;
      lVar6 = DAT_140eb4420 * 0x10 + lVar3;
      for (; lVar3 != lVar6; lVar3 = lVar3 + 0x10) {
        *(undefined8 *)(lVar3 + 8) = 0;
      }
      goto LAB_1401b27de;
    }
  }
  *puVar8 = DAT_140f17b40;
LAB_1401b27de:
  if (bVar1) {
    __acrt_unlock(3);
  }
  if (pcVar7 != (code *)0x1) {
    if (param_1 == 8) {
      lVar3 = FUN_1401aecc8();
      (*pcVar7)(8,*(undefined4 *)(lVar3 + 0x10));
    }
    else {
      (*pcVar7)(param_1);
    }
    if (((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) &&
       (plVar9[1] = lVar4, param_1 == 8)) {
      lVar4 = FUN_1401aecc8();
      *(undefined4 *)(lVar4 + 0x10) = local_res10;
    }
  }
  return 0;
}

