/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140065678 */

undefined8 FUN_140065678(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_67 [23];
  undefined1 local_50 [37];
  byte local_2b;
  undefined1 local_2a [2];
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  if ((int)param_3 < 0) {
    puVar4 = local_67;
    local_68 = 0x2d;
    param_3 = -param_3;
  }
  else {
    puVar4 = &local_68;
  }
  puVar5 = local_50;
  puVar3 = &local_28;
  if (param_3 < 10) {
    local_2a[1] = (byte)param_3 | 0x30;
    puVar3 = (ulonglong *)(local_2a + 1);
  }
  else {
    do {
      uVar1 = param_3;
      puVar2 = puVar3;
      *(undefined2 *)((longlong)puVar2 + -2) =
           *(undefined2 *)(&DAT_1401c8c78 + (ulonglong)(uVar1 % 100) * 2);
      puVar3 = (ulonglong *)((longlong)puVar2 + -2);
      param_3 = uVar1 / 100;
    } while (999 < uVar1);
    if (99 < uVar1) {
      *(byte *)((longlong)puVar2 + -3) = (byte)(uVar1 / 100) | 0x30;
      puVar3 = (ulonglong *)((longlong)puVar2 + -3);
    }
  }
  lVar6 = (longlong)&local_28 - (longlong)puVar3;
  if (lVar6 <= (longlong)puVar5 - (longlong)puVar4) {
    thunk_FUN_14004a75e(puVar3,lVar6,puVar4);
    puVar5 = puVar4 + lVar6;
  }
  FUN_140065771(param_1,&local_68,puVar5,param_2);
  if (DAT_140f17b40 != (local_28 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_28 ^ (ulonglong)auStack_88);
  }
  return param_1;
}

