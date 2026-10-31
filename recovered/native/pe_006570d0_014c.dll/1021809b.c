/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021809b */

int __fastcall
FUN_1021809b(int param_1,uint param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6,
            undefined4 param_7,char param_8)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  uint local_24;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  iVar7 = 6;
  if ((param_4 == 0) || (*(uint *)(param_1 + 0x18) < (uint)(param_3 + param_4))) goto LAB_102180f4;
  uVar3 = *(undefined4 *)(param_1 + 4);
  local_24 = param_2;
  iVar7 = FUN_101c461e(uVar3,param_3 + *(int *)(param_1 + 0x14));
  if ((iVar7 != 0) || (iVar7 = FUN_101c4b40(uVar3,param_4,&local_1c), iVar7 != 0))
  goto LAB_102180f4;
  local_18 = local_1c;
  local_20 = uVar3;
  if (0x12 < local_24 - 1) {
switchD_10218138_caseD_3:
    iVar7 = 8;
    goto switchD_10218138_caseD_13;
  }
  uVar5 = local_1c + param_4;
  uVar3 = 0;
  iVar7 = 7;
  switch(local_24) {
  case 1:
  case 2:
  case 8:
  case 0x11:
    break;
  default:
    goto switchD_10218138_caseD_3;
  case 5:
    goto switchD_10218138_caseD_5;
  case 6:
  case 7:
  case 9:
  case 0x12:
    uVar3 = 1;
    break;
  case 0x13:
    goto switchD_10218138_caseD_13;
  }
  iVar7 = FUN_1021801e(uVar5,uVar3);
  if (iVar7 != 0) goto switchD_10218138_caseD_13;
  pcVar6 = (code *)&LAB_1021822d;
  iVar7 = 7;
  uVar1 = local_18;
  switch(local_24 & 0xffff) {
  case 1:
  case 6:
    break;
  case 2:
  case 7:
    uVar1 = (uint)(*(ushort **)(param_1 + 0xc))[1];
    uVar4 = (uint)**(ushort **)(param_1 + 0xc);
    uVar2 = (uVar1 + 7 >> 3) * uVar4;
    if ((uVar2 <= uVar4 * uVar1 + 7 >> 3) || (uVar2 - (uVar5 - local_18) != 0))
    goto switchD_10218138_caseD_5;
    break;
  default:
    goto switchD_10218138_caseD_3;
  case 5:
switchD_10218138_caseD_5:
    pcVar6 = (code *)&LAB_102183b1;
    break;
  case 8:
    uVar1 = local_18 + 1;
    if (local_18 + 1 <= uVar5) goto switchD_10218172_caseD_9;
    iVar7 = 0;
    goto switchD_10218138_caseD_13;
  case 9:
switchD_10218172_caseD_9:
    local_18 = uVar1;
    pcVar6 = FUN_10218595;
    break;
  case 0x11:
  case 0x12:
    goto switchD_10218138_caseD_13;
  }
  if ((*(char *)(param_1 + 0x11) != '\0') || (iVar7 = FUN_102186c3(), iVar7 == 0)) {
    if (param_8 == '\0') {
      iVar7 = (*pcVar6)(param_1,local_18,uVar5,param_5,param_6,param_7);
    }
    else {
      iVar7 = 0;
    }
  }
switchD_10218138_caseD_13:
  FUN_101c4c3e(local_20,&local_1c);
LAB_102180f4:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_24)) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

