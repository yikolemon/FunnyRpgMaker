/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140018ecc */

void FUN_140018ecc(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

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
    thunk_FUN_14018e090(plVar5,uVar3);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}

