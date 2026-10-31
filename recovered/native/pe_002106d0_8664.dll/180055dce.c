/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180055dce */

undefined8 FUN_180055dce(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  byte *pbVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 local_98 [56];
  undefined1 local_60 [32];
  ulonglong local_40 [4];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_60[0] = 1;
  local_40[0] = FUN_18005607e();
  puVar1 = *(ulonglong **)(param_1 + 0x10);
  if (puVar1 == *(ulonglong **)(param_1 + 0x18)) {
    FUN_180052bde(param_1 + 8,puVar1,local_40);
  }
  else {
    *puVar1 = local_40[0];
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 8;
  }
  if (param_2 != 0xffffffffffffffff) {
    pbVar2 = *(byte **)(*(longlong *)(param_1 + 0x10) + -8);
    uVar3 = (ulonglong)*pbVar2;
    uVar4 = 1;
    if (uVar3 < 3) {
      uVar4 = *(ulonglong *)(&DAT_1802b0c78 + uVar3 * 8);
    }
    if (uVar4 < param_2) {
      FUN_180052e03(local_60,param_2);
      FUN_180052994(local_40,"excessive object size: ",local_60);
      FUN_18005233a(local_98,0x198,local_40,pbVar2);
                    /* WARNING: Subroutine does not return */
      FUN_18026d5b0(local_98,&DAT_1803915c0);
    }
  }
  return 1;
}

