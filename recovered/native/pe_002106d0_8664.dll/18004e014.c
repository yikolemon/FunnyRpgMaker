/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18004e014 */

void FUN_18004e014(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    if (plVar1 == param_2) {
      uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_1);
      *(undefined8 *)(param_1 + 0x38) = uVar2;
      plVar1 = (longlong *)param_2[7];
      if (plVar1 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    }
    else {
      *(longlong **)(param_1 + 0x38) = plVar1;
    }
    param_2[7] = 0;
  }
  return;
}

