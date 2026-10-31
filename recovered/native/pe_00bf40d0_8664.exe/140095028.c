/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140095028 */

ulonglong FUN_140095028(short *param_1,longlong *param_2)

{
  int iVar1;
  ulonglong in_RAX;
  undefined4 extraout_var;
  
  if ((int)param_2[2] == 0) {
    in_RAX = param_2[1] - 2;
    if ((in_RAX < 2) && (in_RAX = FUN_140094fbc(*param_2,param_2[1]), (char)in_RAX != '\0')) {
      iVar1 = FUN_1400a6f60(param_1,0x40,*param_2,param_2[1]);
      if (iVar1 == 0) {
        iVar1 = FUN_1400a6f60(param_1 + 0x90,0x55,*param_2,param_2[1]);
        if (iVar1 == 0) {
          return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),1);
        }
      }
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

