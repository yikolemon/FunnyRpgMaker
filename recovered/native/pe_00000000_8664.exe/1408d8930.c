/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d8930 */

void FUN_1408d8930(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  if (iVar1 == 1) {
    puVar2 = (undefined4 *)FUN_1408c0ecd();
    *puVar2 = 0x21;
  }
  else if ((iVar1 == 2) || (iVar1 == 3)) {
    puVar2 = (undefined4 *)FUN_1408c0ecd();
    *puVar2 = 0x22;
    return;
  }
  return;
}

