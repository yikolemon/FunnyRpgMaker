/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003b0a6 */

void FUN_18003b0a6(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_18003ae98(local_48,(uint)(byte)(&DAT_1802b1db0)[lVar1] -
                         (uint)(*(ulonglong *)(param_2 + 0x20) <
                               *(ulonglong *)
                                (&DAT_1802b1df0 + (ulonglong)(byte)(&DAT_1802b1db0)[lVar1] * 8)),
                param_1 + 8);
  local_50 = FUN_180025acd(local_68,*(undefined8 *)(param_2 + 0x20),0x15);
  FUN_180018bde(param_4,local_50);
  FUN_18003af0c(local_48);
  return;
}

