/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180106514 */

void FUN_180106514(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  *(undefined4 *)(DAT_180419160 + 0x2974) = 0;
  if (param_1 != 0) {
    local_20 = 0;
    uVar1 = FUN_18011d898();
    lVar2 = FUN_1800fee30(param_1,&DAT_1803611fa);
    if (lVar2 != 0) {
      thunk_FUN_180286a64(uVar1,1,local_20,lVar2);
      FUN_1800fefb0(lVar2);
    }
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

