/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0046f81b */

int __fastcall
FUN_0046f81b(int *param_1,uint param_2,int param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,char param_8)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  byte *pbVar7;
  code *pcVar8;
  int iVar9;
  uint local_24;
  int *local_20;
  byte *local_1c;
  byte *local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_24;
  iVar9 = 6;
  if ((param_4 == 0) || ((uint)param_1[6] < param_3 + param_4)) goto LAB_0046f874;
  piVar1 = (int *)param_1[1];
  local_24 = param_2;
  iVar9 = FUN_00420696((int)piVar1,param_3 + param_1[5]);
  if ((iVar9 != 0) || (iVar9 = FUN_00420bb8(piVar1,param_4,(int *)&local_1c), iVar9 != 0))
  goto LAB_0046f874;
  local_18 = local_1c;
  local_20 = piVar1;
  if (0x12 < local_24 - 1) {
switchD_0046f8b8_caseD_3:
    iVar9 = 8;
    goto switchD_0046f8b8_caseD_13;
  }
  pbVar7 = local_1c + param_4;
  cVar5 = '\0';
  iVar9 = 7;
  switch(local_24) {
  case 1:
  case 2:
  case 8:
  case 0x11:
    break;
  default:
    goto switchD_0046f8b8_caseD_3;
  case 5:
    goto switchD_0046f8b8_caseD_5;
  case 6:
  case 7:
  case 9:
  case 0x12:
    cVar5 = '\x01';
    break;
  case 0x13:
    goto switchD_0046f8b8_caseD_13;
  }
  iVar9 = FUN_0046f79e((int)param_1,(uint *)&local_18,pbVar7,cVar5);
  if (iVar9 != 0) goto switchD_0046f8b8_caseD_13;
  pcVar8 = (code *)&LAB_0046f9ad;
  iVar9 = 7;
  pbVar2 = local_18;
  switch(local_24 & 0xffff) {
  case 1:
  case 6:
    break;
  case 2:
  case 7:
    uVar3 = (uint)((ushort *)param_1[3])[1];
    uVar6 = (uint)*(ushort *)param_1[3];
    uVar4 = (uVar3 + 7 >> 3) * uVar6;
    if ((uVar4 <= uVar6 * uVar3 + 7 >> 3) || (uVar4 - ((int)pbVar7 - (int)local_18) != 0))
    goto switchD_0046f8b8_caseD_5;
    break;
  default:
    goto switchD_0046f8b8_caseD_3;
  case 5:
switchD_0046f8b8_caseD_5:
    pcVar8 = (code *)&LAB_0046fb31;
    break;
  case 8:
    pbVar2 = local_18 + 1;
    if (local_18 + 1 <= pbVar7) goto switchD_0046f8f2_caseD_9;
    iVar9 = 0;
    goto switchD_0046f8b8_caseD_13;
  case 9:
switchD_0046f8f2_caseD_9:
    local_18 = pbVar2;
    pcVar8 = FUN_0046fd15;
    break;
  case 0x11:
  case 0x12:
    goto switchD_0046f8b8_caseD_13;
  }
  if ((*(char *)((int)param_1 + 0x11) != '\0') ||
     (iVar9 = FUN_0046fe43(param_1,param_8), iVar9 == 0)) {
    if (param_8 == '\0') {
      iVar9 = (*pcVar8)(param_1,local_18,pbVar7,param_5,param_6,param_7);
    }
    else {
      iVar9 = 0;
    }
  }
switchD_0046f8b8_caseD_13:
  FUN_00420cb6((int)local_20,(int *)&local_1c);
LAB_0046f874:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_24)) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_24);
}

