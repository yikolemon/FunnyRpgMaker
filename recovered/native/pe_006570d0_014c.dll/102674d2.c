/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102674d2 */

uint __thiscall FUN_102674d2(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  piVar1 = *(int **)(param_1 + 0x6c);
  *(int **)(param_1 + 0x6c) = piVar1 + 1;
  puVar3 = (undefined4 *)*piVar1;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_10268ffd();
    *puVar3 = 0x16;
    uVar4 = FUN_10273ea8();
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
    uVar2 = *param_2;
    *puVar3 = uVar2;
    uVar4 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar4;
}

