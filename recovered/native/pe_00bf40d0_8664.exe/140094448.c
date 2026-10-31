/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140094448 */

void FUN_140094448(short *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1400a1b80(param_1,param_2,param_3);
  if ((int)uVar1 == 0) {
    if (*(short *)(param_3 + 0x80) != 0) {
      FUN_1400943e0(param_1,param_2,2,&DAT_14011c95c);
    }
    if (*(short *)(param_3 + 0x100) != 0) {
      FUN_1400943e0(param_1,param_2,2,&DAT_14011c984);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

