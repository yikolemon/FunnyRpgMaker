/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140030c2a */

void FUN_140030c2a(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 local_68 [24];
  undefined8 local_50;
  undefined1 local_48 [40];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar2 = *(ulonglong *)(param_2 + 0x20) | 1;
  lVar1 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  FUN_140030a1c(local_48,(uint)(byte)(&DAT_1401c9dc0)[lVar1] -
                         (uint)(*(ulonglong *)(param_2 + 0x20) <
                               *(ulonglong *)
                                (&DAT_1401c9e00 + (ulonglong)(byte)(&DAT_1401c9dc0)[lVar1] * 8)),
                param_1 + 8);
  local_50 = FUN_14001b11b(local_68,*(undefined8 *)(param_2 + 0x20),0x15);
  FUN_140019fc2(param_4,local_50);
  FUN_140030a90(local_48);
  return;
}

