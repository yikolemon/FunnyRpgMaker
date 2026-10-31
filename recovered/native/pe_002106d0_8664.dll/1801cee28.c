/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cee28 */

undefined4 FUN_1801cee28(longlong param_1)

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

