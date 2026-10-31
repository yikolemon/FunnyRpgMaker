/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008526c */

void FUN_14008526c(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    FUN_140085b9a(puVar1);
    FUN_14001c53d(lVar2,(longlong)puVar1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}

