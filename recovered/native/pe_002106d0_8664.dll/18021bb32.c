/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021bb32 */

void FUN_18021bb32(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *param_1;
    FUN_1801c9b65(uVar1,param_1[2]);
    param_1[2] = 0;
    FUN_1801c9b65(uVar1,param_1);
    return;
  }
  return;
}

