/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c85d0 */

bool FUN_1400c85d0(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar2 = (undefined4 *)*param_2;
  puVar3 = *(undefined4 **)(param_1 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x20);
  puVar4 = puVar3 + (longlong)(int)uVar1 * 4;
  if (((1 < uVar1 && puVar3 != (undefined4 *)0x0) &
      puVar2 == (undefined4 *)0x0 & *(byte *)(param_1 + 4)) == 1) {
    FUN_1401a7460(puVar3,(longlong)(int)uVar1,0x10,&LAB_1400c86a7);
    puVar3 = *(undefined4 **)(param_1 + 0x28);
  }
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = puVar3;
  if (puVar3 != puVar4) {
    do {
      puVar3 = puVar2;
      if (puVar3[2] != 0) break;
      puVar2 = puVar3 + 4;
    } while (puVar3 < puVar4);
  }
  *param_2 = puVar3 + (ulonglong)(puVar3 != puVar4) * 4;
  if (puVar3 == puVar4) {
    *param_3 = 0;
    if (*(char *)(param_1 + 4) == '\x01') {
      FUN_1400789a2(param_1 + 0x20);
    }
  }
  else {
    *param_3 = *puVar3;
  }
  return puVar3 != puVar4;
}

