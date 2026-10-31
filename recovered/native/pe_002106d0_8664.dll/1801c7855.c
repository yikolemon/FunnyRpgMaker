/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c7855 */

void FUN_1801c7855(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(undefined8 **)(param_1 + 0x48);
  (**(code **)(*plVar1 + 0x18))(plVar1,0,0,(*(undefined8 **)(param_1 + 0x48))[5],0,0);
  return;
}

