/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800641c5 */

undefined8 FUN_1800641c5(undefined8 *param_1,byte *param_2,uint *param_3)

{
  undefined8 uVar1;
  
  if ((byte *)*param_1 == param_2) {
    uVar1 = 1;
  }
  else {
    *param_3 = (uint)*(byte *)*param_1;
    uVar1 = FUN_1800642fe();
    if ((int)uVar1 == 0) {
      *param_3 = *(byte *)*param_1 & 0x3f | (*param_3 & 0x1f) << 6;
      uVar1 = 0;
    }
  }
  return uVar1;
}

