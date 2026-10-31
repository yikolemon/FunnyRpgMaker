/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408be5ad */

void FUN_1408be5ad(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(ulonglong)*(uint *)(param_1 + 8);
  if (cVar1 == 'w') {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) + 1;
  }
  else if ((cVar1 != 'C') && (cVar1 != 'S')) {
    return;
  }
  *(undefined1 *)(param_1 + 0x24) = 1;
  return;
}

