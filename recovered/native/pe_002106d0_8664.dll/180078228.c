/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180078228 */

void FUN_180078228(char *param_1,undefined8 param_2,int param_3)

{
  undefined1 local_b0 [56];
  undefined1 local_78 [56];
  undefined1 local_40 [32];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*param_1 == '\0') {
    FUN_180001e92(local_40,"FileWalker not initialized");
    FUN_18007832a(local_b0,local_40);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_b0,&DAT_1803a6440);
  }
  if (*(uint *)(param_1 + 0x28) + param_3 <= *(uint *)(param_1 + 0x2c)) {
    FUN_1802a82f0(param_2,(ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x20),
                  param_3);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + param_3;
    return;
  }
  FUN_180001e92(local_40,"ReadBytes: Attempted to read past end of file");
  FUN_18007832a(local_78,local_40);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_78,&DAT_1803a6440);
}

