/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f63aa */

void FUN_1800f63aa(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_1800f4e94();
  plVar1 = (longlong *)(param_1 + 0x20);
  *plVar1 = *plVar1 + -1;
  lVar2 = 0;
  if (*plVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18) + 1;
  }
  *(longlong *)(param_1 + 0x18) = lVar2;
  return;
}

