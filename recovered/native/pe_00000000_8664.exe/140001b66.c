/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140001b66 */

void Unwind_140001b66(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if ((*(char *)(param_2 + 0x152) == '\x01') &&
     (plVar1 = *(longlong **)(param_2 + 0xa0), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x68));
    *(undefined8 *)(param_2 + 0xa0) = 0;
  }
  return;
}

