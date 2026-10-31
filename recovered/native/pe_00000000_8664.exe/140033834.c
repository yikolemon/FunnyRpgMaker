/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140033834 */

void FUN_140033834(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 local_68 [24];
  undefined8 local_50;
  undefined1 local_48 [40];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = *(longlong *)(param_2 + 0x18) - *(longlong *)(param_1 + 0x18);
  uVar4 = 0;
  if (0 < (longlong)uVar3) {
    uVar4 = uVar3;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  uVar4 = SUB168(auVar2 * ZEXT816(0x6666666666666667),8) >> 2;
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_2 + 0x18);
  lVar1 = 0x3f;
  if ((uVar4 | 1) != 0) {
    for (; (uVar4 | 1) >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  FUN_140030a1c(local_48,(uint)(byte)(&DAT_1401c9dc0)[lVar1] -
                         (uint)(uVar4 < *(ulonglong *)
                                         (&DAT_1401c9e00 +
                                         (ulonglong)(byte)(&DAT_1401c9dc0)[lVar1] * 8)),param_1 + 8)
  ;
  local_50 = FUN_14001b11b(local_68,uVar4,0x15);
  FUN_140019fc2(param_4,local_50);
  FUN_140030a90(local_48);
  return;
}

