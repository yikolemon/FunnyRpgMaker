/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400211f0 */

undefined2 FUN_1400211f0(longlong param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  
  puVar2 = *(undefined2 **)(param_1 + 0x38);
  if ((longlong)puVar2 + 1U < *(ulonglong *)(param_1 + 0x40)) {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
  }
  else {
    uVar1 = 0;
  }
  *(undefined2 **)(param_1 + 0x38) = puVar2;
  return uVar1;
}

