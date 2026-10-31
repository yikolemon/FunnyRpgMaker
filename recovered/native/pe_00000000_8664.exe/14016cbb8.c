/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016cbb8 */

int FUN_14016cbb8(undefined8 param_1,short *param_2,longlong param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  bool bVar10;
  longlong lVar11;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  int local_118;
  int local_114;
  undefined1 local_110 [40];
  longlong local_e8;
  undefined1 local_e0 [144];
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_148;
  iVar5 = 0;
  if ((param_2[1] != 0) && (*param_2 != 0)) {
    local_114 = FUN_14016ce03(local_110,param_2,param_1,param_3);
    lVar11 = local_e8;
    if (local_114 == 0) {
      local_118 = *(int *)(local_e8 + 0xcc);
      iVar5 = *(int *)(local_e8 + 0x198);
      bVar2 = true;
      if (*(int *)(param_3 + 0x1a0) != 0) {
        lVar6 = (longlong)*(int *)(param_3 + 0x1a4) * (longlong)iVar5;
        uVar1 = (uint)((ulonglong)(lVar6 + (lVar6 >> 0x3f) + 0x8000) >> 0x10);
        bVar2 = true;
        uVar9 = uVar1 + 0x20 & 0xffffffc0;
        if (uVar9 != 0) {
          bVar2 = true;
          if (uVar9 != uVar1) {
            uVar4 = FUN_14012a478(iVar5,uVar9,uVar1);
            iVar7 = local_118;
            if ((int)uVar9 < (int)uVar1) {
              iVar7 = (int)((ulonglong)((longlong)local_118 * -0x51eb851f) >> 0x20);
              iVar7 = ((iVar7 >> 4) - (iVar7 >> 0x1f)) + local_118;
            }
            local_128 = 0;
            bVar2 = false;
            FUN_14016d0f7(lVar11,iVar7,uVar4,0);
          }
        }
      }
      local_50 = 0x101;
      local_4e = (param_4 & 0xfffffffe) == 2;
      local_4d = (param_4 - 2 & 0xfffffffd) == 0;
      local_4c = param_4 != 1;
      bVar8 = false;
      lVar11 = 0;
      bVar3 = true;
      do {
        bVar10 = bVar3;
        FUN_14016d17c(local_110,lVar11);
        FUN_14016d1d1(local_110);
        FUN_14016d26f(local_e0 + lVar11 * 0x48,local_e8,lVar11,local_110);
        FUN_14016d2b0(local_110,lVar11);
        if (bVar8) {
          FUN_14016d3f0(param_3 + 0x1a0,local_110);
        }
        FUN_14016d4f0(local_110,lVar11);
        FUN_14016d5cc(local_110,lVar11);
        FUN_14016d893(local_110,lVar11);
        FUN_14016da9d(local_110,lVar11);
        if (!bVar2) {
          local_128 = 0;
          FUN_14016d0f7(local_e8,local_118,iVar5,0);
        }
        lVar11 = 1;
        bVar8 = true;
        bVar3 = false;
      } while (bVar10);
    }
    FUN_14016daf5(local_110);
    iVar5 = local_114;
  }
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_148)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_148);
}

