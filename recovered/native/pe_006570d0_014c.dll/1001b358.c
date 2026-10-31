/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001b358 */

void __thiscall FUN_1001b358(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  uVar1 = *(uint *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x4c);
  puVar4 = *(undefined4 **)(param_1 + 0x50);
  if (uVar1 < (uint)(((int)puVar4 - iVar2 >> 2) * -0x33333333)) {
    *(undefined4 *)(iVar2 + uVar1 * 0x14) = param_2;
    *(undefined4 *)(iVar2 + 8 + uVar1 * 0x14) = param_3;
    *(undefined4 *)(iVar2 + 0xc + uVar1 * 0x14) = *(undefined4 *)(param_1 + 8);
  }
  else {
    if (*(uint *)(param_1 + 0x60) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_10228760(0xc);
    }
    uVar3 = *(undefined4 *)(param_1 + 8);
    if (puVar4 == *(undefined4 **)(param_1 + 0x54)) {
      FUN_1001bb7c();
      puVar4 = *(undefined4 **)(param_1 + 0x50);
    }
    *puVar4 = param_2;
    puVar4[1] = 0;
    puVar4[2] = param_3;
    puVar4[3] = uVar3;
    puVar4[4] = 0;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x14;
  }
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  return;
}

