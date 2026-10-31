/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b5f36 */

void __fastcall FUN_100b5f36(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = 0;
    **(undefined4 **)(param_1 + 8) = 0;
    puVar2 = *(undefined4 **)(param_1 + 0xc);
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar2;
      FUN_100186f1(puVar2 + 2);
      FUN_102283a0(puVar2,0x24);
      puVar2 = puVar1;
    }
  }
  return;
}

