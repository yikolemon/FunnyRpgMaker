/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011728b */

void FUN_1011728b(void)

{
  bool bVar1;
  
  if (*(int *)(DAT_1039d74c + 0x2308) == 0) {
    bVar1 = *(int *)(*(int *)(DAT_1039d74c + 0x14cc) + 0x1e8) == 0;
  }
  else {
    bVar1 = false;
  }
  *(bool *)(*(int *)(DAT_1039d74c + 0x14cc) + 0x1a4) = bVar1;
  return;
}

