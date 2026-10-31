/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140112068 */

void FUN_140112068(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = FUN_140121bd0();
  if (iVar1 == 0) {
    if (*(short *)(param_3 + 0x80) != 0) {
      FUN_140112000(param_1,param_2,2,&DAT_1401748fc,(short *)(param_3 + 0x80));
    }
    if (*(short *)(param_3 + 0x100) != 0) {
      FUN_140112000(param_1,param_2,2,&DAT_140174934,(short *)(param_3 + 0x100));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

