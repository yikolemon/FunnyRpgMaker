/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015939e */

int FUN_14015939e(longlong param_1,longlong param_2,ulonglong param_3,char param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  int *piVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_c8 [32];
  int *local_a8;
  int *local_a0;
  uint *local_98;
  int *local_90;
  int *local_88;
  char local_79;
  longlong local_78;
  undefined8 local_70;
  int local_68;
  uint local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_c8;
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(lVar1 + 0x1f0);
  iVar7 = 6;
  iVar3 = iVar7;
  if (iVar2 != 0) {
    puVar9 = (undefined4 *)((param_3 & 0xffffffff) * 0x10 + *(longlong *)(lVar1 + 0x228));
    lVar5 = *(longlong *)(lVar1 + 0xa0);
    piVar10 = (int *)(*(longlong *)(lVar1 + 0x1f8) + 0x1c);
    do {
      if ((piVar10[-7] == (uint)*(ushort *)(param_2 + 0x18)) &&
         (piVar10[-6] == (uint)*(ushort *)(param_2 + 0x1a))) {
        uVar6 = piVar10[-5];
        local_79 = param_4;
        iVar3 = FUN_14012d612(lVar5,piVar10[-1] + *(int *)(lVar1 + 0x248));
        if (iVar3 == 0) {
          iVar2 = (uVar6 & 1) + 5;
          if ((uVar6 & 2) == 0) {
            iVar2 = (uVar6 & 1) + 4;
          }
          iVar3 = FUN_14012dc34(lVar5,(iVar2 + (uint)((uVar6 >> 2 & 1) != 0)) * *piVar10);
          if (iVar3 == 0) {
            local_98 = &local_50;
            local_a0 = &local_4c;
            local_a8 = (int *)CONCAT44(local_a8._4_4_,*puVar9);
            FUN_14015979b(*(undefined8 *)(lVar5 + 0x38),*(undefined8 *)(lVar5 + 0x40),*piVar10,
                          piVar10 + -5);
            local_78 = lVar5;
            FUN_14012dd58(lVar5);
            iVar3 = iVar7;
            if (local_50 != 0) {
              local_54 = 0;
              local_58 = 0;
              local_60 = 0;
              local_64 = 0;
              local_68 = 0;
              uVar4 = puVar9[1];
              if (*(int *)(lVar1 + 0x18c) != *(int *)(lVar1 + 0x188)) {
                uVar4 = FUN_14012a478(uVar4);
              }
              *(undefined4 *)(param_1 + 0x50) = uVar4;
              iVar2 = FUN_14012a478((ulonglong)*(ushort *)(param_2 + 0x18) << 8,puVar9[1],
                                    *(undefined4 *)(lVar1 + 0x18c));
              lVar5 = local_78;
              local_5c = iVar2;
              iVar3 = FUN_14012d612(local_78,local_4c + *(int *)(lVar1 + 0x110));
              if ((iVar3 == 0) && (iVar3 = FUN_14012dc34(lVar5,local_50), iVar3 == 0)) {
                local_70 = *(undefined8 *)(lVar5 + 0x38);
                local_88 = &local_68;
                local_90 = &local_5c;
                local_98 = &local_64;
                local_a0 = &local_60;
                local_a8 = &local_58;
                iVar3 = FUN_140159915(&local_70,*(undefined8 *)(lVar5 + 0x40),iVar2,&local_54);
                iVar2 = local_68;
                lVar5 = local_78;
                if (iVar3 == 0) {
                  iVar3 = 8;
                  if (local_68 == 2) {
                    local_50 = (local_50 + 1 >> 1) * 0xff;
LAB_14015963a:
                    bVar11 = local_64 * local_60 < local_50;
                    bVar12 = local_64 * local_60 == local_50;
                  }
                  else {
                    if (local_68 == 1) {
                      local_50 = local_50 * 0xf;
                      goto LAB_14015963a;
                    }
                    if (local_68 != 0) goto LAB_1401595c6;
                    uVar6 = local_64 * local_60 + 7 >> 3;
                    bVar11 = uVar6 < local_50;
                    bVar12 = uVar6 == local_50;
                  }
                  if (((bVar11 || bVar12) && (iVar3 = 0x17, -1 < (int)local_64)) &&
                     (local_58 <= (int)(local_64 ^ 0x7fffffff))) {
                    *(undefined4 *)(param_1 + 0x60) = 0x62697473;
                    *(int *)(param_1 + 0x6c) = local_60;
                    *(uint *)(param_1 + 0x68) = local_64;
                    *(int *)(param_1 + 0x70) = local_60 + 7 >> 3;
                    *(undefined1 *)(param_1 + 0x82) = 1;
                    *(int *)(param_1 + 0x30) = local_60 * 0x40;
                    *(uint *)(param_1 + 0x34) = local_64 << 6;
                    *(int *)(param_1 + 0x38) = local_54 << 6;
                    *(int *)(param_1 + 0x3c) = local_58 << 6;
                    uVar6 = (local_5c >> 2) + 0x20U & 0xffffffc0;
                    uVar8 = (ulonglong)uVar6;
                    *(uint *)(param_1 + 0x40) = uVar6;
                    *(int *)(param_1 + 0x44) = local_60 * -0x40 >> 1;
                    *(undefined4 *)(param_1 + 0x48) = 0;
                    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x2c);
                    *(int *)(param_1 + 0x90) = local_54;
                    *(uint *)(param_1 + 0x94) = local_58 + local_64;
                    iVar3 = 0;
                    if ((local_79 == '\0') &&
                       (iVar3 = FUN_140129afc(param_1), lVar5 = local_78, iVar3 == 0)) {
                      local_a8 = (int *)(param_1 + 0x68);
                      FUN_140159be1(local_70,*(undefined8 *)(local_78 + 0x40),iVar2,
                                    CONCAT71((int7)(uVar8 >> 8),*(byte *)(lVar1 + 0x124) >> 1) &
                                    0xffffffffffffff01);
                      iVar3 = 0;
                    }
                  }
                }
LAB_1401595c6:
                FUN_14012dd58(lVar5);
              }
            }
          }
        }
        break;
      }
      piVar10 = piVar10 + 10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_c8);
  }
  return iVar3;
}

