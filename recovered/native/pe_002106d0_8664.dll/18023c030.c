/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023c030 */

/* WARNING: Removing unreachable block (ram,0x00018023c169) */
/* WARNING: Removing unreachable block (ram,0x00018023c16c) */
/* WARNING: Removing unreachable block (ram,0x00018023c1e5) */
/* WARNING: Removing unreachable block (ram,0x00018023c1e8) */

void FUN_18023c030(undefined1 (*param_1) [16],ulonglong param_2,undefined1 (*param_3) [16],
                  ulonglong param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  uint uVar4;
  undefined1 (*pauVar5) [16];
  undefined4 uVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined1 uVar13;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_180402640 ^ (ulonglong)auStack_88;
  pauVar5 = (undefined1 (*) [16])(*param_1 + (param_2 & 0xfffffffffffffff0));
  if (param_4 < 0x11) {
    FUN_1802a82f0(local_68,param_3,param_4);
    auVar2 = local_68;
    uVar6 = (undefined4)(param_4 >> 1);
    for (; param_1 != pauVar5; param_1 = param_1 + 1) {
      pcmpestri(local_68,*param_1,1,uVar6,8);
      if (param_1 < pauVar5) goto LAB_18023c1fb;
    }
    uVar10 = (uint)param_2 & 0xf;
    if ((param_2 & 0xf) != 0) {
      FUN_1802a82f0(local_68,param_1,uVar10);
      pcmpestri(auVar2,local_68,1,uVar6,uVar10 >> 1);
    }
  }
  else {
    pauVar7 = (undefined1 (*) [16])(*param_3 + (param_4 & 0xfffffffffffffff0));
    uVar10 = (uint)param_4 & 0xf;
    FUN_1802a82f0(local_68,pauVar7,uVar10);
    auVar2 = local_68;
    uVar10 = uVar10 >> 1;
    for (; param_1 != pauVar5; param_1 = param_1 + 1) {
      bVar12 = param_1 < pauVar5;
      iVar9 = 0x10;
      pauVar8 = param_3;
      do {
        iVar3 = pcmpestri(*pauVar8,*param_1,1,8,8);
        if ((bVar12) && (iVar3 < iVar9)) {
          iVar9 = iVar3;
        }
        pauVar8 = pauVar8 + 1;
        bVar12 = pauVar8 < pauVar7;
      } while (pauVar8 != pauVar7);
      if (uVar10 != 0) {
        pcmpestri(local_68,*param_1,1,uVar10,8);
      }
      if (iVar9 != 0x10) goto LAB_18023c1fb;
    }
    uVar11 = (uint)param_2 & 0xf;
    if ((param_2 & 0xf) != 0) {
      uVar13 = (param_2 & 1) != 0;
      uVar1 = uVar11 >> 1;
      FUN_1802a82f0(local_68,param_1,uVar11);
      uVar11 = uVar1;
      do {
        uVar4 = pcmpestri(*param_3,local_68,1,8,uVar1);
        if (((bool)uVar13) && ((int)uVar4 < (int)uVar11)) {
          uVar11 = uVar4;
        }
        param_3 = param_3 + 1;
        uVar13 = param_3 < pauVar7;
      } while (param_3 != pauVar7);
      if (uVar10 != 0) {
        pcmpestri(auVar2,local_68,1,uVar10,uVar1);
      }
    }
  }
LAB_18023c1fb:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_58 ^ (ulonglong)auStack_88);
}

