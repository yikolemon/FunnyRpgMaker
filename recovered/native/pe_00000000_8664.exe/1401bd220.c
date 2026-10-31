/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401bd220 */

bool FUN_1401bd220(uint param_1,double *param_2,ulonglong param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  ulonglong uVar7;
  bool bVar8;
  double dVar9;
  int local_res8 [2];
  undefined8 local_res20;
  
  uVar5 = param_1 & 0x1f;
  if (((param_1 & 8) != 0) && ((char)param_3 < '\0')) {
    uVar5 = param_1 & 0x17;
    bVar2 = 1;
    goto LAB_1401bd550;
  }
  if (((param_1 & 4) != 0) && ((param_3 >> 9 & 1) != 0)) {
    uVar5 = param_1 & 0x1b;
    bVar2 = 4;
    goto LAB_1401bd550;
  }
  if (((param_1 & 1) == 0) || ((param_3 >> 10 & 1) == 0)) {
    bVar2 = 0;
    if (((param_1 & 2) == 0) || (bVar2 = 0, (param_3 >> 0xb & 1) == 0)) goto LAB_1401bd550;
    uVar4 = param_1 >> 4 & 1;
    if (*param_2 == 0.0) {
      uVar4 = 1;
    }
    else {
      local_res8[0] = 0;
      dVar9 = (double)FUN_1401a44b0(0,local_res8);
      iVar3 = local_res8[0] + -0x600;
      if (iVar3 < -0x432) {
        local_res20 = dVar9 * 0.0;
        uVar4 = 1;
      }
      else {
        bVar1 = false;
        cVar6 = '\0';
        local_res20 = (double)((ulonglong)dVar9 & 0xfffffffffffff | 0x10000000000000);
        if (iVar3 < -0x3fd) {
          local_res20._0_4_ = (uint)((ulonglong)dVar9 & 0xfffffffffffff);
          uVar7 = (ulonglong)(-iVar3 - 0x3fd);
          bVar1 = false;
          do {
            if ((((uint)local_res20 & 1) != 0) && (uVar4 == 0)) {
              uVar4 = 1;
            }
            bVar8 = cVar6 != '\0';
            cVar6 = (char)((uint)local_res20 & 1);
            if (bVar8) {
              bVar1 = true;
            }
            local_res20._0_4_ = (uint)local_res20 >> 1;
            if ((local_res20._4_4_ & 1) != 0) {
              local_res20._0_4_ = (uint)local_res20 | 0x80000000;
            }
            local_res20._4_4_ = local_res20._4_4_ >> 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        if (dVar9 < 0.0) {
          local_res20 = (double)CONCAT44((uint)((ulonglong)local_res20 >> 0x20) ^
                                         DAT_1401c8630._4_4_,
                                         SUB84(local_res20,0) ^ (uint)DAT_1401c8630);
        }
        bVar8 = dVar9 < 0.0;
        if ((cVar6 != '\0') || (bVar1)) {
          iVar3 = fegetround();
          if (iVar3 == 0) {
            if (cVar6 != '\0') {
              if (!bVar1) {
                bVar8 = (bool)((byte)local_res20 & 1);
                goto LAB_1401bd513;
              }
              goto LAB_1401bd515;
            }
          }
          else {
            if (iVar3 != 0x100) {
              if (iVar3 != 0x200) goto LAB_1401bd52f;
              bVar8 = 0.0 <= dVar9;
            }
LAB_1401bd513:
            if (bVar8 != false) {
LAB_1401bd515:
              local_res20 = (double)((longlong)local_res20 + 1);
            }
          }
        }
      }
LAB_1401bd52f:
      *param_2 = local_res20;
    }
    uVar5 = param_1 & 0x1d;
    bVar2 = -(uVar4 != 0) & 0x10;
    goto LAB_1401bd550;
  }
  bVar2 = 8;
  uVar5 = (uint)param_3 & 0x6000;
  if ((param_3 & 0x6000) == 0) {
    if (0.0 < *param_2) {
      uVar5 = param_1 & 0x1e;
      *param_2 = DAT_140eb5ff0;
      goto LAB_1401bd550;
    }
LAB_1401bd36b:
    dVar9 = (double)CONCAT44((uint)((ulonglong)DAT_140eb5ff0 >> 0x20) ^ DAT_1401c8630._4_4_,
                             SUB84(DAT_140eb5ff0,0) ^ (uint)DAT_1401c8630);
LAB_1401bd37a:
    *param_2 = dVar9;
  }
  else {
    if (uVar5 == 0x2000) {
      if (0.0 < *param_2) {
        uVar5 = param_1 & 0x1e;
        *param_2 = DAT_140eb5ff8;
        goto LAB_1401bd550;
      }
      goto LAB_1401bd36b;
    }
    uVar4 = (uint)((ulonglong)DAT_140eb5ff8 >> 0x20);
    if (uVar5 == 0x4000) {
      if (*param_2 <= 0.0) {
        uVar5 = param_1 & 0x1e;
        *param_2 = (double)CONCAT44(uVar4 ^ DAT_1401c8630._4_4_,
                                    SUB84(DAT_140eb5ff8,0) ^ (uint)DAT_1401c8630);
      }
      else {
        uVar5 = param_1 & 0x1e;
        *param_2 = DAT_140eb5ff0;
      }
      goto LAB_1401bd550;
    }
    if (uVar5 == 0x6000) {
      dVar9 = DAT_140eb5ff8;
      if (*param_2 <= 0.0) {
        uVar5 = param_1 & 0x1e;
        *param_2 = (double)CONCAT44(uVar4 ^ DAT_1401c8630._4_4_,
                                    SUB84(DAT_140eb5ff8,0) ^ (uint)DAT_1401c8630);
        goto LAB_1401bd550;
      }
      goto LAB_1401bd37a;
    }
  }
  uVar5 = param_1 & 0x1e;
LAB_1401bd550:
  if (((param_1 & 0x10) != 0) && ((param_3 >> 0xc & 1) != 0)) {
    bVar2 = bVar2 | 0x20;
    uVar5 = uVar5 & 0xffffffef;
  }
  if (bVar2 != 0) {
    FUN_1401b96e0();
  }
  return uVar5 == 0;
}

