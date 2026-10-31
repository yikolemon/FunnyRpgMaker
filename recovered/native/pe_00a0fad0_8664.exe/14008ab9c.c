/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008ab9c */

undefined4 FUN_14008ab9c(char *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 local_a0 [56];
  undefined1 local_68 [56];
  undefined1 local_30 [32];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  if (*param_1 == '\0') {
    FUN_14000169c(local_30,"FileWalker not initialized");
    FUN_14008a8da(local_a0,local_30);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_a0,&DAT_1401a5760);
  }
  uVar2 = *(uint *)(param_1 + 0x28);
  if (uVar2 < *(uint *)(param_1 + 0x2c)) {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar2);
    *(uint *)(param_1 + 0x28) = uVar2 + 1;
    return CONCAT31((int3)(uVar2 >> 8),uVar1);
  }
  FUN_14000169c(local_30,"read: End of file reached");
  FUN_14008a8da(local_68,local_30);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_68,&DAT_1401a5760);
}

