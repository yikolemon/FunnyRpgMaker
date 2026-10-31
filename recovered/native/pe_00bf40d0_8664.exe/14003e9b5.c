/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003e9b5 */

int FUN_14003e9b5(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  
  if ((*(longlong *)(param_1 + 0x408) == 0) &&
     (iVar1 = FUN_14003dd65(param_1,(undefined8 *)0x0), iVar1 != 0)) {
    return iVar1;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x424);
  return 0;
}

