/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10276ec5 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 FUN_10276ec5(int param_1)

{
  bool bVar1;
  __crt_signal_action_t *p_Var2;
  undefined4 *puVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 local_38;
  int local_34;
  void *local_14;
  
  piVar7 = (int *)0x0;
  local_38 = 0;
  bVar1 = true;
  if (param_1 < 0xc) {
    if (param_1 != 0xb) {
      if (param_1 == 2) goto LAB_10276f4e;
      if (param_1 != 4) {
        if (param_1 == 6) goto LAB_10276f4e;
        if (param_1 != 8) goto LAB_10276f21;
      }
    }
    piVar7 = (int *)FUN_1027441e();
    if (piVar7 == (int *)0x0) {
      ExceptionList = local_14;
      return 0xffffffff;
    }
    p_Var2 = siglookup(param_1,(__crt_signal_action_t *)*piVar7);
    if (p_Var2 == (__crt_signal_action_t *)0x0) {
LAB_10276f21:
      puVar3 = (undefined4 *)FUN_10268ffd();
      *puVar3 = 0x16;
      FUN_10273ea8();
      ExceptionList = local_14;
      return 0xffffffff;
    }
    p_Var2 = p_Var2 + 8;
    bVar1 = false;
  }
  else {
    if (((param_1 != 0xf) && (param_1 != 0x15)) && (param_1 != 0x16)) goto LAB_10276f21;
LAB_10276f4e:
    p_Var2 = (__crt_signal_action_t *)get_global_action_nolock(param_1);
  }
  local_34 = 0;
  if (bVar1) {
    ___acrt_lock(3);
  }
  pcVar4 = *(code **)p_Var2;
  if (bVar1) {
    pcVar4 = (code *)FUN_1026860d(pcVar4);
  }
  if (pcVar4 == (code *)0x1) goto LAB_1027700f;
  if (pcVar4 == (code *)0x0) {
    if (bVar1) {
      ___acrt_unlock(3);
    }
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (((param_1 == 8) || (param_1 == 0xb)) || (param_1 == 4)) {
    local_34 = piVar7[1];
    piVar7[1] = 0;
    if (param_1 == 8) {
      iVar5 = FUN_102743cd();
      local_38 = *(undefined4 *)(iVar5 + 8);
      iVar5 = FUN_102743cd();
      *(undefined4 *)(iVar5 + 8) = 0x8c;
      goto LAB_10276fde;
    }
  }
  else {
LAB_10276fde:
    if (param_1 == 8) {
      iVar5 = DAT_10324db4 * 0xc + *piVar7;
      iVar6 = DAT_10324db8 * 0xc + iVar5;
      for (; iVar5 != iVar6; iVar5 = iVar5 + 0xc) {
        *(undefined4 *)(iVar5 + 8) = 0;
      }
      goto LAB_1027700f;
    }
  }
  *(undefined4 *)p_Var2 = DAT_10388d00;
LAB_1027700f:
  FUN_1027704f();
  if (pcVar4 != (code *)0x1) {
    if (param_1 == 8) {
      iVar5 = FUN_102743cd();
      (*(code *)PTR_guard_check_icall_1035d810)(8,*(undefined4 *)(iVar5 + 8));
      (*pcVar4)();
    }
    else {
      (*(code *)PTR_guard_check_icall_1035d810)(param_1);
      (*pcVar4)();
      if ((param_1 != 0xb) && (param_1 != 4)) {
        ExceptionList = local_14;
        return 0;
      }
    }
    piVar7[1] = local_34;
    if (param_1 == 8) {
      iVar5 = FUN_102743cd();
      *(undefined4 *)(iVar5 + 8) = local_38;
    }
  }
  ExceptionList = local_14;
  return 0;
}

