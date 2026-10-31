/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012dddf */

uint FUN_14012dddf(longlong param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_1 + 0x38);
  uVar1 = 0;
  if ((longlong)puVar2 + 3U < *(ulonglong *)(param_1 + 0x40)) {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  }
  *(uint **)(param_1 + 0x38) = puVar2;
  return uVar1;
}

