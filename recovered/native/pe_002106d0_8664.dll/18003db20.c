/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003db20 */

void FUN_18003db20(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 local_68 [24];
  undefined8 local_50;
  undefined1 local_48 [40];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_2 + 0x18) - *(longlong *)(param_1 + 0x18);
  lVar3 = 0;
  if (0 < lVar1) {
    lVar3 = lVar1;
  }
  uVar2 = lVar3 * 100;
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_2 + 0x18);
  lVar3 = 0x3f;
  if (uVar2 + 1 != 0) {
    for (; uVar2 + 1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  FUN_18003ae98(local_48,(uint)(byte)(&DAT_1802b1db0)[lVar3] -
                         (uint)(uVar2 < *(ulonglong *)
                                         (&DAT_1802b1df0 +
                                         (ulonglong)(byte)(&DAT_1802b1db0)[lVar3] * 8)),param_1 + 8)
  ;
  local_50 = FUN_180025acd(local_68,uVar2,0x15);
  FUN_180018bde(param_4,local_50);
  FUN_18003af0c(local_48);
  return;
}

