/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026c981 */

void __thiscall FUN_1026c981(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1027bc60(*param_1,param_1[1],param_2,param_3);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

