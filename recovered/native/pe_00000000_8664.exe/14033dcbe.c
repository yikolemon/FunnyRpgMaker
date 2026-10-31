/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14033dcbe */

undefined8 FUN_14033dcbe(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 4;
  if (((*(uint *)(param_1 + 0x14) & 0x6000000) == 0) &&
     (((*(uint *)(param_1 + 0x14) >> 0x18 & 1) == 0 ||
      (uVar1 = 3, (*(byte *)(param_1 + 0x495) & 1) != 0)))) {
    return 2;
  }
  return uVar1;
}

