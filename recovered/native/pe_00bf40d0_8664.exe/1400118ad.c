/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400118ad */

void FUN_1400118ad(undefined8 *param_1,char *param_2,char *param_3,undefined8 *param_4,
                  undefined2 param_5,int param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  bool bVar9;
  undefined1 auStack_88 [47];
  byte local_59;
  undefined8 *local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_88;
  local_58 = param_1;
  if (param_6 < 1) {
    FUN_14000beb2(&local_50,param_2,param_3,param_7);
  }
  else {
    iVar7 = 0;
    lVar3 = 0;
    pcVar5 = (char *)*param_4;
    iVar6 = param_6;
    do {
      lVar3 = (longlong)(int)lVar3 + (longlong)*pcVar5;
      pcVar8 = pcVar5 + 1;
      bVar9 = pcVar8 == (char *)*param_4 + param_4[1];
      if (bVar9) {
        pcVar8 = pcVar5;
      }
      iVar7 = iVar7 + (uint)bVar9;
      iVar6 = iVar6 + -1;
      pcVar5 = pcVar8;
    } while (iVar6 != 0);
    pcVar5 = param_3 + -lVar3;
    FUN_14000beb2(&local_50,param_2,pcVar5,param_7);
    iVar6 = param_6 + 1;
    do {
      puVar1 = local_50;
      lVar3 = local_50[2];
      uVar4 = lVar3 + 1;
      bVar2 = 0 < iVar7;
      if ((ulonglong)local_50[3] < uVar4) {
        local_59 = 0 < iVar7;
        (**(code **)*local_50)(local_50);
        lVar3 = puVar1[2];
        uVar4 = lVar3 + 1;
        bVar2 = local_59;
      }
      pcVar8 = pcVar8 + -(ulonglong)(iVar7 < 1);
      iVar7 = iVar7 - (uint)bVar2;
      puVar1[2] = uVar4;
      *(undefined2 *)(puVar1[1] + lVar3 * 2) = param_5;
      FUN_14000beb2(&local_50,pcVar5,pcVar5 + *pcVar8,puVar1);
      pcVar5 = pcVar5 + *pcVar8;
      iVar6 = iVar6 + -1;
    } while (1 < iVar6);
  }
  *local_58 = local_50;
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_88);
  }
  return;
}

