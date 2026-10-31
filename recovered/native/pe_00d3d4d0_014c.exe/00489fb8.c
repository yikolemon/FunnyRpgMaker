/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00489fb8 */

undefined4 __fastcall FUN_00489fb8(undefined4 *param_1)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  wchar_t *pwVar4;
  
  piVar1 = (int *)param_1[4];
  param_1[4] = piVar1 + 1;
  uVar3 = param_1[9];
  pwVar4 = (wchar_t *)*piVar1;
  if (uVar3 == 0xffffffff) {
    uVar3 = 0x7fffffff;
  }
  param_1[0xc] = pwVar4;
  bVar2 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                    (CONCAT44(param_1[1],*param_1),*(wchar_t *)((int)param_1 + 0x2e),param_1[10]);
  if (bVar2) {
    if (pwVar4 == (wchar_t *)0x0) {
      pwVar4 = L"(null)";
      param_1[0xc] = L"(null)";
    }
    *(undefined1 *)(param_1 + 0xe) = 1;
    uVar3 = FUN_004941c0(pwVar4,uVar3);
  }
  else {
    if (pwVar4 == (wchar_t *)0x0) {
      param_1[0xc] = "(null)";
    }
    uVar3 = FUN_0048a02d(param_1,uVar3);
  }
  param_1[0xd] = uVar3;
  return CONCAT31((int3)(uVar3 >> 8),1);
}

