/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140107260 */

void FUN_140107260(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

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
  lVar2 = FUN_14011d6e0();
  *(undefined8 *)(lVar2 + 0x60) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  lVar2 = FUN_14011d6e0();
  *(undefined8 *)(lVar2 + 0x68) = uVar1;
  lVar2 = FUN_14011d6e0();
  FUN_140106540((ulonglong)**(uint **)(param_4 + 0x38) + *(longlong *)(lVar2 + 0x60),local_38,
                *(undefined8 *)(param_4 + 8),**(undefined4 **)(param_4 + 0x10),
                in_stack_ffffffffffffffa8 & 0xffffffffffffff00);
  FUN_14011efc0(param_1,&local_res8,param_3,param_4,local_38,0,0,0);
  return;
}

