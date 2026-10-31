/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14033224d */

undefined4 * FUN_14033224d(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    param_2 = FUN_140331d44(param_1);
  }
  if ((*(byte *)(param_1 + 0x2acd) & 4) != 0) {
    FUN_14030f4ba(&DAT_14058ecdd,param_2);
  }
  puVar1 = (undefined4 *)FUN_14030fcc8(0xd8);
  FUN_140332b34(puVar1,param_2);
  FUN_140310f58(param_1 + 0x2930,*puVar1,puVar1);
  return puVar1;
}

