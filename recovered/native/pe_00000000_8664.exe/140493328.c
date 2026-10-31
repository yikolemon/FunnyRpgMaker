/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140493328 */

uint FUN_140493328(undefined8 param_1,undefined8 *param_2)

{
  uint in_EAX;
  int iVar1;
  
  if (((*(int *)(param_2 + 2) == 0) && (param_2[1] == 4)) &&
     (in_EAX = FUN_140493230(*param_2), (char)in_EAX != '\0')) {
    iVar1 = FUN_1404ab910();
    if ((iVar1 == 0) && (iVar1 = FUN_1404ab910(), iVar1 == 0)) {
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return in_EAX & 0xffffff00;
}

