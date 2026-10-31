/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000f3e5 */

ushort * FUN_14000f3e5(ushort *param_1,ushort *param_2,uint *param_3)

{
  uint uVar1;
  ushort uVar2;
  
  *param_3 = 0;
  uVar2 = *param_1;
  uVar1 = 0;
  while( true ) {
    param_1 = param_1 + 1;
    uVar1 = ((uint)uVar2 + uVar1 * 10) - 0x30;
    *param_3 = uVar1;
    if ((param_1 == param_2) || (uVar2 = *param_1, 9 < (ushort)(uVar2 - 0x30))) break;
    if (0xccccccc < uVar1) {
      *param_3 = 0x80000000;
LAB_14000f431:
                    /* WARNING: Subroutine does not return */
      FUN_14000b455(0x14011af26);
    }
  }
  if (-1 < (int)uVar1) {
    return param_1;
  }
  goto LAB_14000f431;
}

