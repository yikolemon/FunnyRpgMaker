/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10033626 */

void __fastcall FUN_10033626(int *param_1)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)*param_1;
  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)param_1[1];
    if (piVar3 != piVar4) {
      do {
        if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar3)(1);
        }
        piVar3 = piVar3 + 1;
      } while (piVar3 != piVar4);
      piVar3 = (int *)*param_1;
    }
    uVar2 = param_1[2] - (int)piVar3;
    piVar4 = piVar3;
    if (0xfff < uVar2) {
      piVar4 = (int *)piVar3[-1];
      if (0x1f < (uint)((int)piVar3 + (-4 - (int)piVar4))) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar2 = uVar2 + 0x23;
    }
    FUN_102283a0(piVar4,uVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

