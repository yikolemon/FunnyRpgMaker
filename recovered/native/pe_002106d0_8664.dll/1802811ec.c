/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802811ec */

void FUN_1802811ec(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = FUN_180291780();
  if (iVar1 == 0) {
    if (*(short *)(param_3 + 0x80) != 0) {
      FUN_180281184(param_1,param_2,2,&DAT_180387884,(short *)(param_3 + 0x80));
    }
    if (*(short *)(param_3 + 0x100) != 0) {
      FUN_180281184(param_1,param_2,2,&DAT_1803878bc,(short *)(param_3 + 0x100));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

