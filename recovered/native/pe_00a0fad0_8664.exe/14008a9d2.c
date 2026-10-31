/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008a9d2 */

void FUN_14008a9d2(char *param_1,int *param_2)

{
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
  if ((uint)(*param_2 + *(int *)(param_1 + 0x28)) <= *(uint *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x28) = *param_2 + *(int *)(param_1 + 0x28);
    return;
  }
  FUN_14000169c(local_30,"Skip: Attempted to skip past end of file");
  FUN_14008a8da(local_68,local_30);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_68,&DAT_1401a5760);
}

