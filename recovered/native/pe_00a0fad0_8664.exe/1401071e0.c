/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401071e0 */

void FUN_1401071e0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res8 [4];
  
  uVar1 = *(undefined8 *)(param_4 + 8);
  local_res8[0] = param_2;
  lVar2 = FUN_14011d6e0();
  *(undefined8 *)(lVar2 + 0x60) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  lVar2 = FUN_14011d6e0();
  *(undefined8 *)(lVar2 + 0x68) = uVar1;
  lVar2 = FUN_14011d6e0();
  FUN_14011efb0(param_1,local_res8,param_3,param_4,
                (ulonglong)**(uint **)(param_4 + 0x38) + *(longlong *)(lVar2 + 0x60),0,0,0);
  return;
}

