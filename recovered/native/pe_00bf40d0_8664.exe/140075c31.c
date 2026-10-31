/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140075c31 */

int FUN_140075c31(longlong *param_1,uint param_2,int param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,char param_8)

{
  longlong *plVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  byte *pbVar8;
  char cVar9;
  code *pcVar10;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  byte *local_48;
  byte *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  iVar3 = 6;
  if ((param_4 == 0) || (*(uint *)(param_1 + 5) < param_4 + param_3)) goto LAB_140075c95;
  plVar1 = (longlong *)param_1[1];
  uVar6 = FUN_140020a41((longlong)plVar1,param_3 + *(int *)((longlong)param_1 + 0x24));
  iVar3 = (int)uVar6;
  if ((iVar3 != 0) || (iVar3 = FUN_140021039(plVar1,param_4,(longlong *)&local_48), iVar3 != 0))
  goto LAB_140075c95;
  local_40 = local_48;
  if (param_2 - 1 < 0x13) {
    pbVar8 = local_48 + param_4;
    iVar3 = 7;
    switch(param_2) {
    case 1:
    case 2:
    case 8:
    case 0x11:
      cVar9 = '\0';
      break;
    default:
      goto switchD_140075cec_caseD_3;
    case 5:
      goto switchD_140075cec_caseD_5;
    case 6:
    case 7:
    case 9:
    case 0x12:
      cVar9 = '\x01';
      break;
    case 0x13:
      goto switchD_140075cec_caseD_13;
    }
    uVar6 = FUN_140075bae((longlong)param_1,(ulonglong *)&local_40,pbVar8,cVar9);
    iVar3 = (int)uVar6;
    if (iVar3 != 0) goto switchD_140075cec_caseD_13;
    pcVar10 = FUN_140075e06;
    iVar3 = 7;
    pbVar2 = local_40;
    switch(param_2 & 0xffff) {
    case 1:
    case 6:
      break;
    case 2:
    case 7:
      uVar7 = (uint)*(ushort *)param_1[3];
      uVar4 = (uint)((ushort *)param_1[3])[1];
      uVar5 = (uVar4 + 7 >> 3) * uVar7;
      if ((uVar5 <= uVar7 * uVar4 + 7 >> 3) || (uVar5 != (int)pbVar8 - (int)local_40))
      goto switchD_140075cec_caseD_5;
      break;
    default:
      goto switchD_140075cec_caseD_3;
    case 5:
switchD_140075cec_caseD_5:
      pcVar10 = FUN_140075f82;
      break;
    case 8:
      pbVar2 = local_40 + 1;
      if (local_40 + 1 <= pbVar8) goto switchD_140075d3e_caseD_9;
      goto LAB_140075dab;
    case 9:
switchD_140075d3e_caseD_9:
      local_40 = pbVar2;
      pcVar10 = FUN_140076199;
      break;
    case 0x11:
    case 0x12:
      goto switchD_140075cec_caseD_13;
    }
    if ((*(char *)((longlong)param_1 + 0x21) != '\0') ||
       (iVar3 = FUN_140076309(param_1,param_8), iVar3 == 0)) {
      if (param_8 == '\0') {
        local_50 = param_7;
        local_58 = param_6;
        iVar3 = (*pcVar10)(param_1,local_40,pbVar8,param_5);
      }
      else {
LAB_140075dab:
        iVar3 = 0;
      }
    }
  }
  else {
switchD_140075cec_caseD_3:
    iVar3 = 8;
  }
switchD_140075cec_caseD_13:
  FUN_14002115a((longlong)plVar1,(longlong *)&local_48);
LAB_140075c95:
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStack_78)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStack_78);
}

