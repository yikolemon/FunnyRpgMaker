/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140126632 */

void FUN_140126632(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  cVar1 = FUN_14011aa5d(param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_14011aa50(param_2);
    if (cVar1 == '\0') {
      if (*(char *)(param_2 + 0x24) == '\0') {
        uVar2 = (undefined4)DAT_140e94c00;
      }
      else {
        uVar2 = (undefined4)DAT_140e94ca8;
      }
    }
    else {
      uVar2 = FUN_14010bfb4(param_2);
      uVar2 = FUN_14011a192(param_2 + 0x90,uVar2);
      FUN_14010bf88(&local_38,uVar2);
      local_78 = local_38;
      uStack_74 = uStack_34;
      uStack_70 = uStack_30;
      uStack_6c = uStack_2c;
      local_68 = local_28;
      uStack_64 = uStack_24;
      uStack_60 = uStack_20;
      uStack_5c = uStack_1c;
      FUN_140130df1(local_58);
      uVar2 = FUN_14010bfb4(local_58);
    }
  }
  else if (*(char *)(param_2 + 0x24) == '\0') {
    uVar2 = (undefined4)DAT_140e94cd0;
  }
  else {
    uVar2 = (undefined4)DAT_140e8d7b0;
  }
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(uVar2);
}

