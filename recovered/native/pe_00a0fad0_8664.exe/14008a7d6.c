/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008a7d6 */

void FUN_14008a7d6(char *param_1,undefined8 param_2,int *param_3)

{
  undefined1 local_b0 [56];
  undefined1 local_78 [56];
  undefined1 local_40 [32];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*param_1 == '\0') {
    FUN_14000169c(local_40,"FileWalker not initialized");
    FUN_14008a8da(local_b0,local_40);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_b0,&DAT_1401a5760);
  }
  if (*param_3 + *(uint *)(param_1 + 0x28) <= *(uint *)(param_1 + 0x2c)) {
    FUN_140135ff0(param_2,(ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x20));
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + *param_3;
    return;
  }
  FUN_14000169c(local_40,"ReadBytes: Attempted to read past end of file");
  FUN_14008a8da(local_78,local_40);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_78,&DAT_1401a5760);
}

