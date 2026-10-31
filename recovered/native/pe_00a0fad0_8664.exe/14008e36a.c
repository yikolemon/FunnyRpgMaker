/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008e36a */

undefined8 * FUN_14008e36a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_1400d3680(0x18);
  lVar1 = *param_2;
  lVar2 = *param_1;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  FUN_14008e420(puVar3,(lVar1 - lVar2 >> 3) * -0x5555555555555555);
  return puVar3;
}

