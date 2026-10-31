/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140078d3e */

void FUN_140078d3e(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14003fa34(param_1 + 2);
  if (lVar1 != 0) {
    return;
  }
  lVar1 = (longlong)*(int *)(*param_1 + 4);
  FUN_14000a9f0((longlong)param_1 + lVar1,
                (uint)(*(longlong *)((longlong)param_1 + lVar1 + 0x48) == 0) << 2 |
                *(uint *)((longlong)param_1 + lVar1 + 0x10) | 2,0);
  return;
}

