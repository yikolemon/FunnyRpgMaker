/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180159e6b */

undefined4
FUN_180159e6b(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             float param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  float local_64;
  ulonglong local_60;
  
  local_60 = DAT_180402640 ^ (ulonglong)auStack_88;
  if (0.0 < param_5) {
    FUN_18013799d();
  }
  lVar2 = DAT_180419160;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  uVar1 = *(undefined4 *)(*(longlong *)(lVar2 + 0x1608) + 400);
  lVar4 = FUN_18010128e();
  lVar2 = DAT_180419160;
  fVar5 = param_5 * *(float *)(lVar4 + 0x50);
  if (0.0 < param_5) {
    *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
    *(float *)(*(longlong *)(lVar2 + 0x1608) + 400) =
         *(float *)(*(longlong *)(lVar2 + 0x1608) + 400) - fVar5;
  }
  FUN_18011810d(param_1);
  local_64 = (float)FUN_180116c08();
  local_64 = fVar5 + fVar5 + local_64;
  local_68 = 0;
  uVar3 = FUN_1801391f6("##SelectableScale",param_3,param_4);
  FUN_18011834f();
  lVar2 = DAT_180419160;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  *(undefined4 *)(*(longlong *)(lVar2 + 0x1608) + 0x194) = uVar1;
  FUN_180119893(0,0);
  FUN_18013309a(param_2,0);
  if (DAT_180402640 == (local_60 ^ (ulonglong)auStack_88)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_60 ^ (ulonglong)auStack_88);
}

