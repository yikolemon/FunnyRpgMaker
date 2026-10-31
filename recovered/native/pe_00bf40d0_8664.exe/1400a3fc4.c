/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a3fc4 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1400a3fc4(uint param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  code *pcVar6;
  ulonglong *puVar7;
  __acrt_ptd *p_Var8;
  undefined4 local_res10;
  __acrt_ptd *p_Var9;
  
  p_Var9 = (__acrt_ptd *)0x0;
  p_Var8 = (__acrt_ptd *)0x0;
  local_res10 = 0;
  bVar1 = true;
  if (param_1 == 2) {
LAB_1400a401b:
    if (param_1 == 2) {
      puVar7 = (ulonglong *)&DAT_1401437c8;
    }
    else if (param_1 == 6) {
LAB_1400a40bd:
      puVar7 = &DAT_1401437d8;
      p_Var8 = p_Var9;
    }
    else if (param_1 == 0xf) {
      puVar7 = (ulonglong *)&DAT_1401437e0;
    }
    else if (param_1 == 0x15) {
      puVar7 = (ulonglong *)&DAT_1401437d0;
      p_Var8 = p_Var9;
    }
    else {
      if (param_1 == 0x16) goto LAB_1400a40bd;
      puVar7 = (ulonglong *)0x0;
      p_Var8 = p_Var9;
    }
  }
  else {
    if (param_1 != 4) {
      if (param_1 != 6) {
        if ((param_1 == 8) || (param_1 == 0xb)) goto LAB_1400a404b;
        if ((param_1 != 0xf) && ((param_1 != 0x15 && (param_1 != 0x16)))) goto LAB_1400a409d;
      }
      goto LAB_1400a401b;
    }
LAB_1400a404b:
    p_Var8 = FUN_1400a1588();
    if (p_Var8 == (__acrt_ptd *)0x0) {
      return 0xffffffff;
    }
    lVar3 = *(longlong *)p_Var8;
    lVar2 = DAT_14010d0f0 * 0x10 + lVar3;
    for (; lVar3 != lVar2; lVar3 = lVar3 + 0x10) {
      if (*(uint *)(lVar3 + 4) == param_1) goto LAB_1400a4098;
    }
    lVar3 = 0;
LAB_1400a4098:
    if (lVar3 == 0) {
LAB_1400a409d:
      p_Var8 = FUN_140095e5c();
      *(undefined4 *)p_Var8 = 0x16;
      FUN_1400a0ea0();
      return 0xffffffff;
    }
    puVar7 = (ulonglong *)(lVar3 + 8);
    bVar1 = false;
  }
  lVar3 = 0;
  if (bVar1) {
    __acrt_lock(3);
  }
  pcVar6 = (code *)*puVar7;
  if (bVar1) {
    bVar4 = (byte)DAT_14012ea80 & 0x3f;
    pcVar6 = (code *)(((ulonglong)pcVar6 ^ DAT_14012ea80) >> bVar4 |
                     ((ulonglong)pcVar6 ^ DAT_14012ea80) << 0x40 - bVar4);
  }
  if (pcVar6 == (code *)0x1) goto LAB_1400a41a6;
  if (pcVar6 == (code *)0x0) {
    if (bVar1) {
      __acrt_unlock(3);
    }
                    /* WARNING: Subroutine does not return */
    FUN_1400939e0(3);
  }
  if ((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) {
    lVar3 = *(longlong *)(p_Var8 + 8);
    *(longlong *)(p_Var8 + 8) = 0;
    if (param_1 == 8) {
      lVar2 = FUN_1400a1528();
      local_res10 = *(undefined4 *)(lVar2 + 0x10);
      lVar2 = FUN_1400a1528();
      *(undefined4 *)(lVar2 + 0x10) = 0x8c;
      goto LAB_1400a415e;
    }
  }
  else {
LAB_1400a415e:
    if (param_1 == 8) {
      lVar2 = DAT_14010d0f8 * 0x10 + *(longlong *)p_Var8;
      lVar5 = DAT_14010d100 * 0x10 + lVar2;
      for (; lVar2 != lVar5; lVar2 = lVar2 + 0x10) {
        *(undefined8 *)(lVar2 + 8) = 0;
      }
      goto LAB_1400a41a6;
    }
  }
  *puVar7 = DAT_14012ea80;
LAB_1400a41a6:
  if (bVar1) {
    __acrt_unlock(3);
  }
  if (pcVar6 != (code *)0x1) {
    if (param_1 == 8) {
      lVar2 = FUN_1400a1528();
      (*pcVar6)(8,*(undefined4 *)(lVar2 + 0x10));
    }
    else {
      (*pcVar6)(param_1);
    }
    if (((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) &&
       (*(longlong *)(p_Var8 + 8) = lVar3, param_1 == 8)) {
      lVar3 = FUN_1400a1528();
      *(undefined4 *)(lVar3 + 0x10) = local_res10;
    }
  }
  return 0;
}

