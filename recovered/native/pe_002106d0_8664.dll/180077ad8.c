/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180077ad8 */

void FUN_180077ad8(char *param_1,uint *param_2)

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
  if (*param_2 <= *(uint *)(param_1 + 0x2c)) {
    *(uint *)(param_1 + 0x28) = *param_2;
    return;
  }
  FUN_180001e92(local_30,"Seek: Attempted to seek past end of file");
  FUN_18007832a(local_68,local_30);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_68,&DAT_1803a6440);
}

