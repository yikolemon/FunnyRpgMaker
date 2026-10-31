/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102289c0 */

void FUN_102289c0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  bool bVar10;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 local_58;
  DWORD local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  int local_44;
  byte local_40;
  undefined2 uStack_3f;
  undefined1 uStack_3d;
  undefined4 local_3c;
  int local_38 [6];
  int local_20 [6];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  param_3 = param_3 & 0xf;
  local_3c = param_1;
  if (param_3 == 2) {
LAB_10228b9a:
    local_5c = 0;
    local_6c = 0x14;
    local_64 = 0;
    local_68 = 0;
    uVar6 = CopyFile2(local_3c,param_2,&local_6c);
    local_40 = (byte)((uint)uVar6 >> 0x1f) ^ 1;
    uStack_3f = local_48._1_2_;
    uStack_3d = local_48._3_1_;
  }
  else {
    local_5c = 0;
    local_6c = 0x14;
    local_64 = 0;
    local_68 = 1;
    uVar1 = CopyFile2(param_1,param_2,&local_6c);
    if ((int)uVar1 < 0) {
      uVar8 = uVar1 & 0xffff;
    }
    else {
      uVar8 = 0;
    }
    local_58 = CONCAT13(local_48._3_1_,CONCAT21(local_48._1_2_,(int)uVar1 >= 0));
    if ((uVar8 != 0x50) || (param_3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
    local_70 = 0x18;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_4c = (uint)(param_3 == 1) * 2 + 1;
    local_5c = 0;
    iVar2 = CreateFile2(param_1,0x80,local_4c,3,&local_70);
    local_50 = iVar2;
    if ((iVar2 == -1) && (DVar3 = GetLastError(), DVar3 != 0)) {
      uStack_3f = local_48._1_2_;
      local_40 = 0;
      uStack_3d = local_48._3_1_;
      goto LAB_10228be5;
    }
    iVar4 = FUN_102295a0(param_2,0x80,local_4c,0,3,0,0);
    local_4c = iVar4;
    if ((iVar4 == -1) && (local_54 = GetLastError(), local_54 != 0)) {
      uStack_3f = local_48._1_2_;
      local_40 = 0;
      uStack_3d = local_48._3_1_;
      FUN_10229580();
      FUN_10229580();
      goto LAB_10228be5;
    }
    if (param_3 == 4) {
      iVar5 = FUN_102295f0(iVar2,&local_48);
      if ((iVar5 != 0) || (iVar5 = FUN_102295f0(iVar4,&local_58), iVar5 != 0)) {
        uStack_3f = local_48._1_2_;
        local_40 = 0;
        uStack_3d = local_48._3_1_;
        FUN_10229580();
        FUN_10229580();
        goto LAB_10228be5;
      }
      if (((int)local_54 <= local_44) && (((int)local_54 < local_44 || (local_58 < local_48)))) {
        FUN_10229580();
        FUN_10229580();
        goto LAB_10228b9a;
      }
    }
    iVar2 = FUN_10229650(iVar2,local_20);
    if (iVar2 == 0) {
      iVar2 = FUN_10229650(iVar4,local_38);
      if (iVar2 == 0) {
        piVar7 = local_20;
        uVar1 = 0x14;
        piVar9 = local_38;
        do {
          if (*piVar7 != *piVar9) break;
          piVar7 = piVar7 + 1;
          piVar9 = piVar9 + 1;
          bVar10 = 3 < uVar1;
          uVar1 = uVar1 - 4;
        } while (bVar10);
      }
      uStack_3f = local_48._1_2_;
      local_40 = 0;
      uStack_3d = local_48._3_1_;
      FUN_10229580();
      FUN_10229580();
    }
    else {
      uStack_3f = local_48._1_2_;
      local_40 = 0;
      uStack_3d = local_48._3_1_;
      FUN_10229580();
      FUN_10229580();
    }
  }
LAB_10228be5:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

