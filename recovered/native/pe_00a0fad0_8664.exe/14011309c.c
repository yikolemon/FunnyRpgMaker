/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011309c */

void FUN_14011309c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1401275e0();
  if (iVar1 == 0) {
    iVar1 = FUN_1401275e0();
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

