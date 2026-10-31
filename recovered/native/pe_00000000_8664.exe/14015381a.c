/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015381a */

longlong FUN_14015381a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  int local_38;
  uint local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x30);
    local_38 = FUN_140152d24(param_1 + 0x30,param_2,&local_30,&local_34);
    if (local_38 == 0) {
      lVar2 = FUN_14012afda(uVar1,local_34 + 1,&local_38);
      if (local_38 == 0) {
        FUN_1401c5180(lVar2,local_30,(ulonglong)local_34);
        *(undefined1 *)(lVar2 + (ulonglong)local_34) = 0;
      }
      FUN_140152d14(param_1 + 0x30,&local_30);
      goto LAB_1401538a5;
    }
  }
  lVar2 = 0;
LAB_1401538a5:
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_58)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_58);
}

