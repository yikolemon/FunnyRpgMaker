/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a9c0f */

void FUN_1407a9c0f(undefined4 param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_2 & 0xffffffff);
  FUN_14079ac5c();
  if (puVar2[1] != puVar2[2]) {
    if ((int)puVar2[1] < (int)puVar2[2]) {
      FUN_1407a9c65(param_1,puVar2);
      uVar1 = puVar2[1];
      puVar2[2] = uVar1;
    }
    else {
      FUN_1407a9c65(param_1,puVar2);
      uVar1 = puVar2[2];
      puVar2[1] = uVar1;
    }
    *puVar2 = uVar1;
    *(undefined1 *)((longlong)puVar2 + 0x16) = 0;
  }
  return;
}

