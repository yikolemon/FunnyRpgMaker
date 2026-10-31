/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400058d0 */

undefined8 * FUN_1400058d0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = FUN_14004262e(param_1,param_2,0);
  if (iVar1 == 0) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140041f39("directory_iterator::directory_iterator",iVar1,param_2);
}

