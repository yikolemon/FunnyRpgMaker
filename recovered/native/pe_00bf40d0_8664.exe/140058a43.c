/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140058a43 */

uint FUN_140058a43(undefined8 param_1,undefined4 *param_2,int param_3,int param_4,undefined8 param_5
                  )

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 *puVar10;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_98;
  *(undefined8 *)(param_2 + 0xae) = 0;
  *param_2 = 1;
  lVar6 = FUN_14001f8d7(*(longlong **)(param_2 + 0x24),"postscript-cmaps",'\x01');
  *(longlong *)(param_2 + 0xa6) = lVar6;
  lVar7 = FUN_14001f8b9(*(longlong *)(*(longlong *)(param_2 + 0x24) + 8),"psaux");
  *(longlong *)(param_2 + 0xa8) = lVar7;
  if (lVar7 == 0) {
    uVar5 = 0xb;
    goto LAB_140058b7c;
  }
  uVar5 = FUN_14005933d((longlong)param_2);
  if ((param_3 < 0 || uVar5 != 0) || (uVar5 = 6, (short)param_3 != 0)) goto LAB_140058b7c;
  param_2[4] = param_2[0x90];
  param_2[0xe] = 0;
  param_2[1] = 0;
  param_2[2] = (uint)(*(char *)(param_2 + 0x41) != '\0') << 2 | param_2[2] | 0xa11;
  pcVar8 = *(char **)(param_2 + 0x3c);
  *(char **)(param_2 + 6) = pcVar8;
  *(char **)(param_2 + 8) = "Regular";
  if (pcVar8 == (char *)0x0) {
    if (*(longlong *)(param_2 + 0x76) != 0) {
      *(longlong *)(param_2 + 6) = *(longlong *)(param_2 + 0x76);
    }
  }
  else {
    pcVar9 = *(char **)(param_2 + 0x3a);
    if (pcVar9 != (char *)0x0) {
      while (cVar1 = *pcVar9, cVar1 != '\0') {
        cVar2 = *pcVar8;
        if (cVar1 == cVar2) {
          pcVar8 = pcVar8 + 1;
LAB_140058b5d:
          pcVar9 = pcVar9 + 1;
        }
        else {
          if ((cVar1 == '-') || (cVar1 == ' ')) goto LAB_140058b5d;
          if ((cVar2 != ' ') && (cVar2 != '-')) {
            if (cVar2 == '\0') {
              *(char **)(param_2 + 8) = pcVar9;
            }
            break;
          }
          pcVar8 = pcVar8 + 1;
        }
      }
    }
  }
  param_2[10] = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  local_70 = (undefined4 *)CONCAT44(local_70._4_4_,9);
  local_48 = FUN_14001d3fa(*(longlong *)(*(longlong *)(param_2 + 0x24) + 8),"truetype");
  local_68 = *(ulonglong *)(param_2 + 0xaa);
  local_60 = param_2[0xac];
  if (param_4 != 0) {
    local_70 = (undefined4 *)CONCAT44(local_70._4_4_,0x19);
    local_38 = param_5;
    local_40 = param_4;
  }
  uVar5 = FUN_14001e627(*(longlong **)(*(longlong *)(param_2 + 0x24) + 8),(uint *)&local_70,0,
                        (longlong *)(param_2 + 0xae));
  if (uVar5 != 0) goto LAB_140058b7c;
  FUN_14001e9c3(*(longlong **)(*(longlong *)(param_2 + 0xae) + 0x80));
  lVar3 = *(longlong *)(param_2 + 0xae);
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  *(undefined8 *)(param_2 + 0x16) = *(undefined8 *)(lVar3 + 0x58);
  *(undefined8 *)(param_2 + 0x18) = uVar4;
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
  if (lVar6 == 0) {
switchD_140058d22_default:
    uVar5 = 0;
  }
  else {
    puVar10 = *(undefined8 **)(lVar7 + 0x40);
    local_68 = 0x10003756e6963;
    local_70 = param_2;
    uVar5 = FUN_14001f301((uint *)puVar10[3],0,(longlong *)&local_70,(undefined8 *)0x0);
    if (((uVar5 != 0) && ((char)uVar5 != -0x5d)) && ((uVar5 & 0xff) != 7)) goto LAB_140058b7c;
    local_68._0_6_ = CONCAT24(7,(undefined4)local_68);
    switch(param_2[0x78]) {
    case 1:
      local_68 = CONCAT44(local_68._4_4_,0x41444243);
      local_68 = CONCAT26(2,(undefined6)local_68);
      puVar10 = puVar10 + 2;
      break;
    case 2:
      local_68 = CONCAT44(local_68._4_4_,0x41444f42);
      local_68 = local_68 & 0xffffffffffff;
      break;
    case 3:
      puVar10 = puVar10 + 3;
      local_68 = CONCAT44(local_68._4_4_,0x6c617431);
      local_68 = CONCAT26(3,(undefined6)local_68);
      break;
    case 4:
      local_68 = CONCAT44(local_68._4_4_,0x41444245);
      local_68 = CONCAT26(1,(undefined6)local_68);
      puVar10 = puVar10 + 1;
      break;
    default:
      goto switchD_140058d22_default;
    }
    uVar5 = 0;
    if ((uint *)*puVar10 != (uint *)0x0) {
      uVar5 = FUN_14001f301((uint *)*puVar10,0,(longlong *)&local_70,(undefined8 *)0x0);
    }
  }
LAB_140058b7c:
  if (DAT_14012ea80 != (local_30 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_30 ^ (ulonglong)auStack_98);
  }
  return uVar5;
}

