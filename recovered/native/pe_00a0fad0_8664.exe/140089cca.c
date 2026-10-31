/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140089cca */

void FUN_140089cca(undefined1 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined1 local_78 [56];
  undefined1 local_40 [32];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_14008a97e();
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((longlong *)(param_1 + 0x30) != param_2) {
    FUN_1400587f4(param_1 + 0x30,*param_2,param_2[1] - *param_2);
  }
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x30);
  uVar1 = *(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30);
  if (uVar1 >> 0x20 == 0) {
    *(int *)(param_1 + 0x2c) = (int)uVar1;
    *param_1 = 1;
    return;
  }
  FUN_14000169c(local_40,"Data size exceeds maximum uint32_t value");
  FUN_14008a8da(local_78,local_40);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_78,&DAT_1401a5760);
}

