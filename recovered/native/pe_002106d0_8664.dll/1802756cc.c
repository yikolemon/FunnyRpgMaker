/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802756cc */

undefined8 FUN_1802756cc(__uint64 *param_1)

{
  __uint64 *p_Var1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  wchar_t *pwVar5;
  
  p_Var1 = (__uint64 *)param_1[3];
  param_1[3] = (__uint64)(p_Var1 + 1);
  pwVar5 = (wchar_t *)*p_Var1;
  iVar2 = (int)param_1[6];
  if ((int)param_1[6] == -1) {
    iVar2 = 0x7fffffff;
  }
  param_1[8] = (__uint64)pwVar5;
  bVar3 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                    (*param_1,*(wchar_t *)((longlong)param_1 + 0x3a),
                     *(length_modifier *)((longlong)param_1 + 0x34));
  if (bVar3) {
    if (pwVar5 == (wchar_t *)0x0) {
      pwVar5 = L"(null)";
      param_1[8] = (__uint64)L"(null)";
    }
    *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
    uVar4 = FUN_18028cb80(pwVar5,(longlong)iVar2);
  }
  else {
    if (pwVar5 == (wchar_t *)0x0) {
      param_1[8] = (__uint64)"(null)";
    }
    uVar4 = FUN_180275768(param_1,iVar2,0);
  }
  *(undefined4 *)(param_1 + 9) = uVar4;
  return 1;
}

