/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005cbd4 */

undefined8 * FUN_14005cbd4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140189300(1);
  param_1[3] = uVar1;
  uVar1 = FUN_14005cc70(param_1 + 2);
  *param_1 = uVar1;
  uVar1 = FUN_140059c2a(param_1 + 2);
  param_1[1] = uVar1;
  return param_1;
}

