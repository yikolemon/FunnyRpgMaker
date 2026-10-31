/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011834f */

void FUN_18011834f(void)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x148);
  if (1 < iVar1) {
    *(int *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x148) = iVar1 + -1;
    return;
  }
  FUN_180101698("Calling PopID() too many times!");
  return;
}

