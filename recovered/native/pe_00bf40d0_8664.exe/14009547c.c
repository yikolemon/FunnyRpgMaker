/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009547c */

void FUN_14009547c(undefined8 *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = FUN_1400a6f60((short *)(param_1[2] + 600),0x55,param_2,param_3);
  if (iVar1 == 0) {
    iVar1 = FUN_1400a6f60((short *)*param_1,param_1[1],param_2,param_3);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 3) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

