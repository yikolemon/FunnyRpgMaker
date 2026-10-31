/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801fbb8b */

undefined8 FUN_1801fbb8b(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x2e0);
  if (puVar1 == (undefined4 *)0x0) {
    return 6;
  }
  *param_2 = puVar1[1];
  param_2[1] = *puVar1;
  if (puVar1[1] != 0) {
    param_2 = param_2 + 5;
    plVar2 = (longlong *)(puVar1 + 0x2c);
    uVar3 = 0;
    do {
      *(undefined8 *)(param_2 + -3) = *(undefined8 *)(puVar1 + uVar3 * 2 + 2);
      param_2[-1] = *(undefined4 *)*plVar2;
      *param_2 = *(undefined4 *)(*plVar2 + -4 + (ulonglong)*(byte *)(plVar2 + -1) * 4);
      uVar3 = uVar3 + 1;
      param_2 = param_2 + 4;
      plVar2 = plVar2 + 3;
    } while (uVar3 < (uint)puVar1[1]);
    return 0;
  }
  return 0;
}

