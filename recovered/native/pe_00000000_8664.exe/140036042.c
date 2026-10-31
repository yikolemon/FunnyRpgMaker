/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140036042 */

void FUN_140036042(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_2 + 0x18);
  lVar3 = lVar1 / 10000000;
  lVar2 = -lVar3;
  if (-1 < lVar2) {
    lVar3 = lVar2;
  }
  local_20 = FUN_14001b11b(local_38,lVar3,0x15);
  if (lVar1 < -9999999) {
    *(undefined1 *)(local_20 + -1) = 0x2d;
    local_20 = local_20 + -1;
  }
  FUN_140019fc2(param_4,local_20);
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_58);
}

