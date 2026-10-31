/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026c93d */

void __thiscall FUN_1026c93d(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1027bc60(*(int *)(param_1 + 8) + 0x250,0x55,param_2,param_3);
  if (iVar1 == 0) {
    FUN_1026c981(param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

