/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800445ae */

undefined8 * FUN_1800445ae(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)FUN_180239630(0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  FUN_180044646(puVar1,param_1[1] - *param_1 >> 4,param_1,param_1 + 1,puVar1,uVar2);
  return puVar1;
}

