/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019da78 */

undefined8 FUN_14019da78(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  
  if (((*(int *)(param_2 + 2) == 0) && (param_2[1] - 2 < 2)) &&
     (cVar1 = FUN_14019da0c(*param_2), cVar1 != '\0')) {
    iVar2 = FUN_1401b5630();
    if ((iVar2 == 0) && (iVar2 = FUN_1401b5630(), iVar2 == 0)) {
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0;
}

