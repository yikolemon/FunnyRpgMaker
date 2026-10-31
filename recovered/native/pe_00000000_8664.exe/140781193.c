/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140781193 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140781193(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  bool in_ZF;
  
  if ((((in_ZF) && ((*(byte *)(param_1 + 0x25) & 2) == 0)) ||
      ((*(byte *)((ulonglong)_DAT_7178801039d74c + 0x120d) & 4) == 0)) ||
     (((*(byte *)(param_1 + 0x409) & 1) != 0 ||
      (uVar1 = *(uint *)(param_1 + 0xc) & 0xc000000, uVar2 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1),
      (*(uint *)(param_1 + 0xc) & 0x13000000) != 0 || uVar1 == 0x4000000)))) {
    uVar2 = 0;
  }
  return uVar2;
}

