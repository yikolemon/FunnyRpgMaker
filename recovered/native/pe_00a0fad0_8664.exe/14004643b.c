/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14004643b */

undefined8 FUN_14004643b(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined *puStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [24];
  undefined1 local_70 [69];
  byte local_2b;
  undefined2 local_2a;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_1401c9640 ^ (ulonglong)auStack_a8;
  puVar2 = local_28;
  if (param_3 < 10) {
    local_2a._1_1_ = (byte)param_3 | 0x30;
    puVar2 = (undefined1 *)((longlong)&local_2a + 1);
  }
  else {
    do {
      uVar4 = param_3;
      puVar1 = puVar2;
      param_3 = uVar4 / 100;
      *(undefined2 *)(puVar1 + -2) =
           *(undefined2 *)(&DAT_14013ae08 + (ulonglong)(uint)((int)uVar4 + (int)param_3 * -100) * 2)
      ;
      puVar2 = puVar1 + -2;
    } while (999 < uVar4);
    if (99 < uVar4) {
      puVar1[-3] = (byte)param_3 | 0x30;
      puVar2 = puVar1 + -3;
    }
  }
  lVar3 = (longlong)local_28 - (longlong)puVar2;
  if (lVar3 < 0x19) {
    puStack_b0 = (undefined *)0x1400464ee;
    thunk_FUN_140045e1f(puVar2,lVar3,local_88);
    puVar2 = local_88 + lVar3;
  }
  else {
    puVar2 = local_70;
  }
  puStack_b0 = (undefined *)0x140046506;
  FUN_140045ba5(param_1,local_88,puVar2,param_2);
  if (DAT_1401c9640 != (local_20 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    puStack_b0 = &UNK_14004653b;
    FUN_1400d3720(local_20 ^ (ulonglong)auStack_a8);
  }
  return param_1;
}

