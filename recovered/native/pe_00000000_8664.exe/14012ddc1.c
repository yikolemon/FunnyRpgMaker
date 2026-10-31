/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012ddc1 */

undefined2 FUN_14012ddc1(longlong param_1)

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

