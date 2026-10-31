/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f6976 */

undefined8 * FUN_1800f6976(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180239630(0xd0);
  FUN_1800f6ea0(uVar1,0);
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}

