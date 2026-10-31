/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140177cdd */

int FUN_140177cdd(longlong param_1,uint param_2,int param_3,uint param_4,undefined4 param_5,
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
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  iVar3 = 6;
  if ((param_4 == 0) || (*(uint *)(param_1 + 0x28) < param_4 + param_3)) goto LAB_140177d41;
  uVar1 = *(undefined8 *)(param_1 + 8);
  iVar3 = FUN_14012d612(uVar1,param_3 + *(int *)(param_1 + 0x24));
  if ((iVar3 != 0) || (iVar3 = FUN_14012dc0a(uVar1,param_4,&local_48), iVar3 != 0))
  goto LAB_140177d41;
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
      goto switchD_140177d98_caseD_3;
    case 5:
      goto switchD_140177d98_caseD_5;
    case 6:
    case 7:
    case 9:
    case 0x12:
      uVar8 = 1;
      break;
    case 0x13:
      goto switchD_140177d98_caseD_13;
    }
    iVar3 = FUN_140177c5a(param_1,&local_40,uVar7,uVar8);
    if (iVar3 != 0) goto switchD_140177d98_caseD_13;
    pcVar9 = FUN_140177eb2;
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
      goto switchD_140177d98_caseD_5;
      break;
    default:
      goto switchD_140177d98_caseD_3;
    case 5:
switchD_140177d98_caseD_5:
      pcVar9 = FUN_14017802e;
      break;
    case 8:
      uVar2 = local_40 + 1;
      if (local_40 + 1 <= uVar7) goto switchD_140177dea_caseD_9;
      goto LAB_140177e57;
    case 9:
switchD_140177dea_caseD_9:
      local_40 = uVar2;
      pcVar9 = FUN_140178245;
      break;
    case 0x11:
    case 0x12:
      goto switchD_140177d98_caseD_13;
    }
    if ((*(char *)(param_1 + 0x21) != '\0') || (iVar3 = FUN_1401783b5(param_1,param_8), iVar3 == 0))
    {
      if (param_8 == '\0') {
        local_50 = param_7;
        local_58 = param_6;
        iVar3 = (*pcVar9)(param_1,local_40,uVar7,param_5);
      }
      else {
LAB_140177e57:
        iVar3 = 0;
      }
    }
  }
  else {
switchD_140177d98_caseD_3:
    iVar3 = 8;
  }
switchD_140177d98_caseD_13:
  FUN_14012dd2b(uVar1,&local_48);
LAB_140177d41:
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_78)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_78);
}

