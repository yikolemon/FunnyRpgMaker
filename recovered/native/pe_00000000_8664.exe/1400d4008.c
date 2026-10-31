/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d4008 */

void FUN_1400d4008(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(undefined8 **)(param_1 + 0x48);
  (**(code **)(*plVar1 + 0x18))(plVar1,0,0,(*(undefined8 **)(param_1 + 0x48))[5],0,0);
  return;
}

