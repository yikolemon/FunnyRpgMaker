/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0046547c */

int __cdecl FUN_0046547c(int param_1,ushort *param_2,uint *param_3,uint param_4)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  uint *local_8c;
  uint local_88 [6];
  int local_70;
  int local_6c [20];
  undefined2 local_1c;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_9c;
  iVar6 = 0;
  if ((param_2[1] != 0) && (*param_2 != 0)) {
    local_90 = FUN_004656a8(local_88,param_2,param_1,param_3);
    iVar6 = local_70;
    if (local_90 == 0) {
      local_9c = *(int *)(local_70 + 200);
      local_98 = *(uint *)(local_70 + 0x194);
      local_94 = CONCAT31((int3)(local_98 >> 8),1);
      bVar2 = true;
      if (param_3[0x67] != 0) {
        iVar7 = (int)((longlong)(int)local_98 * (longlong)(int)param_3[0x68] >> 0x3f);
        lVar1 = (longlong)(int)local_98 * (longlong)(int)param_3[0x68] + CONCAT44(iVar7,iVar7) +
                0x8000;
        uVar8 = (int)((ulonglong)lVar1 >> 0x20) << 0x10 | (uint)lVar1 >> 0x10;
        bVar2 = true;
        uVar5 = uVar8 + 0x20 & 0xffffffc0;
        if ((uVar5 != 0) && (bVar2 = true, uVar5 != uVar8)) {
          uVar4 = FUN_0041dcda(local_98,uVar5,uVar8);
          iVar7 = local_9c;
          if ((int)uVar5 < (int)uVar8) {
            iVar7 = (int)((ulonglong)((longlong)local_9c * -0x51eb851f) >> 0x20);
            iVar7 = ((iVar7 >> 4) - (iVar7 >> 0x1f)) + local_9c;
          }
          FUN_0046593e(iVar6,iVar7,uVar4,0,0);
          bVar2 = false;
        }
      }
      local_8c = param_3 + 0x67;
      local_1c = 0x101;
      local_1a = (param_4 & 0xfffffffe) == 2;
      local_19 = (param_4 - 2 & 0xfffffffd) == 0;
      local_18 = param_4 != 1;
      bVar3 = false;
      iVar6 = 0;
      do {
        FUN_004659b7((int *)local_88,iVar6);
        FUN_004659fb((int)local_88);
        FUN_00465a8b(local_6c + iVar6 * 10,local_70,iVar6,(int)local_88);
        FUN_00465aba(local_88,iVar6);
        if (bVar3) {
          FUN_00465bdf((int *)local_8c,(int *)local_88);
        }
        FUN_00465d04((int *)local_88,iVar6);
        FUN_00465df6((int *)local_88,iVar6);
        FUN_0046600c((int)local_88,iVar6);
        FUN_004661ef(local_88,iVar6);
        if (!bVar2) {
          FUN_0046593e(local_70,local_9c,local_98,0,0);
        }
        bVar3 = true;
        iVar6 = 1;
        uVar5 = local_94 & 1;
        local_94 = 0;
      } while (uVar5 != 0);
    }
    FUN_00466243(local_88);
    iVar6 = local_90;
  }
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_9c)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_9c);
}

