/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b01f0 */

void FUN_1401b01f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1401b5630();
  if (iVar1 == 0) {
    FUN_1401aeb80(param_4,0,param_1,0xffffffff,param_3,0x40,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

