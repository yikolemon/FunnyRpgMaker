/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14004b4ab */

void FUN_14004b4ab(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
                  undefined1 param_5,int param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  undefined1 auStack_88 [47];
  byte local_59;
  undefined8 *local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1401c9640 ^ (ulonglong)auStack_88;
  local_58 = param_1;
  if (param_6 < 1) {
    FUN_140045ba5(&local_50,param_2,param_3,param_7);
  }
  else {
    iVar6 = 0;
    lVar3 = 0;
    pcVar7 = (char *)*param_4;
    iVar5 = param_6;
    do {
      lVar3 = (longlong)(int)lVar3 + (longlong)*pcVar7;
      pcVar8 = pcVar7 + 1;
      bVar9 = pcVar8 == (char *)*param_4 + param_4[1];
      if (bVar9) {
        pcVar8 = pcVar7;
      }
      iVar6 = iVar6 + (uint)bVar9;
      iVar5 = iVar5 + -1;
      pcVar7 = pcVar8;
    } while (iVar5 != 0);
    param_3 = param_3 - lVar3;
    FUN_140045ba5(&local_50,param_2,param_3,param_7);
    param_6 = param_6 + 1;
    do {
      puVar1 = local_50;
      lVar3 = local_50[2];
      uVar4 = lVar3 + 1;
      bVar2 = 0 < iVar6;
      if ((ulonglong)local_50[3] < uVar4) {
        local_59 = 0 < iVar6;
        (**(code **)*local_50)(local_50);
        lVar3 = puVar1[2];
        uVar4 = lVar3 + 1;
        bVar2 = local_59;
      }
      pcVar8 = pcVar8 + -(ulonglong)(iVar6 < 1);
      iVar6 = iVar6 - (uint)bVar2;
      puVar1[2] = uVar4;
      *(undefined1 *)(puVar1[1] + lVar3) = param_5;
      FUN_140045ba5(&local_50,param_3,*pcVar8 + param_3,puVar1);
      param_3 = param_3 + *pcVar8;
      param_6 = param_6 + -1;
    } while (1 < param_6);
  }
  *local_58 = local_50;
  if (DAT_1401c9640 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_48 ^ (ulonglong)auStack_88);
  }
  return;
}

