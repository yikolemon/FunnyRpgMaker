/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180045fdf */

ushort * FUN_180045fdf(ushort *param_1,ushort *param_2,uint *param_3)

{
  ushort uVar1;
  uint uVar2;
  
  *param_3 = 0;
  uVar1 = *param_1;
  uVar2 = 0;
  while( true ) {
    param_1 = param_1 + 1;
    uVar2 = ((uint)uVar1 + uVar2 * 10) - 0x30;
    *param_3 = uVar2;
    if ((param_1 == param_2) || (uVar1 = *param_1, 9 < (ushort)(uVar1 - 0x30))) break;
    if (0xccccccc < uVar2) {
      *param_3 = 0x80000000;
LAB_18004602b:
                    /* WARNING: Subroutine does not return */
      FUN_180005ebc("Number is too big");
    }
  }
  if (-1 < (int)uVar2) {
    return param_1;
  }
  goto LAB_18004602b;
}

