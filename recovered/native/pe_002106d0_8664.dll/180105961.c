/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180105961 */

void FUN_180105961(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x29a0);
  if (lVar1 != 0) {
    puVar2 = (undefined4 *)(lVar1 + 4);
    do {
      if (*(char *)(puVar2 + 8) == '\x01') {
        lVar1 = FUN_1801118dd(*puVar2);
        if (lVar1 != 0) {
          FUN_18012f287(lVar1,puVar2);
        }
        *(undefined1 *)(puVar2 + 8) = 0;
        lVar1 = *(longlong *)(param_1 + 0x29a0);
      }
      puVar2 = (undefined4 *)((longlong)puVar2 + (longlong)(int)puVar2[-1]);
    } while (puVar2 != (undefined4 *)(*(int *)(param_1 + 0x2998) + lVar1 + 4));
  }
  return;
}

