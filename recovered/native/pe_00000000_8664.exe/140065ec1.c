/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140065ec1 */

ushort * FUN_140065ec1(ushort *param_1,ushort *param_2,uint *param_3)

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
LAB_140065f0d:
                    /* WARNING: Subroutine does not return */
      FUN_140049b0a("Number is too big");
    }
  }
  if (-1 < (int)uVar2) {
    return param_1;
  }
  goto LAB_140065f0d;
}

