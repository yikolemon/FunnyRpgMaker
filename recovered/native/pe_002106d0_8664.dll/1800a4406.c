/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a4406 */

undefined2 FUN_1800a4406(longlong param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  puVar2 = (undefined2 *)**(longlong **)(param_1 + 0x38);
  if (puVar2 == (undefined2 *)0x0) {
    return 0xffff;
  }
  if (**(int **)(param_1 + 0x50) < 1) {
    puVar1 = (undefined2 *)**(undefined8 **)(param_1 + 0x40);
    if (puVar1 == (undefined2 *)0x0) {
      return 0xffff;
    }
    if ((*(byte *)(param_1 + 0x70) & 4) != 0) {
      return 0xffff;
    }
    puVar3 = *(undefined2 **)(param_1 + 0x68);
    if (*(undefined2 **)(param_1 + 0x68) < puVar1) {
      puVar3 = puVar1;
    }
    if (puVar3 <= puVar2) {
      return 0xffff;
    }
    *(undefined2 **)(param_1 + 0x68) = puVar3;
    **(int **)(param_1 + 0x50) =
         (int)((ulonglong)((longlong)puVar3 - **(longlong **)(param_1 + 0x38)) >> 1);
    puVar2 = (undefined2 *)**(undefined8 **)(param_1 + 0x38);
  }
  return *puVar2;
}

