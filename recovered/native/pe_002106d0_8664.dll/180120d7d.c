/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180120d7d */

undefined4 * FUN_180120d7d(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    param_2 = FUN_180120874(param_1);
  }
  if ((*(byte *)(param_1 + 0x2acd) & 4) != 0) {
    FUN_1800fdfea("[docking] DockContextAddNode 0x%08X\n",param_2);
  }
  puVar1 = (undefined4 *)FUN_1800fe7f8(0xd8);
  FUN_180121664(puVar1,param_2);
  FUN_1800ffa88(param_1 + 0x2930,*puVar1,puVar1);
  return puVar1;
}

