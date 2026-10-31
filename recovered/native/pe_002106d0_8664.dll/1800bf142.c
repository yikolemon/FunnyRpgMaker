/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bf142 */

void Unwind_1800bf142(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
    (*DAT_180417870)();
    *(undefined8 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
  }
  return;
}

