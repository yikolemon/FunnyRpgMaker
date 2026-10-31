/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008aab0 */

undefined4 FUN_14008aab0(char *param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
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
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x28) + 4;
  if (uVar1 <= *(uint *)(param_1 + 0x2c)) {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (ulonglong)*(uint *)(param_1 + 0x28));
    *(int *)(param_1 + 0x28) = (int)uVar1;
    return uVar2;
  }
  FUN_14000169c(local_30,"read: End of file reached");
  FUN_14008a8da(local_68,local_30);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_68,&DAT_1401a5760);
}

