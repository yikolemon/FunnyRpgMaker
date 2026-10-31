/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ceded */

undefined2 FUN_1801ceded(longlong param_1)

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

