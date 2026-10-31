/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005ee2f */

undefined2 * FUN_14005ee2f(char *param_1,undefined8 param_2)

{
  uint uVar1;
  size_t sVar2;
  undefined2 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  char *pcVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_4a [2];
  ulonglong local_48;
  
  local_48 = DAT_1401c9640 ^ (ulonglong)auStack_88;
  local_58 = 0;
  sVar2 = strlen(param_1);
  lVar8 = 1;
  lVar4 = sVar2 + 1;
  if (lVar4 != 0) {
    lVar8 = 0;
    lVar5 = lVar4;
    pcVar7 = param_1;
    do {
      local_68 = param_2;
      uVar1 = FUN_1400da650(local_4a,pcVar7,lVar5,&local_58);
      if ((int)uVar1 < 1) break;
      pcVar7 = pcVar7 + uVar1;
      lVar8 = lVar8 + 1;
      lVar5 = lVar5 - (ulonglong)uVar1;
    } while (lVar5 != 0);
    lVar8 = lVar8 + 1;
  }
  puVar3 = (undefined2 *)_calloc_base(lVar8,2);
  if (puVar3 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d9cb0();
  }
  local_60 = 0;
  puVar6 = puVar3;
  if (lVar8 != 0) {
    do {
      local_68 = param_2;
      uVar1 = FUN_1400da650(puVar6,param_1,lVar4,&local_60);
      if ((int)uVar1 < 1) break;
      param_1 = param_1 + uVar1;
      puVar6 = puVar6 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  *puVar6 = 0;
  if (DAT_1401c9640 == (local_48 ^ (ulonglong)auStack_88)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_48 ^ (ulonglong)auStack_88);
}

