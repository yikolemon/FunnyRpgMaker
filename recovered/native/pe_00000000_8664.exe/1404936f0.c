/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404936f0 */

void FUN_1404936f0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1404aba50();
  if (iVar1 == 0) {
    iVar1 = FUN_1404aba50();
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

