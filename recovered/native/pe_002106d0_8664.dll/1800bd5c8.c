/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bd5c8 */

void Unwind_1800bd5c8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x28);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
    (*DAT_180417870)();
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
  }
  return;
}

