/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800776a8 */

undefined4 FUN_1800776a8(char *param_1,uint *param_2)

{
  uint uVar1;
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
  uVar1 = *param_2;
  if (uVar1 < *(uint *)(param_1 + 0x2c)) {
    return CONCAT31((int3)(uVar1 >> 8),
                    *(undefined1 *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar1));
  }
  FUN_180001e92(local_30,"At: Attempted to read past end of file");
  FUN_18007832a(local_68,local_30);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_68,&DAT_1803a6440);
}

