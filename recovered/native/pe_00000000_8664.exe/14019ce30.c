/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019ce30 */

void FUN_14019ce30(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (0 < param_3) {
    iVar2 = 0;
    do {
      iVar1 = FUN_1401b5460();
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  return;
}

