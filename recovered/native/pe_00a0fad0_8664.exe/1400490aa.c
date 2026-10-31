/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400490aa */

char * FUN_1400490aa(char *param_1,char *param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  
  *param_3 = 0;
  cVar2 = *param_1;
  uVar1 = 0;
  while( true ) {
    param_1 = param_1 + 1;
    uVar1 = ((int)cVar2 + uVar1 * 10) - 0x30;
    *param_3 = uVar1;
    if ((param_1 == param_2) || (cVar2 = *param_1, 9 < (byte)(cVar2 - 0x30U))) break;
    if (0xccccccc < uVar1) {
      *param_3 = 0x80000000;
LAB_1400490f1:
                    /* WARNING: Subroutine does not return */
      FUN_1400451d8("Number is too big");
    }
  }
  if (-1 < (int)uVar1) {
    return param_1;
  }
  goto LAB_1400490f1;
}

