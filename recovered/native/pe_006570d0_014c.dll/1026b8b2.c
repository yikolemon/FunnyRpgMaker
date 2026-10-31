/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026b8b2 */

void FUN_1026b8b2(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  if (0 < param_3) {
    puVar3 = &param_3;
    do {
      puVar3 = puVar3 + 1;
      iVar1 = FUN_1027ba80(param_1,param_2,*puVar3);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  return;
}

