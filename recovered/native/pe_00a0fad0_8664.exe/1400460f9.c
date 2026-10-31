/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400460f9 */

undefined8 FUN_1400460f9(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_97 [23];
  undefined1 local_80 [69];
  byte local_3b;
  undefined2 local_3a;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_1401c9640 ^ (ulonglong)auStack_b8;
  if ((longlong)param_3 < 0) {
    puVar4 = local_97;
    local_98 = 0x2d;
    param_3 = -param_3;
  }
  else {
    puVar4 = &local_98;
  }
  puVar5 = local_80;
  puVar3 = local_38;
  if (param_3 < 10) {
    local_3a._1_1_ = (byte)param_3 | 0x30;
    puVar3 = (undefined1 *)((longlong)&local_3a + 1);
  }
  else {
    do {
      puVar2 = puVar3;
      uVar1 = param_3;
      param_3 = uVar1 / 100;
      *(undefined2 *)(puVar2 + -2) =
           *(undefined2 *)(&DAT_14013ae08 + (ulonglong)(uint)((int)uVar1 + (int)param_3 * -100) * 2)
      ;
      puVar3 = puVar2 + -2;
    } while (999 < uVar1);
    if (99 < uVar1) {
      puVar2[-3] = (byte)param_3 | 0x30;
      puVar3 = puVar2 + -3;
    }
  }
  lVar6 = (longlong)local_38 - (longlong)puVar3;
  if (lVar6 <= (longlong)puVar5 - (longlong)puVar4) {
    thunk_FUN_140045e1f(puVar3,lVar6,puVar4);
    puVar5 = puVar4 + lVar6;
  }
  FUN_140045ba5(param_1,&local_98,puVar5,param_2);
  if (DAT_1401c9640 != (local_30 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_30 ^ (ulonglong)auStack_b8);
  }
  return param_1;
}

