/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00430a9d */

void __fastcall FUN_00430a9d(int *param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined1 uVar5;
  bool bVar6;
  int local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  byte local_28 [4];
  char acStack_24 [4];
  char acStack_20 [4];
  char acStack_1c [4];
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_3c;
  local_2c = 0;
  local_28 = (byte  [4])s_kclOhkrOegsOamsOghoRruaSwahShniS_004e0730._80_4_;
  acStack_24 = (char  [4])s_kclOhkrOegsOamsOghoRruaSwahShniS_004e0730._84_4_;
  acStack_20 = (char  [4])s_kclOhkrOegsOamsOghoRruaSwahShniS_004e0730._88_4_;
  acStack_1c = (char  [4])s_kclOhkrOegsOamsOghoRruaSwahShniS_004e0730._92_4_;
  local_18 = 0x392038;
  iVar4 = param_1[9];
  uVar1 = FUN_0042fab9(iVar4);
  if ((char)uVar1 == '\0') {
    puVar2 = &local_30;
  }
  else {
    puVar2 = (uint *)FUN_0042ff7b(iVar4);
  }
  pbVar3 = local_28;
  local_38 = 0;
  local_3c = 0;
  do {
    pbVar3 = (byte *)FUN_0042ffd7(pbVar3,param_1,puVar2,&local_34);
    if ((local_34 < 2) &&
       (iVar4 = FUN_00430301((int)param_1,puVar2,0,&local_2c,(undefined4 *)0x0), iVar4 != 0)) {
      bVar6 = (char)local_38 == '\0';
      local_38 = CONCAT31((int3)((uint)extraout_ECX >> 8),1);
      if (bVar6) {
        local_3c = local_2c;
      }
      else if (local_2c != local_3c) {
        uVar5 = 0;
        goto LAB_00430b51;
      }
    }
  } while (*pbVar3 != 0);
  uVar5 = 1;
LAB_00430b51:
  FUN_0042ffa3(param_1[9],puVar2);
  *(undefined1 *)(param_1 + 8) = uVar5;
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_3c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_3c);
  }
  return;
}

