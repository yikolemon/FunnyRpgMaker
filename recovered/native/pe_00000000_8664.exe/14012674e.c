/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012674e */

undefined8 FUN_14012674e(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 local_1d8 [152];
  longlong *local_140;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  cVar1 = FUN_14011aa5d(param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_14011aa50(param_2);
    if (cVar1 == '\0') {
      uVar3 = DAT_140e94c00;
      if (*(char *)(param_2 + 0x24) == '\0') {
        uVar3 = DAT_140e94ca8;
      }
    }
    else {
      FUN_1401208a0(local_1d8);
      if (local_140 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1401899e0();
      }
      uVar2 = (**(code **)(*local_140 + 0x10))(local_140,param_2);
      uVar3 = FUN_140126ca4(uVar2,DAT_140e94cc8);
      FUN_14010c2d4(local_1d8);
    }
  }
  else {
    uVar3 = 0;
    if (*(char *)(param_2 + 0x24) == '\0') {
      uVar3 = DAT_140e8e0e8;
    }
  }
  return uVar3;
}

