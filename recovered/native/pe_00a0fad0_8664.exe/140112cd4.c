/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140112cd4 */

uint FUN_140112cd4(undefined8 param_1,undefined8 *param_2)

{
  uint in_EAX;
  int iVar1;
  
  if (((*(int *)(param_2 + 2) == 0) && (param_2[1] == 4)) &&
     (in_EAX = FUN_140112bdc(*param_2), (char)in_EAX != '\0')) {
    iVar1 = FUN_1401274a0();
    if ((iVar1 == 0) && (iVar1 = FUN_1401274a0(), iVar1 == 0)) {
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return in_EAX & 0xffffff00;
}

