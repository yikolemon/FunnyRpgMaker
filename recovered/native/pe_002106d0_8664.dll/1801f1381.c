/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f1381 */

undefined8 FUN_1801f1381(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 0x408) == 0) && (uVar1 = FUN_1801f0731(param_1,0), (int)uVar1 != 0))
  {
    return uVar1;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x424);
  return 0;
}

