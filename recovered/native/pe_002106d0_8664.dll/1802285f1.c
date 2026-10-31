/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802285f1 */

int FUN_1802285f1(longlong param_1,uint param_2,int param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,char param_8)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_78;
  iVar3 = 6;
  if ((param_4 == 0) || (*(uint *)(param_1 + 0x28) < param_4 + param_3)) goto LAB_180228655;
  uVar1 = *(undefined8 *)(param_1 + 8);
  iVar3 = FUN_1801ce63e(uVar1,param_3 + *(int *)(param_1 + 0x24));
  if ((iVar3 != 0) || (iVar3 = FUN_1801cec36(uVar1,param_4,&local_48), iVar3 != 0))
  goto LAB_180228655;
  local_40 = local_48;
  if (param_2 - 1 < 0x13) {
    uVar7 = local_48 + param_4;
    iVar3 = 7;
    switch(param_2) {
    case 1:
    case 2:
    case 8:
    case 0x11:
      uVar8 = 0;
      break;
    default:
      goto switchD_1802286ac_caseD_3;
    case 5:
      goto switchD_1802286ac_caseD_5;
    case 6:
    case 7:
    case 9:
    case 0x12:
      uVar8 = 1;
      break;
    case 0x13:
      goto switchD_1802286ac_caseD_13;
    }
    iVar3 = FUN_18022856e(param_1,&local_40,uVar7,uVar8);
    if (iVar3 != 0) goto switchD_1802286ac_caseD_13;
    pcVar9 = FUN_1802287c6;
    uVar2 = local_40;
    iVar3 = 7;
    switch(param_2 & 0xffff) {
    case 1:
    case 6:
      break;
    case 2:
    case 7:
      uVar6 = (uint)**(ushort **)(param_1 + 0x18);
      uVar4 = (uint)(*(ushort **)(param_1 + 0x18))[1];
      uVar5 = (uVar4 + 7 >> 3) * uVar6;
      if ((uVar5 <= uVar6 * uVar4 + 7 >> 3) || (uVar5 != (int)uVar7 - (int)local_40))
      goto switchD_1802286ac_caseD_5;
      break;
    default:
      goto switchD_1802286ac_caseD_3;
    case 5:
switchD_1802286ac_caseD_5:
      pcVar9 = FUN_180228942;
      break;
    case 8:
      uVar2 = local_40 + 1;
      if (local_40 + 1 <= uVar7) goto switchD_1802286fe_caseD_9;
      goto LAB_18022876b;
    case 9:
switchD_1802286fe_caseD_9:
      local_40 = uVar2;
      pcVar9 = FUN_180228b59;
      break;
    case 0x11:
    case 0x12:
      goto switchD_1802286ac_caseD_13;
    }
    if ((*(char *)(param_1 + 0x21) != '\0') || (iVar3 = FUN_180228cc9(param_1,param_8), iVar3 == 0))
    {
      if (param_8 == '\0') {
        local_50 = param_7;
        local_58 = param_6;
        iVar3 = (*pcVar9)(param_1,local_40,uVar7,param_5);
      }
      else {
LAB_18022876b:
        iVar3 = 0;
      }
    }
  }
  else {
switchD_1802286ac_caseD_3:
    iVar3 = 8;
  }
switchD_1802286ac_caseD_13:
  FUN_1801ced57(uVar1,&local_48);
LAB_180228655:
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_78)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_78);
}

