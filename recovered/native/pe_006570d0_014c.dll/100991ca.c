/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100991ca */

undefined4 __thiscall FUN_100991ca(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x18)) {
    FUN_100012b0(L"");
  }
  else {
    FUN_10003728(*(int *)(param_1 + 0x14));
  }
  return param_2;
}

