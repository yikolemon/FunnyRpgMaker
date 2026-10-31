/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140010a1a */

undefined8 * FUN_140010a1a(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = *param_2;
  FUN_1400062e0(param_1 + 1,0);
  *(undefined1 *)param_1 = 6;
  param_1[1] = uVar1;
  return param_1;
}

