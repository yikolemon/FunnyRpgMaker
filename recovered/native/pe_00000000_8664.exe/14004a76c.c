/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14004a76c */

undefined8 FUN_14004a76c(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined *puStack_90;
  undefined1 auStack_88 [32];
  undefined1 local_68 [24];
  undefined1 local_50 [37];
  byte local_2b;
  undefined2 local_2a;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  puVar2 = local_28;
  if ((uint)param_3 < 10) {
    local_2a._1_1_ = (byte)param_3 | 0x30;
    puVar2 = (undefined1 *)((longlong)&local_2a + 1);
  }
  else {
    do {
      puVar1 = puVar2;
      uVar4 = (uint)param_3;
      uVar5 = param_3 & 0xffffffff;
      param_3 = uVar5 / 100;
      *(undefined2 *)(puVar1 + -2) =
           *(undefined2 *)(&DAT_1401c8c78 + (ulonglong)(uVar4 + (int)(uVar5 / 100) * -100) * 2);
      puVar2 = puVar1 + -2;
    } while (999 < uVar4);
    if (99 < uVar4) {
      puVar1[-3] = (byte)param_3 | 0x30;
      puVar2 = puVar1 + -3;
    }
  }
  lVar3 = (longlong)local_28 - (longlong)puVar2;
  if (lVar3 < 0x19) {
    puStack_90 = (undefined *)0x14004a809;
    thunk_FUN_14004a75e(puVar2,lVar3,local_68);
    puVar2 = local_68 + lVar3;
  }
  else {
    puVar2 = local_50;
  }
  puStack_90 = (undefined *)0x14004a821;
  FUN_14004a4e4(param_1,local_68,puVar2,param_2);
  if (DAT_140f17b40 != (local_20 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    puStack_90 = &UNK_14004a84d;
    FUN_140188a00(local_20 ^ (ulonglong)auStack_88);
  }
  return param_1;
}

