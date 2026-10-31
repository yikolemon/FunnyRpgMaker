/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180078568 */

void FUN_180078568(char *param_1,int *param_2)

{
  undefined1 local_a0 [56];
  undefined1 local_68 [56];
  undefined1 local_30 [32];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  if (*param_1 == '\0') {
    FUN_180001e92(local_30,"FileWalker not initialized");
    FUN_18007832a(local_a0,local_30);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_a0,&DAT_1803a6440);
  }
  if ((uint)(*param_2 + *(int *)(param_1 + 0x28)) <= *(uint *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x28) = *param_2 + *(int *)(param_1 + 0x28);
    return;
  }
  FUN_180001e92(local_30,"Skip: Attempted to skip past end of file");
  FUN_18007832a(local_68,local_30);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_68,&DAT_1803a6440);
}

