/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003362e */

void FUN_14003362e(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + 1;
  plVar1 = *(longlong **)(param_1 + 0x308);
  for (plVar2 = *(longlong **)(param_1 + 0x300); plVar2 != plVar1; plVar2 = plVar2 + 2) {
    if (*(longlong *)(*plVar2 + 0x18) == 0) {
      FUN_14003362e();
    }
  }
  return;
}

