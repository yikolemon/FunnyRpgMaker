/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800775e0 */

void FUN_1800775e0(undefined1 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined1 local_78 [56];
  undefined1 local_40 [32];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1800783ce();
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((longlong *)(param_1 + 0x30) != param_2) {
    FUN_180078422(param_1 + 0x30,*param_2,param_2[1] - *param_2);
  }
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x30);
  uVar1 = *(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30);
  if (uVar1 >> 0x20 == 0) {
    *(int *)(param_1 + 0x2c) = (int)uVar1;
    *param_1 = 1;
    return;
  }
  FUN_180001e92(local_40,"Data size exceeds maximum uint32_t value");
  FUN_18007832a(local_78,local_40);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_78,&DAT_1803a6440);
}

