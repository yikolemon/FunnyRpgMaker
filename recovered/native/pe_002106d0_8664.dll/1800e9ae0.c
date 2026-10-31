/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e9ae0 */

undefined8 * FUN_1800e9ae0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_180239630(0x18);
  lVar1 = *param_2;
  lVar2 = *param_1;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  FUN_1800e9b96(puVar3,(lVar1 - lVar2 >> 4) * -0x3333333333333333);
  return puVar3;
}

