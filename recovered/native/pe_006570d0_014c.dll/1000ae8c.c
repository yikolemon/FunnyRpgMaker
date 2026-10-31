/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000ae8c */

void FUN_1000ae8c(char *param_1,char *param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  
  *param_3 = 0;
  cVar1 = *param_1;
  uVar2 = 0;
  while( true ) {
    param_1 = param_1 + 1;
    uVar2 = ((int)cVar1 + uVar2 * 10) - 0x30;
    *param_3 = uVar2;
    if ((param_1 == param_2) || (cVar1 = *param_1, 9 < (byte)(cVar1 - 0x30U))) break;
    if (0xccccccc < uVar2) {
      *param_3 = 0x80000000;
LAB_1000aed3:
                    /* WARNING: Subroutine does not return */
      FUN_10006198("Number is too big");
    }
  }
  if (-1 < (int)uVar2) {
    return;
  }
  goto LAB_1000aed3;
}

