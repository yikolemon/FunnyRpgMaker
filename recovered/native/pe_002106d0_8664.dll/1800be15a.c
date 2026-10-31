/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800be15a */

void Unwind_1800be15a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x10) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x28);
    (*DAT_180417870)();
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
  }
  return;
}

