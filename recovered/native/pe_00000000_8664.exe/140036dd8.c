/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140036dd8 */

void FUN_140036dd8(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [21];
  undefined1 local_23 [3];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  uVar3 = *(longlong *)(param_2 + 0x18) - *(longlong *)(param_1 + 0x18);
  uVar2 = 0;
  if (0 < (longlong)uVar3) {
    uVar2 = uVar3;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_2 + 0x18);
  local_20 = FUN_14001b11b(local_38,SUB168(auVar1 * ZEXT816(0x6666666666666667),8) >> 2,0x15);
  FUN_140019fc2(param_4,local_20,local_23);
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_58);
}

