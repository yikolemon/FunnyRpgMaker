/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a82b6 */

undefined8 FUN_1400a82b6(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((((*(char *)(DAT_140f2a910 + 0x85) == '\0') && ((*(byte *)(param_1 + 0x2d) & 2) == 0)) ||
      ((*(byte *)(DAT_140f2a910 + 0x12f5) & 4) == 0)) ||
     (((*(byte *)(param_1 + 0x495) & 1) != 0 ||
      (uVar1 = *(uint *)(param_1 + 0x14) & 0xc000000, uVar2 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1)
      , (*(uint *)(param_1 + 0x14) & 0x13000000) != 0 || uVar1 == 0x4000000)))) {
    uVar2 = 0;
  }
  return uVar2;
}

