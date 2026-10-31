/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008a384 */

undefined8 FUN_18008a384(longlong param_1,ulonglong param_2)

{
  char cVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 local_98 [56];
  undefined1 local_60 [32];
  ulonglong local_40 [4];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_60[0] = 1;
  local_40[0] = FUN_18008a600();
  puVar2 = *(ulonglong **)(param_1 + 0x10);
  if (puVar2 == *(ulonglong **)(param_1 + 0x18)) {
    FUN_180052bde(param_1 + 8,puVar2,local_40);
  }
  else {
    *puVar2 = local_40[0];
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 8;
  }
  if (param_2 != 0xffffffffffffffff) {
    cVar1 = **(char **)(*(longlong *)(param_1 + 0x10) + -8);
    if (cVar1 == '\x02') {
      uVar4 = 0xfffffffffffffff;
    }
    else if (cVar1 == '\x01') {
      uVar4 = 0x555555555555555;
    }
    else {
      uVar4 = FUN_180087b54();
    }
    if (uVar4 < param_2) {
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + -8);
      FUN_180052e03(local_60,param_2);
      FUN_180052994(local_40,"excessive object size: ",local_60);
      FUN_18005233a(local_98,0x198,local_40,uVar3);
                    /* WARNING: Subroutine does not return */
      FUN_18026d5b0(local_98,&DAT_1803915c0);
    }
  }
  return 1;
}

