/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002f04c */

void Unwind_14002f04c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if ((*(char *)(*(longlong *)(param_2 + 0xc0) + 0x40) == '\x01') &&
     (plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xc0) + 0x38), plVar1 != (longlong *)0x0)) {
    plVar2 = *(longlong **)(param_2 + 0xc0);
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != plVar2);
    plVar2[7] = 0;
  }
  return;
}

