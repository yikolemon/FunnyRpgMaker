/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049817c */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 __cdecl FUN_0049817c(int param_1)

{
  bool bVar1;
  __crt_signal_action_t *p_Var2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  __acrt_ptd *p_Var6;
  undefined4 local_38;
  int local_34;
  void *local_14;
  
  p_Var6 = (__acrt_ptd *)0x0;
  local_38 = 0;
  bVar1 = true;
  if (param_1 < 0xc) {
    if (param_1 != 0xb) {
      if (param_1 == 2) goto LAB_00498205;
      if (param_1 != 4) {
        if (param_1 == 6) goto LAB_00498205;
        if (param_1 != 8) goto LAB_004981d8;
      }
    }
    p_Var6 = FUN_004961fe();
    if (p_Var6 == (__acrt_ptd *)0x0) {
      ExceptionList = local_14;
      return 0xffffffff;
    }
    p_Var2 = siglookup(param_1,*(__crt_signal_action_t **)p_Var6);
    if (p_Var2 == (__crt_signal_action_t *)0x0) {
LAB_004981d8:
      p_Var6 = FUN_0048f66d();
      *(undefined4 *)p_Var6 = 0x16;
      FUN_00495c88();
      ExceptionList = local_14;
      return 0xffffffff;
    }
    p_Var2 = p_Var2 + 8;
    bVar1 = false;
  }
  else {
    if (((param_1 != 0xf) && (param_1 != 0x15)) && (param_1 != 0x16)) goto LAB_004981d8;
LAB_00498205:
    p_Var2 = (__crt_signal_action_t *)get_global_action_nolock(param_1);
  }
  local_34 = 0;
  if (bVar1) {
    ___acrt_lock(3);
  }
  pcVar3 = *(code **)p_Var2;
  if (bVar1) {
    pcVar3 = (code *)FUN_0048d68f((uint)pcVar3);
  }
  if (pcVar3 == (code *)0x1) goto LAB_004982c6;
  if (pcVar3 == (code *)0x0) {
    if (bVar1) {
      ___acrt_unlock(3);
    }
                    /* WARNING: Subroutine does not return */
    FUN_0048d3b1(3);
  }
  if (((param_1 == 8) || (param_1 == 0xb)) || (param_1 == 4)) {
    local_34 = *(int *)(p_Var6 + 4);
    *(int *)(p_Var6 + 4) = 0;
    if (param_1 == 8) {
      iVar4 = FUN_004961ad();
      local_38 = *(undefined4 *)(iVar4 + 8);
      iVar4 = FUN_004961ad();
      *(undefined4 *)(iVar4 + 8) = 0x8c;
      goto LAB_00498295;
    }
  }
  else {
LAB_00498295:
    if (param_1 == 8) {
      iVar4 = DAT_004f9324 * 0xc + *(int *)p_Var6;
      iVar5 = DAT_004f9328 * 0xc + iVar4;
      for (; iVar4 != iVar5; iVar4 = iVar4 + 0xc) {
        *(undefined4 *)(iVar4 + 8) = 0;
      }
      goto LAB_004982c6;
    }
  }
  *(uint *)p_Var2 = DAT_0050e8c0;
LAB_004982c6:
  FUN_00498306();
  if (pcVar3 != (code *)0x1) {
    if (param_1 == 8) {
      iVar4 = FUN_004961ad();
      (*(code *)PTR_guard_check_icall_00508898)(8,*(undefined4 *)(iVar4 + 8));
      (*pcVar3)();
    }
    else {
      (*(code *)PTR_guard_check_icall_00508898)(param_1);
      (*pcVar3)();
      if ((param_1 != 0xb) && (param_1 != 4)) {
        ExceptionList = local_14;
        return 0;
      }
    }
    *(int *)(p_Var6 + 4) = local_34;
    if (param_1 == 8) {
      iVar4 = FUN_004961ad();
      *(undefined4 *)(iVar4 + 8) = local_38;
    }
  }
  ExceptionList = local_14;
  return 0;
}

