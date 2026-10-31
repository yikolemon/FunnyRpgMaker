/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007ec79 */

void FUN_14007ec79(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x29a0);
  if (lVar1 != 0) {
    puVar2 = (undefined4 *)(lVar1 + 4);
    do {
      if (*(char *)(puVar2 + 8) == '\x01') {
        lVar1 = FUN_14008abf5(*puVar2);
        if (lVar1 != 0) {
          FUN_1400a81b7(lVar1,puVar2);
        }
        *(undefined1 *)(puVar2 + 8) = 0;
        lVar1 = *(longlong *)(param_1 + 0x29a0);
      }
      puVar2 = (undefined4 *)((longlong)puVar2 + (longlong)(int)puVar2[-1]);
    } while (puVar2 != (undefined4 *)(*(int *)(param_1 + 0x2998) + lVar1 + 4));
  }
  return;
}

