/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a27d6 */

void FUN_1400a27d6(undefined4 *param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  undefined1 auStack_88 [32];
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  iVar9 = *(int *)(DAT_140f2a910 + 4) - param_1[0x2d];
  iVar12 = *(int *)(DAT_140f2a910 + 4) - param_1[0x2e];
  if (1 < iVar9) {
    uVar7 = FUN_14007a629(1);
    FUN_14007a7b5(0,uVar7);
  }
  uVar2 = param_1[0x35];
  lVar4 = *(longlong *)(param_1 + 0x26);
  if ((int)param_1[0xc] < 1) {
    if (lVar4 == 0) {
      local_50 = "NULL";
    }
    else {
      local_50 = *(char **)(lVar4 + 8);
    }
    uVar3 = *param_1;
    pcVar10 = "empty";
    if (param_1[0x18] == 1) {
      pcVar10 = "vertical split";
    }
    local_58 = "horizontal split";
    if (param_1[0x18] != 0) {
      local_58 = pcVar10;
    }
    local_60 = " (hidden)";
    if ((uVar2 & 1) != 0) {
      local_60 = "";
    }
    pcVar10 = "%s 0x%04X%s: %s (vis: \'%s\')";
  }
  else {
    if (lVar4 == 0) {
      local_50 = "NULL";
    }
    else {
      local_50 = *(char **)(lVar4 + 8);
    }
    local_60 = " (hidden)";
    if ((uVar2 & 1) != 0) {
      local_60 = "";
    }
    uVar3 = *param_1;
    local_58 = (char *)CONCAT44(local_58._4_4_,param_1[0xc]);
    pcVar10 = "%s 0x%04X%s: %d windows (vis: \'%s\')";
  }
  local_68 = (char *)CONCAT44(local_68._4_4_,uVar3);
  cVar5 = FUN_1400c5f8e(uVar3,uVar2 >> 1 & 1,pcVar10,param_2);
  if (1 < iVar9) {
    FUN_14007a8e1(1);
  }
  if (iVar12 < 2) {
    cVar6 = FUN_1400808b4(0);
    if ((cVar6 != '\0') &&
       ((*(longlong *)(param_1 + 0x24) != 0 || (*(longlong *)(param_1 + 0x26) != 0)))) {
      uVar7 = FUN_14007c4e4();
      local_40 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x14) >> 0x20) +
                          (float)((ulonglong)*(undefined8 *)(param_1 + 0x12) >> 0x20),
                          (float)*(undefined8 *)(param_1 + 0x14) +
                          (float)*(undefined8 *)(param_1 + 0x12));
      local_58 = (char *)((ulonglong)local_58 & 0xffffffff00000000);
      local_68 = (char *)((ulonglong)local_68 & 0xffffffff00000000);
      local_60 = (char *)CONCAT44(local_60._4_4_,0x3f800000);
      FUN_1400de17e(uVar7,param_1 + 0x12,&local_40,0xff00ffff);
    }
  }
  if (cVar5 != '\0') {
    local_58 = (char *)(double)(float)param_1[0x17];
    local_60 = (char *)(double)(float)param_1[0x16];
    local_68 = (char *)(double)(float)param_1[0x15];
    FUN_1400ac536("Pos (%.0f,%.0f), Size (%.0f, %.0f) Ref (%.0f, %.0f)",(double)(float)param_1[0x12]
                  ,(double)(float)param_1[0x13],(double)(float)param_1[0x14]);
    FUN_1400a31b0(*(undefined8 *)(param_1 + 0x24),"HostWindow");
    FUN_1400a31b0(*(undefined8 *)(param_1 + 0x26),"VisibleWindow");
    FUN_1400ac536("SelectedTabID: 0x%08X, LastFocusedNodeID: 0x%08X",param_1[0x31],param_1[0x30]);
    bVar1 = *(byte *)(param_1 + 0x35);
    local_50 = " HasCentralNodeChild";
    if ((bVar1 & 0x20) == 0) {
      local_50 = "";
    }
    local_58 = " WantLockSizeOnce";
    if (-1 < (char)bVar1) {
      local_58 = "";
    }
    local_60 = " IsFocused";
    if ((bVar1 & 2) == 0) {
      local_60 = "";
    }
    local_68 = " IsActive";
    if (1 < iVar12) {
      local_68 = "";
    }
    pcVar10 = " IsAlive";
    if (1 < iVar9) {
      pcVar10 = "";
    }
    pcVar11 = " IsCentralNode";
    if (((uint)param_1[4] >> 0xb & 1) == 0) {
      pcVar11 = "";
    }
    pcVar8 = " IsDockSpace";
    if (((uint)param_1[4] >> 10 & 1) == 0) {
      pcVar8 = "";
    }
    FUN_1400ac536("Misc:%s%s%s%s%s%s%s",pcVar8,pcVar11,pcVar10);
    local_60 = (char *)CONCAT44(local_60._4_4_,param_1[1]);
    local_68 = (char *)CONCAT44(local_68._4_4_,param_1[3]);
    cVar5 = FUN_1400c4fe4("flags",
                          "Flags Merged: 0x%04X, Local: 0x%04X, InWindows: 0x%04X, Shared: 0x%04X",
                          param_1[4],param_1[2]);
    if (cVar5 != '\0') {
      local_40 = 0;
      local_68 = (char *)((ulonglong)local_68 & 0xffffffff00000000);
      cVar5 = FUN_14010cbe8("flags",4,0);
      if (cVar5 != '\0') {
        FUN_140112b04();
        FUN_1400a3993(param_1 + 4,"MergedFlags",0);
        FUN_140112b04();
        FUN_1400a3993(param_1 + 2,"LocalFlags",1);
        FUN_140112b04();
        FUN_1400a3993(param_1 + 3,"LocalFlagsInWindows",0);
        FUN_140112b04();
        FUN_1400a3993(param_1 + 1,"SharedFlags",1);
        FUN_140110400();
      }
      FUN_1400c66d9();
    }
    if (*(longlong *)(param_1 + 6) != 0) {
      FUN_1400a27d6(*(longlong *)(param_1 + 6),"ParentNode");
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400a27d6(*(longlong *)(param_1 + 8),"Child[0]");
    }
    if (*(longlong *)(param_1 + 10) != 0) {
      FUN_1400a27d6(*(longlong *)(param_1 + 10),"Child[1]");
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400a240d(*(longlong *)(param_1 + 0x10),"TabBar");
    }
    FUN_1400a1290(param_1 + 0xc,"Windows");
    FUN_1400c66d9();
  }
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_88);
}

