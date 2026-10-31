/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000dd12 */

void FUN_14000dd12(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    FUN_140005ad0(plVar1,*param_1,*(undefined8 *)(*plVar1 + 8));
    thunk_FUN_14018e090(*plVar1,0x50);
    return;
  }
  return;
}

