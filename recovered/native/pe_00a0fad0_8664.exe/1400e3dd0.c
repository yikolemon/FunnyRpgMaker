/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400e3dd0 */

void FUN_1400e3dd0(undefined8 param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,
                  undefined1 param_5,undefined8 param_6,uint *param_7,undefined8 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char ****ppppcVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined2 auStack_a8 [16];
  undefined1 local_88;
  undefined8 local_80;
  undefined1 *local_78;
  char ***local_68 [2];
  ulonglong local_58;
  ulonglong local_50;
  undefined1 local_48 [20];
  undefined2 local_34;
  ulonglong local_30;
  
  local_30 = DAT_1401c9640 ^ (ulonglong)auStack_a8;
  local_78 = local_48;
  local_80 = param_6;
  local_88 = param_5;
  FUN_1400e3f50(param_1,local_68);
  if ((char)param_3[1] == '\0') {
    FUN_1400e3870(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_1400e3870(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 != 0) goto LAB_1400e3e74;
  }
  else if (*param_4 == 0) goto LAB_1400e3e74;
  *param_7 = *param_7 | 1;
LAB_1400e3e74:
  if (local_58 == 0) {
    *param_7 = *param_7 | 2;
  }
  else {
    uVar6 = 0;
    if ((ulonglong)param_8[2] < local_58) {
      FUN_1400088c8(param_8,local_58 - param_8[2],0);
    }
    else {
      FUN_1400de2e0();
    }
    ppppcVar4 = local_68;
    if (0xf < local_50) {
      ppppcVar4 = (char ****)local_68[0];
    }
    if (*(char *)ppppcVar4 == '-') {
      puVar5 = param_8;
      if (7 < (ulonglong)param_8[3]) {
        puVar5 = (undefined8 *)*param_8;
      }
      *(undefined2 *)puVar5 = local_34;
      uVar6 = 1;
    }
    for (; uVar6 < local_58; uVar6 = uVar6 + 1) {
      ppppcVar4 = local_68;
      if (0xf < local_50) {
        ppppcVar4 = (char ****)local_68[0];
      }
      puVar5 = param_8;
      if (7 < (ulonglong)param_8[3]) {
        puVar5 = (undefined8 *)*param_8;
      }
      *(undefined2 *)((longlong)puVar5 + uVar6 * 2) =
           auStack_a8[*(char *)((longlong)ppppcVar4 + uVar6)];
    }
  }
  uVar1 = *(undefined4 *)((longlong)param_3 + 4);
  lVar3 = param_3[1];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
  *param_2 = (int)*param_3;
  param_2[1] = uVar1;
  param_2[2] = (int)lVar3;
  param_2[3] = uVar2;
  FUN_1400017de(local_68);
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_30 ^ (ulonglong)auStack_a8);
}

