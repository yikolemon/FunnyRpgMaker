/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400950b4 */

ulonglong FUN_1400950b4(longlong param_1,longlong *param_2)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  
  if ((((int)param_2[2] == 0) && (param_2[1] == 4)) &&
     (in_RAX = FUN_140094fbc(*param_2,4), (char)in_RAX != '\0')) {
    uVar1 = FUN_1400a6e20((short *)(param_1 + 0x120),0x55,(short *)&DAT_14011c988,1);
    if (((int)uVar1 == 0) &&
       (uVar1 = FUN_1400a6e20((short *)(param_1 + 0x120),0x55,(short *)*param_2,param_2[1]),
       (int)uVar1 == 0)) {
      return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
    }
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return in_RAX & 0xffffffffffffff00;
}

