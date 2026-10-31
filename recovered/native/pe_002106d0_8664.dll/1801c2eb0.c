/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c2eb0 */

undefined8 * FUN_1801c2eb0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1800ffb82(param_1 + 2,&DAT_1803861e4);
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x27) = 1;
  FUN_1801c3524();
  return param_1;
}

