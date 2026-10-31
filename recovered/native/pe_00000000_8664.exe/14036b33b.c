/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14036b33b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_14036b33b(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
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
  
  local_60 = ram0x000140613b10 ^ (ulonglong)auStack_88;
  if (0.0 < param_5) {
    FUN_140348e6d();
  }
  lVar2 = DAT_14062a630;
  *(undefined1 *)(*(longlong *)(DAT_14062a630 + 0x1608) + 0x10b) = 1;
  uVar1 = *(undefined4 *)(*(longlong *)(lVar2 + 0x1608) + 400);
  lVar4 = FUN_14031275e();
  lVar2 = DAT_14062a630;
  fVar5 = param_5 * *(float *)(lVar4 + 0x50);
  if (0.0 < param_5) {
    *(undefined1 *)(*(longlong *)(DAT_14062a630 + 0x1608) + 0x10b) = 1;
    *(float *)(*(longlong *)(lVar2 + 0x1608) + 400) =
         *(float *)(*(longlong *)(lVar2 + 0x1608) + 400) - fVar5;
  }
  FUN_1403295dd(param_1);
  local_64 = (float)FUN_1403280d8();
  local_64 = fVar5 + fVar5 + local_64;
  local_68 = 0;
  uVar3 = FUN_14034a6c6("medSelected",param_3,param_4);
  FUN_14032981f();
  lVar2 = DAT_14062a630;
  *(undefined1 *)(*(longlong *)(DAT_14062a630 + 0x1608) + 0x10b) = 1;
  *(undefined4 *)(*(longlong *)(lVar2 + 0x1608) + 0x194) = uVar1;
  FUN_14032ad63(0,0);
  FUN_14034456a(param_2,0);
  if (ram0x000140613b10 == (local_60 ^ (ulonglong)auStack_88)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_60 ^ (ulonglong)auStack_88);
}

