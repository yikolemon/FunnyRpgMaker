/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140036e6a */

void FUN_140036e6a(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [21];
  undefined1 local_23 [3];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  uVar2 = *(longlong *)(param_2 + 0x18) - *(longlong *)(param_1 + 0x18);
  uVar1 = 0;
  if (0 < (longlong)uVar2) {
    uVar1 = uVar2;
  }
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_2 + 0x18);
  local_20 = FUN_14001b11b(local_38,uVar1 / 10000,0x15);
  FUN_140019fc2(param_4,local_20,local_23);
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_58);
}

