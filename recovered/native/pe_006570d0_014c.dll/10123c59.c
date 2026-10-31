/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10123c59 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123c59(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  undefined4 uVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  char *local_2c;
  char *local_28;
  int local_24;
  int local_20;
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_2c;
  iVar2 = *(int *)(DAT_1039d74c + 4);
  iVar11 = iVar2 - param_1[0x23];
  iVar3 = param_1[0x24];
  if (1 < iVar11) {
    uVar8 = FUN_100fcbfd();
    FUN_100fcd80(0,uVar8);
  }
  uVar4 = param_1[0x2b];
  iVar5 = param_1[0x1f];
  if ((int)param_1[9] < 1) {
    if (iVar5 == 0) {
      local_2c = "NULL";
    }
    else {
      local_2c = *(char **)(iVar5 + 4);
    }
    uVar8 = *param_1;
    pcVar10 = "empty";
    if (param_1[0x13] == 1) {
      pcVar10 = "vertical split";
    }
    pcVar12 = "horizontal split";
    if (param_1[0x13] != 0) {
      pcVar12 = pcVar10;
    }
    pcVar10 = " (hidden)";
    if ((uVar4 & 1) != 0) {
      pcVar10 = "";
    }
    uVar16 = CONCAT44(local_2c,pcVar12);
    uVar15 = CONCAT44(pcVar10,uVar8);
    pcVar10 = "%s 0x%04X%s: %s (vis: \'%s\')";
  }
  else {
    if (iVar5 == 0) {
      pcVar10 = "NULL";
    }
    else {
      pcVar10 = *(char **)(iVar5 + 4);
    }
    pcVar12 = " (hidden)";
    if ((uVar4 & 1) != 0) {
      pcVar12 = "";
    }
    uVar8 = *param_1;
    uVar16 = CONCAT44(pcVar10,param_1[9]);
    uVar15 = CONCAT44(pcVar12,uVar8);
    pcVar10 = "%s 0x%04X%s: %d windows (vis: \'%s\')";
  }
  local_24 = iVar2 - iVar3;
  local_20 = iVar11;
  cVar6 = FUN_10148c23(CONCAT44(uVar4 >> 1,uVar8) & 0x1ffffffff,CONCAT44(param_2,pcVar10),uVar15,
                       uVar16);
  iVar3 = local_20;
  iVar2 = local_24;
  if (1 < local_20) {
    FUN_100fce8e();
  }
  if (iVar2 < 2) {
    cVar7 = FUN_10102a1a();
    if ((cVar7 != '\0') && ((param_1[0x1e] != 0 || (param_1[0x1f] != 0)))) {
      FUN_100fe900();
      local_1c = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0xf) >> 0x20) +
                          (float)((ulonglong)*(undefined8 *)(param_1 + 0xd) >> 0x20),
                          (float)*(undefined8 *)(param_1 + 0xf) +
                          (float)*(undefined8 *)(param_1 + 0xd));
      FUN_1018b762(param_1 + 0xd,&local_1c,_DAT_102b8bc0,_UNK_102b8bc4,_UNK_102b8bc8,_UNK_102b8bcc);
    }
  }
  if (cVar6 != '\0') {
    FUN_1012d551("Pos (%.0f,%.0f), Size (%.0f, %.0f) Ref (%.0f, %.0f)",(double)(float)param_1[0xd],
                 (double)(float)param_1[0xe],(double)(float)param_1[0xf],
                 (double)(float)param_1[0x10],(double)(float)param_1[0x11],
                 (double)(float)param_1[0x12]);
    FUN_10124576(param_1[0x1e],"HostWindow");
    FUN_10124576(param_1[0x1f],"VisibleWindow");
    FUN_1012d551();
    bVar1 = *(byte *)(param_1 + 0x2b);
    local_2c = " HasCentralNodeChild";
    if ((bVar1 & 0x20) == 0) {
      local_2c = "";
    }
    local_28 = " WantLockSizeOnce";
    if (-1 < (char)bVar1) {
      local_28 = "";
    }
    pcVar10 = " IsFocused";
    if ((bVar1 & 2) == 0) {
      pcVar10 = "";
    }
    pcVar12 = " IsActive";
    if (1 < iVar2) {
      pcVar12 = "";
    }
    pcVar14 = " IsAlive";
    if (1 < iVar3) {
      pcVar14 = "";
    }
    pcVar9 = " IsCentralNode";
    if (((uint)param_1[4] >> 0xb & 1) == 0) {
      pcVar9 = "";
    }
    pcVar13 = " IsDockSpace";
    if (((uint)param_1[4] >> 10 & 1) == 0) {
      pcVar13 = "";
    }
    FUN_1012d551("Misc:%s%s%s%s%s%s%s",pcVar13,pcVar9,pcVar14,pcVar12,pcVar10,local_28,local_2c);
    cVar6 = FUN_10147bc2("flags",
                         "Flags Merged: 0x%04X, Local: 0x%04X, InWindows: 0x%04X, Shared: 0x%04X",
                         param_1[4],param_1[2],param_1[3],param_1[1]);
    if (cVar6 != '\0') {
      local_1c = 0;
      cVar6 = FUN_1015f834();
      if (cVar6 != '\0') {
        FUN_101657a1();
        FUN_10124cd3();
        FUN_101657a1();
        FUN_10124cd3();
        FUN_101657a1();
        FUN_10124cd3();
        FUN_101657a1();
        FUN_10124cd3();
        FUN_1016304e();
      }
      FUN_10149387();
    }
    if (param_1[6] != 0) {
      FUN_10123c59(param_1[6],"ParentNode");
    }
    if (param_1[7] != 0) {
      FUN_10123c59(param_1[7],"Child[0]");
    }
    if (param_1[8] != 0) {
      FUN_10123c59(param_1[8],"Child[1]");
    }
    if (param_1[0xc] != 0) {
      FUN_101238c4(param_1[0xc],"TabBar");
    }
    FUN_10122a05(param_1 + 9,"Windows");
    FUN_10149387();
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_2c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

