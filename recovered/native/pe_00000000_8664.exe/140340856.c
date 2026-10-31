/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140340856 */

undefined8 FUN_140340856(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((((*(char *)(DAT_14062a630 + 0x85) == '\0') && ((*(byte *)(param_1 + 0x2d) & 2) == 0)) ||
      ((*(byte *)(DAT_14062a630 + 0x12f5) & 4) == 0)) ||
     (((*(byte *)(param_1 + 0x495) & 1) != 0 ||
      (uVar1 = *(uint *)(param_1 + 0x14) & 0xc000000, uVar2 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1)
      , (*(uint *)(param_1 + 0x14) & 0x13000000) != 0 || uVar1 == 0x4000000)))) {
    uVar2 = 0;
  }
  return uVar2;
}

