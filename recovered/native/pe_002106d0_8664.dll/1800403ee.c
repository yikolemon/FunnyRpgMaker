/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800403ee */

void FUN_1800403ee(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_2 + 0x18);
  lVar3 = lVar1 / 10000000;
  lVar2 = -lVar3;
  if (-1 < lVar2) {
    lVar3 = lVar2;
  }
  local_20 = FUN_180025acd(local_38,lVar3,0x15);
  if (lVar1 < -9999999) {
    *(undefined1 *)(local_20 + -1) = 0x2d;
    local_20 = local_20 + -1;
  }
  FUN_180018bde(param_4,local_20);
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_58);
}

