/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a988d */

void Unwind_1400a988d(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0xb8);
  while (lVar2 != 0) {
    if (*(longlong *)(param_2 + 0x58 + *(longlong *)(param_2 + 0xb8)) != 0) {
      FUN_140077b90();
    }
    plVar1 = (longlong *)(param_2 + 0xb8);
    *plVar1 = *plVar1 + -0x10;
    lVar2 = *plVar1;
  }
  return;
}

