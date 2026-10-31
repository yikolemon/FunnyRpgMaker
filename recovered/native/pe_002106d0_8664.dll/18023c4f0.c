/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023c4f0 */

/* WARNING: Removing unreachable block (ram,0x00018023c657) */
/* WARNING: Removing unreachable block (ram,0x00018023c65a) */
/* WARNING: Removing unreachable block (ram,0x00018023c6d3) */
/* WARNING: Removing unreachable block (ram,0x00018023c6d5) */

void FUN_18023c4f0(undefined1 (*param_1) [16],ulonglong param_2,undefined1 (*param_3) [16],
                  ulonglong param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  uint uVar10;
  bool bVar12;
  undefined1 uVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  ulonglong local_68;
  ulonglong uVar11;
  
  local_68 = DAT_180402640 ^ (ulonglong)auStack_a8;
  uVar10 = (uint)param_2 & 0xf;
  uVar11 = (ulonglong)uVar10;
  puVar5 = *param_1 + param_2;
  iVar7 = -1;
  uVar6 = (uint)param_4;
  local_88 = param_2;
  if (param_4 < 0x11) {
    FUN_1802a82f0(&local_88,param_3,param_4);
    auVar2._8_8_ = uStack_80;
    auVar2._0_8_ = local_88;
    do {
      if (puVar5 == *param_1 + uVar11) {
        if (uVar11 != 0) {
          if (param_2 < 0x10) {
            FUN_1802a82f0(&local_88,param_1,param_2);
            auVar14._8_8_ = uStack_80;
            auVar14._0_8_ = local_88;
          }
          else {
            auVar14 = *param_1;
          }
          pcmpestri(auVar2,auVar14,0x40,uVar6,uVar10);
        }
        break;
      }
      pauVar9 = (undefined1 (*) [16])(puVar5 + -0x10);
      bVar12 = (undefined1 *)0xf < puVar5;
      puVar5 = puVar5 + -0x10;
      pcmpestri(auVar2,*pauVar9,0x40,uVar6,0x10);
    } while (bVar12);
  }
  else {
    uVar6 = uVar6 & 0xf;
    pauVar9 = (undefined1 (*) [16])(*param_3 + (param_4 & 0xfffffffffffffff0));
    FUN_1802a82f0(local_78,pauVar9,uVar6);
    auVar2 = local_78;
    do {
      if (puVar5 == *param_1 + uVar11) {
        if (uVar11 != 0) {
          uVar13 = local_88 < 0x10;
          if ((bool)uVar13) {
            FUN_1802a82f0(local_78,param_1);
          }
          else {
            local_78 = *param_1;
          }
          do {
            iVar4 = pcmpestri(*param_3,local_78,0x40,0x10,uVar10);
            if (((bool)uVar13) && (iVar7 < iVar4)) {
              iVar7 = iVar4;
            }
            param_3 = param_3 + 1;
            uVar13 = param_3 < pauVar9;
          } while (param_3 != pauVar9);
          if ((param_4 & 0xf) != 0) {
            pcmpestri(auVar2,local_78,0x40,uVar6,uVar10);
          }
        }
        break;
      }
      pauVar1 = (undefined1 (*) [16])(puVar5 + -0x10);
      bVar12 = puVar5 < (undefined1 *)0x10;
      puVar5 = puVar5 + -0x10;
      iVar4 = -1;
      pauVar8 = param_3;
      do {
        iVar3 = pcmpestri(*pauVar8,*pauVar1,0x40,0x10,0x10);
        if ((bVar12) && (iVar4 < iVar3)) {
          iVar4 = iVar3;
        }
        pauVar8 = pauVar8 + 1;
        bVar12 = pauVar8 < pauVar9;
      } while (pauVar8 != pauVar9);
      if ((param_4 & 0xf) != 0) {
        pcmpestri(local_78,*pauVar1,0x40,uVar6,0x10);
      }
    } while (iVar4 == -1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_68 ^ (ulonglong)auStack_a8);
}

