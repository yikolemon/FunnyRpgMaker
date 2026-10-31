/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026c8c3 */

undefined4 * __thiscall
FUN_1026c8c3(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  param_1[2] = param_4;
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar1 = FUN_1027bc60(param_2,param_3,param_4 + 0x250,0x55);
  if (iVar1 == 0) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

