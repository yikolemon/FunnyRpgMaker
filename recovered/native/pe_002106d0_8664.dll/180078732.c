/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180078732 */

undefined4 FUN_180078732(char *param_1)

{
  undefined1 uVar1;
  uint uVar2;
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
  uVar2 = *(uint *)(param_1 + 0x28);
  if (uVar2 < *(uint *)(param_1 + 0x2c)) {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar2);
    *(uint *)(param_1 + 0x28) = uVar2 + 1;
    return CONCAT31((int3)(uVar2 >> 8),uVar1);
  }
  FUN_180001e92(local_30,"read: End of file reached");
  FUN_18007832a(local_68,local_30);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_68,&DAT_1803a6440);
}

