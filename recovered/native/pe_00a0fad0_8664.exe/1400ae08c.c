/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ae08c */

void FUN_1400ae08c(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar4 = (longlong *)*param_1;
  if (plVar4 != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[1];
    if (plVar4 != plVar5) {
      do {
        plVar1 = (longlong *)plVar4[7];
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,plVar4 != plVar1);
          plVar4[7] = 0;
        }
        plVar4 = plVar4 + 8;
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
      uVar3 = uVar3 | 0x27;
    }
    thunk_FUN_1400ddcd0(plVar5,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

