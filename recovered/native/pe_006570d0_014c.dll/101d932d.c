/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d932d */

void __fastcall FUN_101d932d(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined1 uVar6;
  bool bVar7;
  int local_3c;
  undefined4 local_38;
  uint local_34;
  undefined1 local_30 [4];
  int local_2c;
  char local_28 [4];
  char acStack_24 [4];
  char acStack_20 [4];
  char acStack_1c [4];
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_3c;
  local_2c = 0;
  local_28 = (char  [4])s_kclOhkrOegsOamsOghoRruaSwahShniS_1030c18c._80_4_;
  acStack_24 = (char  [4])s_kclOhkrOegsOamsOghoRruaSwahShniS_1030c18c._84_4_;
  acStack_20 = (char  [4])s_kclOhkrOegsOamsOghoRruaSwahShniS_1030c18c._88_4_;
  acStack_1c = (char  [4])s_kclOhkrOegsOamsOghoRruaSwahShniS_1030c18c._92_4_;
  local_18 = 0x392038;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  cVar2 = FUN_101d8349();
  if (cVar2 == '\0') {
    puVar3 = local_30;
  }
  else {
    puVar3 = (undefined1 *)FUN_101d880b(uVar1);
  }
  pcVar4 = local_28;
  local_38 = 0;
  local_3c = 0;
  do {
    pcVar4 = (char *)FUN_101d8867(pcVar4,param_1,puVar3,&local_34);
    if ((local_34 < 2) && (iVar5 = FUN_101d8b91(param_1,puVar3,0,&local_2c,0), iVar5 != 0)) {
      bVar7 = (char)local_38 == '\0';
      local_38 = CONCAT31((int3)((uint)extraout_ECX >> 8),1);
      if (bVar7) {
        local_3c = local_2c;
      }
      else if (local_2c != local_3c) {
        uVar6 = 0;
        goto LAB_101d93e1;
      }
    }
  } while (*pcVar4 != '\0');
  uVar6 = 1;
LAB_101d93e1:
  FUN_101d8833(*(undefined4 *)(param_1 + 0x24),puVar3);
  *(undefined1 *)(param_1 + 0x20) = uVar6;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_3c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

