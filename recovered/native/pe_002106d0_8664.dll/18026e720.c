/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18026e720 */

void FUN_18026e720(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res8;
  ulonglong in_stack_ffffffffffffffa8;
  undefined1 local_38 [4];
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  
  uVar1 = *(undefined8 *)(param_4 + 8);
  local_34 = 0;
  local_2c = 0;
  local_24 = 0;
  local_38[0] = 0;
  local_res8 = param_2;
  lVar2 = FUN_18028cfc0();
  *(undefined8 *)(lVar2 + 0x60) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  lVar2 = FUN_18028cfc0();
  *(undefined8 *)(lVar2 + 0x68) = uVar1;
  lVar2 = FUN_18028cfc0();
  FUN_18026da00((ulonglong)**(uint **)(param_4 + 0x38) + *(longlong *)(lVar2 + 0x60),local_38,
                *(undefined8 *)(param_4 + 8),**(undefined4 **)(param_4 + 0x10),
                in_stack_ffffffffffffffa8 & 0xffffffffffffff00);
  FUN_18028eb20(param_1,&local_res8,param_3,param_4,local_38,0,0,0);
  return;
}

