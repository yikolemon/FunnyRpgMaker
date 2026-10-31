/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140112000 */

void FUN_140112000(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (0 < param_3) {
    iVar2 = 0;
    do {
      iVar1 = FUN_140127410();
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  return;
}

