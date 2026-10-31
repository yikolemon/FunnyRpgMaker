/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800aaad8 */

void FUN_1800aaad8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int local_e8 [41];
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar1 = param_2 + 0x58;
  local_e8[0] = -1;
  FUN_18008cdc4(lVar1,param_1 + 0x50,local_e8);
  FUN_18008ca8a(lVar1,param_1);
  FUN_18008c5f2(param_2,param_1 + 8);
  FUN_18008ca8a(lVar1,param_1 + 0x28);
  FUN_18008ca8a(lVar1,param_1 + 0x2c);
  local_e8[0] = (int)((ulonglong)(*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30)) >>
                     5) * -0x33333333;
  FUN_18008ca8a(lVar1,local_e8);
  local_e8[0] = -1;
  FUN_18008cdc4(lVar1,param_1 + 0x68,local_e8);
  lVar3 = *(longlong *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar3 != lVar2) {
    do {
      FUN_1800a9bf6(local_e8,lVar3);
      local_41 = 0x79;
      FUN_18007f392(lVar1,&local_41);
      FUN_1800aac2a(local_e8,param_2);
      FUN_1800a850c(local_e8);
      lVar3 = lVar3 + 0xa0;
    } while (lVar3 != lVar2);
  }
  local_e8[0] = CONCAT31(local_e8[0]._1_3_,0x70);
  FUN_18007f392(lVar1);
  return;
}

