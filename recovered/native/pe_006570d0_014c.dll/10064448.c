/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10064448 */

undefined4 FUN_10064448(undefined4 *param_1,byte *param_2,uint *param_3)

{
  if ((byte *)*param_1 != param_2) {
    *param_3 = (uint)*(byte *)*param_1;
    return 0;
  }
  return 1;
}

