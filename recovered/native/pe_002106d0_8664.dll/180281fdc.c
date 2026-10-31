/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180281fdc */

uint FUN_180281fdc(undefined8 param_1,longlong param_2)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0x10) == 2) {
    iVar2 = FUN_18029a580();
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    uVar1 = 1;
  }
  else {
    uVar1 = in_EAX & 0xffffff00;
  }
  return uVar1;
}

