/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005ece9 */

void Unwind_18005ece9(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_2 + 0x2a8);
  FUN_18006cc9a(plVar1,plVar1,*(undefined8 *)(*plVar1 + 8));
  thunk_FUN_1802464a0(*plVar1,0x40);
  return;
}

