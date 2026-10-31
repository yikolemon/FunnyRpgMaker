/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180078646 */

undefined4 FUN_180078646(char *param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
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
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x28) + 4;
  if (uVar1 <= *(uint *)(param_1 + 0x2c)) {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (ulonglong)*(uint *)(param_1 + 0x28));
    *(int *)(param_1 + 0x28) = (int)uVar1;
    return uVar2;
  }
  FUN_180001e92(local_30,"read: End of file reached");
  FUN_18007832a(local_68,local_30);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_68,&DAT_1803a6440);
}

