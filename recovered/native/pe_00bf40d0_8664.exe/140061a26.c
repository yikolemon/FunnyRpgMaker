/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140061a26 */

int FUN_140061a26(longlong *param_1,longlong param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  undefined1 (*pauVar9) [32];
  longlong *plVar10;
  undefined1 uVar11;
  undefined1 auStackY_b8 [32];
  char local_8e;
  char local_8d;
  int local_8c;
  int local_88 [6];
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_b8;
  local_4c = 0;
  cVar1 = *(char *)((longlong)param_1 + 0x5c);
  if ((cVar1 == '\0') || (param_1[0x65] != 0)) {
    plVar10 = *(longlong **)param_1[0x66];
    if (plVar10 == (longlong *)0x0) {
      lVar4 = *param_1;
      ((longlong *)param_1[0x66])[1] = (longlong)FUN_140063fb7;
      pauVar9 = FUN_14001c423(lVar4,0x290,&local_4c);
      *(undefined1 (**) [32])param_1[0x66] = pauVar9;
      iVar7 = 0x40;
      if (local_4c != 0) goto LAB_140061c70;
      plVar10 = *(longlong **)param_1[0x66];
      *plVar10 = lVar4;
      if (cVar1 == '\0') {
        plVar10[0x51] = *(longlong *)(param_1[100] + 0x10e0);
      }
      FUN_140063ff9(plVar10 + 0x16,lVar4,plVar10 + 1);
    }
    plVar10[0x1e] = (longlong)param_1;
    plVar10[0x1d] = (longlong)param_1;
    lVar4 = param_1[1];
    lVar5 = *(longlong *)(lVar4 + 0x90);
    cVar2 = *(char *)(lVar5 + 0x3c);
    cVar3 = *(char *)(*(longlong *)(lVar4 + 0xd0) + 0x58);
    uVar11 = 0;
    local_70 = 0;
    local_60 = (ulonglong)param_3 + param_2;
    if (param_2 == 0) {
      local_60 = 0;
    }
    local_88[0] = 0;
    local_88[1] = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[4] = 0;
    local_88[5] = 0;
    local_68 = param_2;
    local_58 = param_2;
    FUN_140064031((longlong)param_1,local_88,local_88 + 3,&local_8d,&local_8e);
    if (cVar1 == '\0') {
      uVar11 = *(undefined1 *)(lVar4 + 0x400);
    }
    *(undefined1 *)((longlong)plVar10 + 0xd) = uVar11;
    *(char *)((longlong)plVar10 + 0xc) = cVar1;
    *(uint *)(plVar10 + 2) = (uint)(local_8d != '\0');
    if ((local_8e != '\0') && ((cVar3 == '\0' || ((cVar3 < '\0' && (cVar2 == '\0')))))) {
      *(uint *)(plVar10 + 2) = local_8d != '\0' | 2;
    }
    *(undefined4 *)((longlong)plVar10 + 0x104) = *(undefined4 *)(lVar5 + 0x40);
    *(undefined4 *)(plVar10 + 0x21) = *(undefined4 *)(lVar5 + 0x44);
    *(undefined4 *)((longlong)plVar10 + 0x10c) = *(undefined4 *)(lVar5 + 0x48);
    *(undefined4 *)(plVar10 + 0x22) = *(undefined4 *)(lVar5 + 0x4c);
    *(undefined4 *)((longlong)plVar10 + 0x114) = *(undefined4 *)(lVar5 + 0x50);
    *(undefined4 *)(plVar10 + 0x23) = *(undefined4 *)(lVar5 + 0x54);
    *(undefined4 *)((longlong)plVar10 + 0x11c) = *(undefined4 *)(lVar5 + 0x58);
    *(undefined4 *)(plVar10 + 0x24) = *(undefined4 *)(lVar5 + 0x5c);
    uVar6 = FUN_14006409e((longlong)param_1);
    *(uint *)(plVar10 + 0x14) = (uint)uVar6;
    if (local_8e != '\0') {
      iVar7 = FUN_1400640a7(local_88,(uint)uVar6);
      if (iVar7 != 0) goto LAB_140061c70;
    }
    iVar8 = FUN_1400640f4(plVar10,&local_70,(char *)local_88,&local_8c);
    iVar7 = 3;
    if (iVar8 == 0) {
      FUN_140064229((longlong)(plVar10 + 0x16),local_8c);
      iVar7 = 0;
    }
  }
  else {
    iVar7 = 8;
  }
LAB_140061c70:
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_b8)) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_b8);
}

