/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012dd9f */

ushort FUN_14012dd9f(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)(param_1 + 0x38);
  if ((longlong)puVar2 + 1U < *(ulonglong *)(param_1 + 0x40)) {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    uVar1 = uVar1 << 8 | uVar1 >> 8;
  }
  else {
    uVar1 = 0;
  }
  *(ushort **)(param_1 + 0x38) = puVar2;
  return uVar1;
}

