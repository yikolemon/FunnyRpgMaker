/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000df9e */

undefined8 * FUN_14000df9e(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)FUN_1401887b0(0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  FUN_14000e036(puVar1,param_1[1] - *param_1 >> 4,param_1,param_1 + 1,puVar1,uVar2);
  return puVar1;
}

