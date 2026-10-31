/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100236d0 */

void __fastcall FUN_100236d0(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 != 0) {
    piVar6 = *(int **)(param_1 + 0xc);
    piVar1 = *(int **)(param_1 + 0x10);
    if (piVar6 != piVar1) {
      do {
        if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar6)(1);
        }
        piVar6 = piVar6 + 1;
      } while (piVar6 != piVar1);
      iVar3 = *(int *)(param_1 + 4);
    }
    uVar5 = *(int *)(param_1 + 8) * 4;
    iVar4 = iVar3;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar3 + -4);
      if (0x1f < (uint)((iVar3 + -4) - iVar4)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar5 = uVar5 + 0x23;
    }
    FUN_102283a0(iVar4,uVar5);
  }
  return;
}

