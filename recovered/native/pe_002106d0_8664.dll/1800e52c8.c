/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e52c8 */

void FUN_1800e52c8(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1800e5399(*(undefined8 *)
                 (*(longlong *)(param_1 + 8) +
                 (*(longlong *)(param_1 + 0x10) - 1U &
                 (*(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20)) - 1U) * 8));
  plVar1 = (longlong *)(param_1 + 0x20);
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

