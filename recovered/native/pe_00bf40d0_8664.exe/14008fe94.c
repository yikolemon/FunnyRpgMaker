/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008fe94 */

undefined8 FUN_14008fe94(__uint64 *param_1)

{
  __uint64 *p_Var1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  wchar_t *pwVar5;
  
  p_Var1 = (__uint64 *)param_1[3];
  param_1[3] = (__uint64)(p_Var1 + 1);
  pwVar5 = (wchar_t *)*p_Var1;
  iVar3 = (int)param_1[6];
  if ((int)param_1[6] == -1) {
    iVar3 = 0x7fffffff;
  }
  param_1[8] = (__uint64)pwVar5;
  bVar2 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                    (*param_1,*(wchar_t *)((longlong)param_1 + 0x3a),
                     *(length_modifier *)((longlong)param_1 + 0x34));
  if (bVar2) {
    if ((undefined1 (*) [32])pwVar5 == (undefined1 (*) [32])0x0) {
      pwVar5 = L"(null)";
      param_1[8] = (__uint64)L"(null)";
    }
    *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
    uVar4 = FUN_14009d080((undefined1 (*) [32])pwVar5,(longlong)iVar3);
  }
  else {
    if ((undefined1 (*) [32])pwVar5 == (undefined1 (*) [32])0x0) {
      param_1[8] = (__uint64)"(null)";
    }
    iVar3 = FUN_14008ff30((longlong)param_1,iVar3);
    uVar4 = CONCAT44(extraout_var,iVar3);
  }
  *(int *)(param_1 + 9) = (int)uVar4;
  return CONCAT71((int7)(uVar4 >> 8),1);
}

