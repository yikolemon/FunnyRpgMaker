/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cf6b0 */

void FUN_1800cf6b0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    plVar2 = *(longlong **)(lVar1 + 0x40);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != (longlong *)(lVar1 + 8));
      *(undefined8 *)(lVar1 + 0x40) = 0;
    }
    thunk_FUN_1802464a0(lVar1,0x50);
    return;
  }
  return;
}

