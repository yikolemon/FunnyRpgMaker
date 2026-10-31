/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026151f */

undefined4 __fastcall FUN_1026151f(undefined4 *param_1)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  piVar1 = (int *)param_1[4];
  param_1[4] = piVar1 + 1;
  iVar4 = param_1[9];
  pwVar5 = (wchar_t *)*piVar1;
  if (iVar4 == -1) {
    iVar4 = 0x7fffffff;
  }
  param_1[0xc] = pwVar5;
  bVar2 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                    (CONCAT44(param_1[1],*param_1),*(wchar_t *)((int)param_1 + 0x2e),param_1[10]);
  if (bVar2) {
    if (pwVar5 == (wchar_t *)0x0) {
      pwVar5 = L"(null)";
      param_1[0xc] = L"(null)";
    }
    *(undefined1 *)(param_1 + 0xe) = 1;
    uVar3 = FUN_10271eb0(pwVar5,iVar4);
  }
  else {
    if (pwVar5 == (wchar_t *)0x0) {
      param_1[0xc] = "(null)";
    }
    uVar3 = FUN_10261594(iVar4,0);
  }
  param_1[0xd] = uVar3;
  return 1;
}

