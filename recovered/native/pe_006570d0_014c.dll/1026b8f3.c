/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026b8f3 */

void FUN_1026b8f3(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_102749e0(param_1,param_2,param_3);
  if (iVar1 == 0) {
    if (*(short *)(param_3 + 0x80) != 0) {
      FUN_1026b8b2(param_1,param_2,2,&DAT_10359c78,(short *)(param_3 + 0x80));
    }
    if (*(short *)(param_3 + 0x100) != 0) {
      FUN_1026b8b2(param_1,param_2,2,&DAT_1035a700,(short *)(param_3 + 0x100));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

