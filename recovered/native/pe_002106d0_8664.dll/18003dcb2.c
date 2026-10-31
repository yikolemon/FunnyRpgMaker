/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003dcb2 */

void FUN_18003dcb2(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 local_68 [24];
  undefined8 local_50;
  undefined1 local_48 [40];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar2 = *(longlong *)(param_2 + 0x18) - *(longlong *)(param_1 + 0x18);
  uVar3 = 0;
  if (0 < (longlong)uVar2) {
    uVar3 = uVar2;
  }
  uVar3 = uVar3 / 10000;
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_2 + 0x18);
  lVar1 = 0x3f;
  if ((uVar3 | 1) != 0) {
    for (; (uVar3 | 1) >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  FUN_18003ae98(local_48,(uint)(byte)(&DAT_1802b1db0)[lVar1] -
                         (uint)(uVar3 < *(ulonglong *)
                                         (&DAT_1802b1df0 +
                                         (ulonglong)(byte)(&DAT_1802b1db0)[lVar1] * 8)),param_1 + 8)
  ;
  local_50 = FUN_180025acd(local_68,uVar3,0x15);
  FUN_180018bde(param_4,local_50);
  FUN_18003af0c(local_48);
  return;
}

