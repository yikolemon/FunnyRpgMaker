/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ddad2 */

void Unwind_1801ddad2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if ((*(char *)(*(longlong *)(param_2 + 0x48) + 0x130) == '\x01') &&
     (plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x48) + 0x128), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x38));
    *(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x128) = 0;
  }
  return;
}

