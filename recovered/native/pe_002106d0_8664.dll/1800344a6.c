/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800344a6 */

void FUN_1800344a6(longlong *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar4 = (longlong *)*param_1;
  if (plVar4 != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[1];
    if (plVar4 != plVar5) {
      do {
        puVar1 = (undefined8 *)*plVar4;
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar5);
      plVar4 = (longlong *)*param_1;
    }
    uVar3 = param_1[2] - (longlong)plVar4;
    plVar5 = plVar4;
    if (0xfff < uVar3) {
      plVar5 = (longlong *)plVar4[-1];
      if (0x1f < (ulonglong)((longlong)plVar4 + (-8 - (longlong)plVar5))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar3 = uVar3 + 0x27;
    }
    thunk_FUN_1802464a0(plVar5,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

