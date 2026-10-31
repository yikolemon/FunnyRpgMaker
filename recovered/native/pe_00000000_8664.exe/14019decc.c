/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019decc */

void FUN_14019decc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1401b5630();
  if (iVar1 == 0) {
    iVar1 = FUN_1401b5630();
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

