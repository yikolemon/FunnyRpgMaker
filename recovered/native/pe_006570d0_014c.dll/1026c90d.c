/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026c90d */

void __fastcall FUN_1026c90d(undefined4 *param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 3) == '\0') {
    iVar1 = FUN_1027bc60(param_1[2] + 0x250,0x55,*param_1,param_1[1]);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return;
}

