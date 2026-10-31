/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180237138 */

bool FUN_180237138(longlong param_1)

{
  longlong *plVar1;
  
  if ((((param_1 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
      (*(longlong *)(param_1 + 0x38) != 0)) &&
     ((plVar1 = *(longlong **)(param_1 + 0x28), plVar1 != (longlong *)0x0 && (*plVar1 == param_1))))
  {
    return (int)plVar1[1] - 0x3f54U < 0xffffffe0;
  }
  return true;
}

