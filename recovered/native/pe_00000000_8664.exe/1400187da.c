/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400187da */

void FUN_1400187da(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [36];
  tm local_64;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x4c) == '\x01') {
    lVar2 = *(longlong *)(param_2 + 0x18) / 10000000 -
            *(longlong *)(param_2 + 0x18) / -0x6769800000000000;
    if (lVar2 != *(longlong *)(param_1 + 0x78)) {
      local_40 = lVar2;
      if (*(int *)(param_1 + 0x48) == 0) {
        thunk_FUN_14019f7ec(&local_64);
      }
      else {
        common_gmtime_s<__int64>(&local_64,&local_40);
      }
      *(int *)(param_1 + 0x70) = local_64.tm_isdst;
      *(undefined8 *)(param_1 + 0x60) = local_64._16_8_;
      *(undefined8 *)(param_1 + 0x68) = local_64._24_8_;
      *(int *)(param_1 + 0x50) = local_64.tm_sec;
      *(int *)(param_1 + 0x54) = local_64.tm_min;
      *(int *)(param_1 + 0x58) = local_64.tm_hour;
      *(int *)(param_1 + 0x5c) = local_64.tm_mday;
      *(longlong *)(param_1 + 0x78) = lVar2;
    }
  }
  puVar3 = *(undefined8 **)(param_1 + 0x80);
  puVar1 = *(undefined8 **)(param_1 + 0x88);
  if (puVar3 != puVar1) {
    do {
      (**(code **)(*(longlong *)*puVar3 + 8))((longlong *)*puVar3,param_2,param_1 + 0x50,param_3);
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar1);
  }
  if (*(ulonglong *)(param_1 + 0x40) < 0x10) {
    lVar2 = param_1 + 0x28;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x28);
  }
  FUN_140019fc2(param_3,lVar2,*(longlong *)(param_1 + 0x38) + lVar2);
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_88);
}

