/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a83aa */

void __fastcall FUN_100a83aa(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 != 0) {
    puVar6 = *(undefined4 **)(param_1 + 0xc);
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    if (puVar6 != puVar1) {
      do {
        (**(code **)*puVar6)(0);
        puVar6 = puVar6 + 0x21;
      } while (puVar6 != puVar1);
      iVar3 = *(int *)(param_1 + 4);
    }
    uVar5 = *(int *)(param_1 + 8) * 0x84;
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

