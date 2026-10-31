/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180282220 */

void FUN_180282220(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_18029a580();
  if (iVar1 == 0) {
    iVar1 = FUN_18029a580();
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

