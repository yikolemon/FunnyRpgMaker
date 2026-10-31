/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140070d46 */

undefined8 * FUN_140070d46(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)FUN_1400d3680(0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  FUN_140070dde(puVar1,param_1[1] - *param_1 >> 4,param_1,param_1 + 1,puVar1,uVar2);
  return puVar1;
}

