/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bfd66 */

void Unwind_1800bfd66(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x28);
    (*DAT_180417870)();
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
  }
  return;
}

