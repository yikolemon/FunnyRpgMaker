/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140133126 */

void FUN_140133126(longlong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined1 uVar9;
  int iVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  uint local_64;
  undefined1 local_60 [4];
  int local_5c;
  char local_58 [4];
  char acStack_54 [4];
  char acStack_50 [4];
  char acStack_4c [4];
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  local_5c = 0;
  local_58 = (char  [4])s_kclOhkrOegsOamsOghoRruaSwahShniS_140e99600._80_4_;
  acStack_54 = (char  [4])s_kclOhkrOegsOamsOghoRruaSwahShniS_140e99600._84_4_;
  acStack_50 = (char  [4])s_kclOhkrOegsOamsOghoRruaSwahShniS_140e99600._88_4_;
  acStack_4c = (char  [4])s_kclOhkrOegsOamsOghoRruaSwahShniS_140e99600._92_4_;
  local_48 = 0x392038;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  cVar5 = FUN_140131e22(uVar1);
  if (cVar5 == '\0') {
    puVar7 = local_60;
  }
  else {
    puVar7 = (undefined1 *)FUN_1401323e0(uVar1);
  }
  iVar10 = 0;
  pcVar8 = local_58;
  bVar2 = false;
  do {
    pcVar8 = (char *)FUN_140132454(pcVar8,param_1,puVar7,&local_64);
    iVar3 = iVar10;
    bVar4 = bVar2;
    if (local_64 < 2) {
      local_78 = 0;
      iVar6 = FUN_14013280c(param_1,puVar7,0,&local_5c);
      if (((iVar6 != 0) && (iVar3 = local_5c, bVar4 = true, bVar2)) &&
         (iVar3 = iVar10, local_5c != iVar10)) {
        uVar9 = 0;
        goto LAB_1401331ed;
      }
    }
    bVar2 = bVar4;
    iVar10 = iVar3;
    if (*pcVar8 == '\0') {
      uVar9 = 1;
LAB_1401331ed:
      FUN_140132415(*(undefined8 *)(param_1 + 0x30),puVar7);
      *(undefined1 *)(param_1 + 0x28) = uVar9;
      if (DAT_140f17b40 != (local_40 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
        FUN_140188a00(local_40 ^ (ulonglong)auStack_98);
      }
      return;
    }
  } while( true );
}

