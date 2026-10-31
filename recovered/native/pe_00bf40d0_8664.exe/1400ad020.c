/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400ad020 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1400ad020(uint param_1,double *param_2,ulonglong param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  uint uVar9;
  double dVar8;
  int local_res8 [2];
  undefined8 local_res20;
  
  uVar4 = param_1 & 0x1f;
  if (((param_1 & 8) != 0) && ((char)param_3 < '\0')) {
    uVar4 = param_1 & 0x17;
    uVar3 = 1;
    goto LAB_1400ad350;
  }
  if (((param_1 & 4) != 0) && ((param_3 >> 9 & 1) != 0)) {
    uVar4 = param_1 & 0x1b;
    uVar3 = 4;
    goto LAB_1400ad350;
  }
  if (((param_1 & 1) == 0) || ((param_3 >> 10 & 1) == 0)) {
    uVar3 = 0;
    if (((param_1 & 2) == 0) || (uVar3 = 0, (param_3 >> 0xb & 1) == 0)) goto LAB_1400ad350;
    uVar3 = param_1 >> 4 & 1;
    if (*param_2 == 0.0) {
      uVar3 = 1;
    }
    else {
      local_res8[0] = 0;
      dVar8 = (double)FUN_140099100(0,local_res8);
      iVar2 = local_res8[0] + -0x600;
      if (iVar2 < -0x432) {
        local_res20 = dVar8 * 0.0;
        uVar3 = 1;
      }
      else {
        bVar1 = false;
        cVar5 = '\0';
        local_res20 = (double)((ulonglong)dVar8 & 0xfffffffffffff | 0x10000000000000);
        if (iVar2 < -0x3fd) {
          local_res20._0_4_ = (uint)((ulonglong)dVar8 & 0xfffffffffffff);
          uVar6 = (ulonglong)(-iVar2 - 0x3fd);
          bVar1 = false;
          do {
            if ((((uint)local_res20 & 1) != 0) && (uVar3 == 0)) {
              uVar3 = 1;
            }
            bVar7 = cVar5 != '\0';
            cVar5 = (char)((uint)local_res20 & 1);
            if (bVar7) {
              bVar1 = true;
            }
            local_res20._0_4_ = (uint)local_res20 >> 1;
            if ((local_res20._4_4_ & 1) != 0) {
              local_res20._0_4_ = (uint)local_res20 | 0x80000000;
            }
            local_res20._4_4_ = local_res20._4_4_ >> 1;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if (dVar8 < 0.0) {
          local_res20 = (double)CONCAT44((uint)((ulonglong)local_res20 >> 0x20) ^ _UNK_1400be874,
                                         SUB84(local_res20,0) ^ _DAT_1400be870);
        }
        bVar7 = dVar8 < 0.0;
        if ((cVar5 != '\0') || (bVar1)) {
          iVar2 = fegetround();
          if (iVar2 == 0) {
            if (cVar5 != '\0') {
              if (!bVar1) {
                bVar7 = (bool)((byte)local_res20 & 1);
                goto LAB_1400ad313;
              }
              goto LAB_1400ad315;
            }
          }
          else {
            if (iVar2 != 0x100) {
              if (iVar2 != 0x200) goto LAB_1400ad32f;
              bVar7 = 0.0 <= dVar8;
            }
LAB_1400ad313:
            if (bVar7 != false) {
LAB_1400ad315:
              local_res20 = (double)((longlong)local_res20 + 1);
            }
          }
        }
      }
LAB_1400ad32f:
      *param_2 = local_res20;
    }
    uVar4 = param_1 & 0x1d;
    uVar3 = -(uint)(uVar3 != 0) & 0x10;
    goto LAB_1400ad350;
  }
  uVar3 = 8;
  uVar4 = (uint)param_3 & 0x6000;
  if ((param_3 & 0x6000) == 0) {
    if (0.0 < *param_2) {
      uVar4 = param_1 & 0x1e;
      *param_2 = DAT_14010e4a0;
      goto LAB_1400ad350;
    }
LAB_1400ad16b:
    dVar8 = (double)CONCAT44((uint)((ulonglong)DAT_14010e4a0 >> 0x20) ^ _UNK_1400be874,
                             SUB84(DAT_14010e4a0,0) ^ _DAT_1400be870);
LAB_1400ad17a:
    *param_2 = dVar8;
  }
  else {
    if (uVar4 == 0x2000) {
      if (0.0 < *param_2) {
        uVar4 = param_1 & 0x1e;
        *param_2 = DAT_14010e4a8;
        goto LAB_1400ad350;
      }
      goto LAB_1400ad16b;
    }
    uVar9 = (uint)((ulonglong)DAT_14010e4a8 >> 0x20);
    if (uVar4 == 0x4000) {
      if (*param_2 <= 0.0) {
        uVar4 = param_1 & 0x1e;
        *param_2 = (double)CONCAT44(uVar9 ^ _UNK_1400be874,SUB84(DAT_14010e4a8,0) ^ _DAT_1400be870);
      }
      else {
        uVar4 = param_1 & 0x1e;
        *param_2 = DAT_14010e4a0;
      }
      goto LAB_1400ad350;
    }
    if (uVar4 == 0x6000) {
      dVar8 = DAT_14010e4a8;
      if (*param_2 <= 0.0) {
        uVar4 = param_1 & 0x1e;
        *param_2 = (double)CONCAT44(uVar9 ^ _UNK_1400be874,SUB84(DAT_14010e4a8,0) ^ _DAT_1400be870);
        goto LAB_1400ad350;
      }
      goto LAB_1400ad17a;
    }
  }
  uVar4 = param_1 & 0x1e;
LAB_1400ad350:
  if (((param_1 & 0x10) != 0) && ((param_3 >> 0xc & 1) != 0)) {
    uVar3 = uVar3 | 0x20;
    uVar4 = uVar4 & 0xffffffef;
  }
  if (uVar3 != 0) {
    FUN_1400a9dd0(uVar3);
  }
  return uVar4 == 0;
}

