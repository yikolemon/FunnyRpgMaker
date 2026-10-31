/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001825e */

void FUN_14001825e(longlong *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  puVar5 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  local_28 = param_3;
  if ((ulonglong)((longlong)puVar1 - (longlong)puVar5 >> 3) < param_2) {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140002001();
    }
    lVar4 = FUN_140001fba(param_2 * 8);
    lVar2 = *param_1;
    uVar7 = param_1[2] - lVar2;
    if (uVar7 != 0) {
      lVar6 = lVar2;
      if (0xfff < uVar7) {
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (ulonglong)((lVar2 + -8) - lVar6)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar7 = uVar7 + 0x27;
      }
      thunk_FUN_14018e090(lVar6,uVar7);
    }
    *param_1 = lVar4;
    lVar2 = lVar4 + param_2 * 8;
    param_1[1] = lVar2;
    param_1[2] = lVar2;
    FUN_140018364(lVar4,lVar2,&local_28);
  }
  else {
    for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
      *puVar5 = param_3;
    }
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_48);
}

