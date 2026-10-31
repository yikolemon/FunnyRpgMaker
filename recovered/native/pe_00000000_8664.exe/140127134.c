/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140127134 */

void Unwind_140127134(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if ((*(char *)(*(longlong *)(param_2 + 0x68) + 0xe8) == '\x01') &&
     (plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x68) + 0xe0), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x38));
    *(undefined8 *)(*(longlong *)(param_2 + 0x68) + 0xe0) = 0;
  }
  return;
}

