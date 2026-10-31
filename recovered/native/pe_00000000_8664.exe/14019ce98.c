/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019ce98 */

void FUN_14019ce98(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = FUN_1401af320();
  if (iVar1 == 0) {
    if (*(short *)(param_3 + 0x80) != 0) {
      FUN_14019ce30(param_1,param_2,2,&DAT_140edd5f8,(short *)(param_3 + 0x80));
    }
    if (*(short *)(param_3 + 0x100) != 0) {
      FUN_14019ce30(param_1,param_2,2,&DAT_140edd630,(short *)(param_3 + 0x100));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

