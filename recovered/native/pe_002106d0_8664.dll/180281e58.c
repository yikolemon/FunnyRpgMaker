/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180281e58 */

uint FUN_180281e58(undefined8 param_1,undefined8 *param_2)

{
  uint in_EAX;
  int iVar1;
  
  if (((*(int *)(param_2 + 2) == 0) && (param_2[1] == 4)) &&
     (in_EAX = FUN_180281d60(*param_2), (char)in_EAX != '\0')) {
    iVar1 = FUN_18029a440();
    if ((iVar1 == 0) && (iVar1 = FUN_18029a440(), iVar1 == 0)) {
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return in_EAX & 0xffffff00;
}

