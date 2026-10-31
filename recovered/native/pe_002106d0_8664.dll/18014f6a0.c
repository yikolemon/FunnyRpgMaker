/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014f6a0 */

bool FUN_18014f6a0(longlong param_1,undefined8 *param_2,undefined4 *param_3)

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
    FUN_180289570(puVar3,(longlong)(int)uVar1,0x10,&LAB_18014f777);
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
      FUN_1800ff6e6(param_1 + 0x20);
    }
  }
  else {
    *param_3 = *puVar3;
  }
  return puVar3 != puVar4;
}

