/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140021fd2 */

undefined8 FUN_140021fd2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  
  if (*(char *)*param_1 == *(char *)*param_2) {
    iVar1 = strcmp((char *)*param_1,(char *)*param_2);
    if (iVar1 == 0) {
      return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),1);
    }
  }
  return 0;
}

