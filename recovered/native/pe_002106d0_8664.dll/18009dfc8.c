/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009dfc8 */

void FUN_18009dfc8(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar2 = *param_1;
  puVar3 = (undefined8 *)param_1[1];
  uVar1 = (longlong)puVar3 - lVar2 >> 5;
  if (param_2 < uVar1) {
    puVar5 = (undefined8 *)(lVar2 + param_2 * 0x20);
    for (puVar4 = puVar5; puVar4 != puVar3; puVar4 = puVar4 + 4) {
      FUN_1800010ec(puVar4);
    }
    param_1[1] = (longlong)puVar5;
  }
  else if (uVar1 < param_2) {
    if ((ulonglong)(param_1[2] - lVar2 >> 5) < param_2) {
      FUN_18009e06e(param_1);
      return;
    }
    if (param_2 != uVar1) {
      lVar2 = uVar1 - param_2;
      do {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 7;
        puVar3 = puVar3 + 4;
        lVar2 = lVar2 + 1;
      } while (lVar2 != 0);
    }
    param_1[1] = (longlong)puVar3;
  }
  return;
}

