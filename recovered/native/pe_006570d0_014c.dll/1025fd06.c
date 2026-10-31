/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025fd06 */

undefined4 __fastcall FUN_1025fd06(undefined4 *param_1)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  
  piVar1 = (int *)param_1[4];
  param_1[4] = piVar1 + 1;
  iVar4 = param_1[9];
  pcVar5 = (char *)*piVar1;
  if (iVar4 == -1) {
    iVar4 = 0x7fffffff;
  }
  param_1[0xc] = pcVar5;
  bVar2 = __crt_stdio_output::is_wide_character_specifier<char>
                    (CONCAT44(param_1[1],*param_1),*(char *)((int)param_1 + 0x2d),param_1[10]);
  if (bVar2) {
    if ((wchar_t *)pcVar5 == (wchar_t *)0x0) {
      param_1[0xc] = L"(null)";
      pcVar5 = (char *)L"(null)";
    }
    *(undefined1 *)(param_1 + 0xe) = 1;
    uVar3 = FUN_10271eb0(pcVar5,iVar4);
  }
  else {
    if ((wchar_t *)pcVar5 == (wchar_t *)0x0) {
      pcVar5 = "(null)";
      param_1[0xc] = "(null)";
    }
    uVar3 = FUN_10272090(pcVar5,iVar4);
  }
  param_1[0xd] = uVar3;
  return 1;
}

