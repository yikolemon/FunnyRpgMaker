/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a832c */

void __thiscall FUN_100a832c(int *param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = (undefined4 *)*param_1;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)param_1[1];
    if (puVar3 != puVar4) {
      do {
        (**(code **)*puVar3)(0);
        puVar3 = puVar3 + 0x21;
      } while (puVar3 != puVar4);
      puVar3 = (undefined4 *)*param_1;
    }
    uVar2 = param_1[2] - (int)puVar3;
    puVar4 = puVar3;
    if (0xfff < uVar2) {
      puVar4 = (undefined4 *)puVar3[-1];
      if (0x1f < (uint)((int)puVar3 + (-4 - (int)puVar4))) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar2 = uVar2 + 0x23;
    }
    FUN_102283a0(puVar4,uVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x84 + param_2;
  param_1[2] = param_4 * 0x84 + param_2;
  return;
}

