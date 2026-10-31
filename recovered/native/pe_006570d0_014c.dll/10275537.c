/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10275537 */

void FUN_10275537(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1027bc60(param_2,0x40,param_1,0x20);
  if (iVar1 == 0) {
    FUN_10274283(param_4,0,param_1,0xffffffff,param_3,0x40,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

