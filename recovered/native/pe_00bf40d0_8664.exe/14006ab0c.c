/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006ab0c */

int FUN_14006ab0c(longlong param_1,ushort *param_2,longlong *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  bool bVar13;
  ulonglong uVar14;
  undefined1 auStackY_148 [32];
  uint local_110 [10];
  longlong local_e8;
  int local_e0 [36];
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_148;
  iVar6 = 0;
  if ((param_2[1] != 0) && (iVar6 = 0, *param_2 != 0)) {
    iVar6 = FUN_14006ad57((undefined1 (*) [32])local_110,param_2,param_1,param_3);
    lVar4 = local_e8;
    if (iVar6 == 0) {
      iVar1 = *(int *)(local_e8 + 0xcc);
      uVar2 = *(uint *)(local_e8 + 0x198);
      bVar3 = true;
      if ((int)param_3[0x34] != 0) {
        lVar8 = (longlong)*(int *)((longlong)param_3 + 0x1a4) * (longlong)(int)uVar2;
        uVar10 = (uint)((ulonglong)(lVar8 + (lVar8 >> 0x3f) + 0x8000) >> 0x10);
        bVar3 = true;
        uVar12 = uVar10 + 0x20 & 0xffffffc0;
        if (uVar12 != 0) {
          bVar3 = true;
          if (uVar12 != uVar10) {
            iVar7 = FUN_14001de7c(uVar2,uVar12,uVar10);
            iVar9 = iVar1;
            if ((int)uVar12 < (int)uVar10) {
              iVar9 = (int)((ulonglong)((longlong)iVar1 * -0x51eb851f) >> 0x20);
              iVar9 = ((iVar9 >> 4) - (iVar9 >> 0x1f)) + iVar1;
            }
            bVar3 = false;
            FUN_14006b04b(lVar4,iVar9,iVar7,0,0);
          }
        }
      }
      local_50 = 0x101;
      local_4e = (param_4 & 0xfffffffe) == 2;
      local_4d = (param_4 - 2 & 0xfffffffd) == 0;
      local_4c = param_4 != 1;
      bVar11 = false;
      uVar14 = 0;
      bVar5 = true;
      do {
        bVar13 = bVar5;
        uVar10 = (uint)uVar14;
        FUN_14006b0d0((int *)local_110,uVar10);
        FUN_14006b125((longlong)local_110);
        FUN_14006b1c3(local_e0 + uVar14 * 0x12,local_e8,uVar10,(longlong)local_110);
        FUN_14006b204(local_110,uVar10);
        if (bVar11) {
          FUN_14006b344((int *)(param_3 + 0x34),(int *)local_110);
        }
        FUN_14006b444((int *)local_110,uVar14);
        FUN_14006b520(local_110,uVar10);
        FUN_14006b7e7((longlong)local_110,uVar14);
        FUN_14006b9f1(local_110,uVar10);
        if (!bVar3) {
          FUN_14006b04b(local_e8,iVar1,uVar2,0,0);
        }
        uVar14 = 1;
        bVar11 = true;
        bVar5 = false;
      } while (bVar13);
    }
    FUN_14006ba49((undefined8 *)local_110);
  }
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_148)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_148);
}

