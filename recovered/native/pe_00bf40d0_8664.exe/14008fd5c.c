/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008fd5c */

undefined8 FUN_14008fd5c(__uint64 *param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 extraout_var_00;
  LPWSTR pWVar6;
  __uint64 *p_Var7;
  byte local_res8;
  undefined1 local_res9;
  undefined7 extraout_var;
  
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  puVar2 = (undefined2 *)param_1[3];
  param_1[3] = (__uint64)(puVar2 + 4);
  uVar1 = *puVar2;
  local_res9 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                         (*param_1,*(wchar_t *)((longlong)param_1 + 0x3a),
                          *(length_modifier *)((longlong)param_1 + 0x34));
  uVar5 = CONCAT71(extraout_var,local_res9);
  if ((bool)local_res9) {
    p_Var7 = (__uint64 *)param_1[0x8b];
    if ((__uint64 *)param_1[0x8b] == (__uint64 *)0x0) {
      p_Var7 = param_1 + 10;
    }
    *(undefined2 *)p_Var7 = uVar1;
  }
  else {
    local_res8 = (byte)uVar1;
    plVar3 = (longlong *)param_1[1];
    if ((char)plVar3[5] == '\0') {
      FUN_14008f0b0(plVar3);
    }
    pWVar6 = (LPWSTR)param_1[0x8b];
    if ((LPWSTR)param_1[0x8b] == (LPWSTR)0x0) {
      pWVar6 = (LPWSTR)(param_1 + 10);
    }
    iVar4 = FUN_1400a55a0(pWVar6,&local_res8,(longlong)*(int *)(plVar3[3] + 8),plVar3);
    uVar5 = CONCAT44(extraout_var_00,iVar4);
    if (iVar4 < 0) {
      *(undefined1 *)(param_1 + 7) = 1;
    }
  }
  *(undefined4 *)(param_1 + 9) = 1;
  p_Var7 = (__uint64 *)param_1[0x8b];
  if ((__uint64 *)param_1[0x8b] == (__uint64 *)0x0) {
    p_Var7 = param_1 + 10;
  }
  param_1[8] = (__uint64)p_Var7;
  return CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
}

