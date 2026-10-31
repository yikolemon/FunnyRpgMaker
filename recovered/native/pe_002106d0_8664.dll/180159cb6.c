/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180159cb6 */

undefined4 FUN_180159cb6(undefined8 param_1,undefined8 param_2,float param_3,float param_4)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  ulonglong local_80;
  
  fVar2 = DAT_1802ac570;
  local_80 = DAT_180402640 ^ (ulonglong)auStack_a8;
  if (param_3 < DAT_1802ac570) {
    FUN_18013799d();
  }
  lVar5 = DAT_180419160;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  uVar1 = *(undefined4 *)(*(longlong *)(lVar5 + 0x1608) + 0x15c);
  lVar4 = FUN_18010128e();
  lVar5 = DAT_180419160;
  fVar6 = (fVar2 - param_3) * *(float *)(lVar4 + 0x50);
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  *(float *)(*(longlong *)(lVar5 + 0x1608) + 0x15c) =
       *(float *)(*(longlong *)(lVar5 + 0x1608) + 0x15c) + fVar6;
  lVar5 = FUN_18010128e();
  fVar2 = *(float *)(lVar5 + 0x50);
  lVar5 = FUN_18010128e();
  local_88 = CONCAT44(param_3 * fVar2,param_3 * *(float *)(lVar5 + 0x4c));
  FUN_180101bbb(0xb);
  lVar5 = FUN_18010128e();
  FUN_180101870(0xc,param_4 * *(float *)(lVar5 + 0x54));
  uVar3 = FUN_180135c3a(param_1,param_2);
  FUN_180101ccb(2);
  lVar5 = DAT_180419160;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  *(float *)(*(longlong *)(lVar5 + 0x1608) + 0x15c) =
       fVar6 + *(float *)(*(longlong *)(lVar5 + 0x1608) + 0x15c);
  *(undefined1 *)(*(longlong *)(lVar5 + 0x1608) + 0x10b) = 1;
  *(undefined4 *)(*(longlong *)(lVar5 + 0x1608) + 0x164) = uVar1;
  if (DAT_180402640 == (local_80 ^ (ulonglong)auStack_a8)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_80 ^ (ulonglong)auStack_a8);
}

