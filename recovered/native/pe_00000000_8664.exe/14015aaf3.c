/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015aaf3 */

undefined8
FUN_14015aaf3(undefined8 param_1,undefined4 *param_2,int param_3,int param_4,undefined8 param_5)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;
  longlong *plVar12;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  *(undefined8 *)(param_2 + 0xae) = 0;
  *param_2 = 1;
  lVar7 = FUN_14012c267(*(undefined8 *)(param_2 + 0x24),"postscript-cmaps",1);
  *(longlong *)(param_2 + 0xa6) = lVar7;
  lVar8 = FUN_14012c249(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),"psaux");
  *(longlong *)(param_2 + 0xa8) = lVar8;
  if (lVar8 == 0) {
    uVar9 = 0xb;
    goto LAB_14015ac2c;
  }
  uVar9 = FUN_14015b3ed(param_2);
  if ((param_3 < 0 || (int)uVar9 != 0) || (uVar9 = 6, (short)param_3 != 0)) goto LAB_14015ac2c;
  param_2[4] = param_2[0x90];
  param_2[0xe] = 0;
  param_2[1] = 0;
  param_2[2] = (uint)(*(char *)(param_2 + 0x41) != '\0') << 2 | param_2[2] | 0xa11;
  pcVar10 = *(char **)(param_2 + 0x3c);
  *(char **)(param_2 + 6) = pcVar10;
  *(char **)(param_2 + 8) = "Regular";
  if (pcVar10 == (char *)0x0) {
    if (*(longlong *)(param_2 + 0x76) != 0) {
      *(longlong *)(param_2 + 6) = *(longlong *)(param_2 + 0x76);
    }
  }
  else {
    pcVar11 = *(char **)(param_2 + 0x3a);
    if (pcVar11 != (char *)0x0) {
      while (cVar1 = *pcVar11, cVar1 != '\0') {
        cVar2 = *pcVar10;
        if (cVar1 == cVar2) {
          pcVar10 = pcVar10 + 1;
LAB_14015ac0d:
          pcVar11 = pcVar11 + 1;
        }
        else {
          if ((cVar1 == '-') || (cVar1 == ' ')) goto LAB_14015ac0d;
          if ((cVar2 != ' ') && (cVar2 != '-')) {
            if (cVar2 == '\0') {
              *(char **)(param_2 + 8) = pcVar11;
            }
            break;
          }
          pcVar10 = pcVar10 + 1;
        }
      }
    }
  }
  param_2[10] = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  local_70 = (undefined4 *)CONCAT44(local_70._4_4_,9);
  local_48 = FUN_1401299f6(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),"truetype");
  local_68 = *(ulonglong *)(param_2 + 0xaa);
  local_60 = param_2[0xac];
  if (param_4 != 0) {
    local_70 = (undefined4 *)CONCAT44(local_70._4_4_,0x19);
    local_38 = param_5;
    local_40 = param_4;
  }
  uVar9 = FUN_14012aca0(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),&local_70,0,
                        param_2 + 0xae);
  if ((int)uVar9 != 0) goto LAB_14015ac2c;
  FUN_14012b03c(*(undefined8 *)(*(longlong *)(param_2 + 0xae) + 0x80));
  lVar3 = *(longlong *)(param_2 + 0xae);
  uVar4 = *(undefined4 *)(lVar3 + 0x5c);
  uVar5 = *(undefined4 *)(lVar3 + 0x60);
  uVar6 = *(undefined4 *)(lVar3 + 100);
  param_2[0x16] = *(undefined4 *)(lVar3 + 0x58);
  param_2[0x17] = uVar4;
  param_2[0x18] = uVar5;
  param_2[0x19] = uVar6;
  *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)(lVar3 + 0x68);
  *(undefined2 *)((longlong)param_2 + 0x6a) = *(undefined2 *)(lVar3 + 0x6a);
  *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)(lVar3 + 0x6c);
  *(undefined2 *)((longlong)param_2 + 0x6e) = *(undefined2 *)(lVar3 + 0x6e);
  *(undefined2 *)(param_2 + 0x1c) = *(undefined2 *)(lVar3 + 0x70);
  *(undefined2 *)((longlong)param_2 + 0x72) = *(undefined2 *)(lVar3 + 0x72);
  param_2[0x1d] = *(undefined4 *)((longlong)param_2 + 0x106);
  param_2[3] = (uint)(param_2[0x40] != 0);
  if ((*(byte *)(lVar3 + 0xc) & 2) != 0) {
    param_2[3] = param_2[0x40] != 0 | 2;
  }
  if ((*(byte *)(lVar3 + 8) & 0x20) != 0) {
    *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) | 0x20;
  }
  if (lVar7 == 0) {
switchD_14015add2_default:
    uVar9 = 0;
  }
  else {
    plVar12 = *(longlong **)(lVar8 + 0x40);
    local_68 = 0x10003756e6963;
    local_70 = param_2;
    uVar9 = FUN_14012b97a(plVar12[3],0,&local_70,0);
    if ((((uint)uVar9 != 0) && ((char)uVar9 != -0x5d)) && (((uint)uVar9 & 0xff) != 7))
    goto LAB_14015ac2c;
    local_68._0_6_ = CONCAT24(7,(undefined4)local_68);
    switch(param_2[0x78]) {
    case 1:
      local_68 = CONCAT44(local_68._4_4_,0x41444243);
      local_68 = CONCAT26(2,(undefined6)local_68);
      plVar12 = plVar12 + 2;
      break;
    case 2:
      local_68 = CONCAT44(local_68._4_4_,0x41444f42);
      local_68 = local_68 & 0xffffffffffff;
      break;
    case 3:
      plVar12 = plVar12 + 3;
      local_68 = CONCAT44(local_68._4_4_,0x6c617431);
      local_68 = CONCAT26(3,(undefined6)local_68);
      break;
    case 4:
      local_68 = CONCAT44(local_68._4_4_,0x41444245);
      local_68 = CONCAT26(1,(undefined6)local_68);
      plVar12 = plVar12 + 1;
      break;
    default:
      goto switchD_14015add2_default;
    }
    uVar9 = 0;
    if (*plVar12 != 0) {
      uVar9 = FUN_14012b97a(*plVar12,0,&local_70,0);
    }
  }
LAB_14015ac2c:
  if (DAT_140f17b40 != (local_30 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_30 ^ (ulonglong)auStack_98);
  }
  return uVar9;
}

