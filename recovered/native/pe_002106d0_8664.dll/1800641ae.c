/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800641ae */

undefined8 FUN_1800641ae(undefined8 *param_1,byte *param_2,uint *param_3)

{
  if ((byte *)*param_1 != param_2) {
    *param_3 = (uint)*(byte *)*param_1;
    return 0;
  }
  return 1;
}

