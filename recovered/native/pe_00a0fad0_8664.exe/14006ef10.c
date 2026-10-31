/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006ef10 */

undefined8 FUN_14006ef10(longlong param_1,ulonglong param_2)

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
  local_40[0] = FUN_14006f1f4();
  puVar2 = *(ulonglong **)(param_1 + 0x10);
  if (puVar2 == *(ulonglong **)(param_1 + 0x18)) {
    FUN_1400322a6(param_1 + 8,puVar2,local_40);
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
      uVar4 = FUN_14006aefc();
    }
    if (uVar4 < param_2) {
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + -8);
      FUN_14001943c(local_60,param_2);
      FUN_14006acb2(local_40,"excessive object size: ",local_60);
      FUN_14006a658(local_98,0x198,local_40,uVar3);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_98,&DAT_140196680);
    }
  }
  return 1;
}

