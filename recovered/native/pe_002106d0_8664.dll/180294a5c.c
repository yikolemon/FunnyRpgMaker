/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180294a5c */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180294a5c(uint param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte bVar6;
  longlong lVar7;
  code *pcVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  undefined4 local_res10;
  longlong *plVar11;
  
  plVar11 = (longlong *)0x0;
  plVar10 = (longlong *)0x0;
  local_res10 = 0;
  bVar1 = true;
  if (param_1 == 2) {
LAB_180294ab3:
    if (param_1 == 2) {
      puVar9 = (ulonglong *)&DAT_180421858;
    }
    else if (param_1 == 6) {
LAB_180294b55:
      puVar9 = &DAT_180421868;
      plVar10 = plVar11;
    }
    else if (param_1 == 0xf) {
      puVar9 = (ulonglong *)&DAT_180421870;
    }
    else if (param_1 == 0x15) {
      puVar9 = (ulonglong *)&DAT_180421860;
      plVar10 = plVar11;
    }
    else {
      if (param_1 == 0x16) goto LAB_180294b55;
      puVar9 = (ulonglong *)0x0;
      plVar10 = plVar11;
    }
  }
  else {
    if (param_1 != 4) {
      if (param_1 != 6) {
        if ((param_1 == 8) || (param_1 == 0xb)) goto LAB_180294ae3;
        if ((param_1 != 0xf) && ((param_1 != 0x15 && (param_1 != 0x16)))) goto LAB_180294b35;
      }
      goto LAB_180294ab3;
    }
LAB_180294ae3:
    plVar10 = (longlong *)FUN_180291138();
    if (plVar10 == (longlong *)0x0) {
      return 0xffffffff;
    }
    lVar4 = *plVar10;
    lVar3 = DAT_180350020 * 0x10 + lVar4;
    for (; lVar4 != lVar3; lVar4 = lVar4 + 0x10) {
      if (*(uint *)(lVar4 + 4) == param_1) goto LAB_180294b30;
    }
    lVar4 = 0;
LAB_180294b30:
    if (lVar4 == 0) {
LAB_180294b35:
      puVar2 = (undefined4 *)FUN_18027e66c();
      *puVar2 = 0x16;
      FUN_180290a50();
      return 0xffffffff;
    }
    puVar9 = (ulonglong *)(lVar4 + 8);
    bVar1 = false;
  }
  lVar4 = 0;
  if (bVar1) {
    __acrt_lock(3);
  }
  pcVar8 = (code *)*puVar9;
  if (bVar1) {
    bVar6 = (byte)DAT_180402640 & 0x3f;
    pcVar8 = (code *)(((ulonglong)pcVar8 ^ DAT_180402640) >> bVar6 |
                     ((ulonglong)pcVar8 ^ DAT_180402640) << 0x40 - bVar6);
  }
  if (pcVar8 == (code *)0x1) goto LAB_180294c3e;
  if (pcVar8 == (code *)0x0) {
    if (bVar1) {
      __acrt_unlock(3);
    }
    FUN_18027dc24(3);
    pcVar8 = (code *)swi(3);
    uVar5 = (*pcVar8)();
    return uVar5;
  }
  if ((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) {
    lVar4 = plVar10[1];
    plVar10[1] = 0;
    if (param_1 == 8) {
      lVar3 = FUN_1802910d8();
      local_res10 = *(undefined4 *)(lVar3 + 0x10);
      lVar3 = FUN_1802910d8();
      *(undefined4 *)(lVar3 + 0x10) = 0x8c;
      goto LAB_180294bf6;
    }
  }
  else {
LAB_180294bf6:
    if (param_1 == 8) {
      lVar3 = DAT_180350028 * 0x10 + *plVar10;
      lVar7 = DAT_180350030 * 0x10 + lVar3;
      for (; lVar3 != lVar7; lVar3 = lVar3 + 0x10) {
        *(undefined8 *)(lVar3 + 8) = 0;
      }
      goto LAB_180294c3e;
    }
  }
  *puVar9 = DAT_180402640;
LAB_180294c3e:
  if (bVar1) {
    __acrt_unlock(3);
  }
  if (pcVar8 != (code *)0x1) {
    if (param_1 == 8) {
      lVar3 = FUN_1802910d8();
      (*pcVar8)(8,*(undefined4 *)(lVar3 + 0x10));
    }
    else {
      (*pcVar8)(param_1);
    }
    if (((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) &&
       (plVar10[1] = lVar4, param_1 == 8)) {
      lVar4 = FUN_1802910d8();
      *(undefined4 *)(lVar4 + 0x10) = local_res10;
    }
  }
  return 0;
}

