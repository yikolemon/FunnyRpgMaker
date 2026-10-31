/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400491c5 */

undefined8 FUN_1400491c5(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 0x2e0);
  if (puVar1 == (undefined4 *)0x0) {
    return 6;
  }
  *param_2 = puVar1[1];
  param_2[1] = *puVar1;
  if (puVar1[1] != 0) {
    puVar2 = param_2 + 5;
    plVar3 = (longlong *)(puVar1 + 0x2c);
    uVar4 = 0;
    do {
      *(undefined8 *)(puVar2 + -3) = *(undefined8 *)(puVar1 + uVar4 * 2 + 2);
      puVar2[-1] = *(undefined4 *)*plVar3;
      *puVar2 = *(undefined4 *)(*plVar3 + -4 + (ulonglong)*(byte *)(plVar3 + -1) * 4);
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 4;
      plVar3 = plVar3 + 3;
    } while (uVar4 < (uint)puVar1[1]);
    return 0;
  }
  return 0;
}

