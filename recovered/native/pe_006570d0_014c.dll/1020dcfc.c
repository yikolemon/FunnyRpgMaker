/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020dcfc */

int FUN_1020dcfc(undefined4 param_1,short *param_2,int param_3,uint param_4)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int local_9c;
  int local_98;
  uint local_94;
  int local_90;
  int local_8c;
  undefined1 local_88 [24];
  int local_70;
  undefined2 local_1c;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_9c;
  iVar5 = 0;
  if ((param_2[1] != 0) && (*param_2 != 0)) {
    local_90 = FUN_1020df28(param_1,param_3);
    iVar5 = local_70;
    if (local_90 == 0) {
      local_9c = *(int *)(local_70 + 200);
      local_98 = *(int *)(local_70 + 0x194);
      local_94 = CONCAT31((int3)((uint)local_98 >> 8),1);
      bVar2 = true;
      if (*(int *)(param_3 + 0x19c) != 0) {
        lVar1 = (longlong)local_98 * (longlong)*(int *)(param_3 + 0x1a0);
        iVar7 = (int)(lVar1 >> 0x3f);
        lVar1 = lVar1 + CONCAT44(iVar7,iVar7) + 0x8000;
        uVar8 = (int)((ulonglong)lVar1 >> 0x20) << 0x10 | (uint)lVar1 >> 0x10;
        bVar2 = true;
        uVar6 = uVar8 + 0x20 & 0xffffffc0;
        if ((uVar6 != 0) && (bVar2 = true, uVar6 != uVar8)) {
          uVar4 = FUN_101c16ea(local_98,uVar6,uVar8);
          iVar7 = local_9c;
          if ((int)uVar6 < (int)uVar8) {
            iVar7 = (int)((ulonglong)((longlong)local_9c * -0x51eb851f) >> 0x20);
            iVar7 = ((iVar7 >> 4) - (iVar7 >> 0x1f)) + local_9c;
          }
          FUN_1020e1be(iVar5,iVar7,uVar4,0,0);
          bVar2 = false;
        }
      }
      local_8c = param_3 + 0x19c;
      local_1c = 0x101;
      local_1a = (param_4 & 0xfffffffe) == 2;
      local_19 = (param_4 - 2 & 0xfffffffd) == 0;
      local_18 = param_4 != 1;
      bVar3 = false;
      uVar4 = 0;
      do {
        FUN_1020e237();
        FUN_1020e27b();
        FUN_1020e30b(uVar4,local_88);
        FUN_1020e33a();
        if (bVar3) {
          FUN_1020e45f();
        }
        FUN_1020e584();
        FUN_1020e676();
        FUN_1020e88c();
        FUN_1020ea6f();
        if (!bVar2) {
          FUN_1020e1be(local_70,local_9c,local_98,0,0);
        }
        bVar3 = true;
        uVar4 = 1;
        uVar6 = local_94 & 1;
        local_94 = 0;
      } while (uVar6 != 0);
    }
    FUN_1020eac3();
    iVar5 = local_90;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_9c)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

