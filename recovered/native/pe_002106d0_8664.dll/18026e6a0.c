/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18026e6a0 */

void FUN_18026e6a0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res8 [4];
  
  uVar1 = *(undefined8 *)(param_4 + 8);
  local_res8[0] = param_2;
  lVar2 = FUN_18028cfc0();
  *(undefined8 *)(lVar2 + 0x60) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  lVar2 = FUN_18028cfc0();
  *(undefined8 *)(lVar2 + 0x68) = uVar1;
  lVar2 = FUN_18028cfc0();
  FUN_18028eb10(param_1,local_res8,param_3,param_4,
                (ulonglong)**(uint **)(param_4 + 0x38) + *(longlong *)(lVar2 + 0x60),0,0,0);
  return;
}

