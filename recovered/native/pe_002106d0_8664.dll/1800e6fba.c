/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e6fba */

longlong FUN_1800e6fba(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined8 local_res20;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  local_res20 = param_4;
  FUN_1800e9574(param_1,param_2,3000);
  if (param_3 != 0) {
    lVar1 = param_1 + 0x1005;
    puVar3 = &local_res20;
    puVar2 = (ulonglong *)FUN_1800434e2();
    FUN_180272944(*puVar2 | 2,lVar1,0x1000,param_3,0,&local_res20,puVar3,param_1,uVar4);
  }
  return param_1;
}

