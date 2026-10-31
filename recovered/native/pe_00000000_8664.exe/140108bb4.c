/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140108bb4 */

undefined8 * FUN_140108bb4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140078e3e(param_1 + 2,&DAT_140edcdbf);
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x27) = 1;
  FUN_140109228();
  return param_1;
}

