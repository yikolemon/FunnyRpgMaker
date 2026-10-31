/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10267591 */

uint __thiscall FUN_10267591(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  piVar1 = *(int **)(param_1 + 0x6c);
  *(int **)(param_1 + 0x6c) = piVar1 + 1;
  puVar4 = (undefined4 *)*piVar1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)FUN_10268ffd();
    *puVar4 = 0x16;
    uVar5 = FUN_10273ea8();
    uVar5 = uVar5 & 0xffffff00;
  }
  else {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    puVar4[1] = uVar3;
    uVar5 = CONCAT31((int3)((uint)uVar3 >> 8),1);
    *puVar4 = uVar2;
  }
  return uVar5;
}

