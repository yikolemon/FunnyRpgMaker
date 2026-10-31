/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012ddfc */

undefined4 FUN_14012ddfc(longlong param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x38);
  uVar1 = 0;
  if ((longlong)puVar2 + 3U < *(ulonglong *)(param_1 + 0x40)) {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 **)(param_1 + 0x38) = puVar2;
  return uVar1;
}

