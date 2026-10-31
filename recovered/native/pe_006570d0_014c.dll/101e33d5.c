/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e33d5 */

void __fastcall FUN_101e33d5(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int *local_34;
  int local_30;
  undefined4 local_20;
  int *local_1c;
  
  iVar2 = *(int *)(param_1 + 0x100);
  if (*(int *)(param_1 + 0x24) < iVar2) {
    uVar5 = 0x81;
  }
  else {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - iVar2;
    uVar1 = *(ushort *)(param_1 + 0xea);
    if (uVar1 < *(ushort *)(param_1 + 0x28)) {
      if (((*(short *)(param_1 + 0xee) == 0) || (*(short *)(param_1 + 0xf0) == 0)) ||
         (*(short *)(param_1 + 0xf2) == 0)) {
        iVar6 = (uint)uVar1 * 8;
        local_34 = (int *)(*(int *)(param_1 + 0x2c) + iVar6);
        local_1c = (int *)(iVar6 + *(int *)(param_1 + 0x30));
        uVar1 = *(ushort *)(param_1 + 0xec);
        if (*(ushort *)(param_1 + 0x44) <= uVar1) {
          bVar4 = true;
          goto LAB_101e3517;
        }
        local_30 = (**(code **)(param_1 + 0x1e0))
                             (param_1,*(int *)(*(int *)(param_1 + 0x48) + (uint)uVar1 * 8) -
                                      *local_34,
                              *(int *)(*(int *)(param_1 + 0x48) + 4 + (uint)uVar1 * 8) - local_34[1]
                             );
        bVar4 = true;
LAB_101e358e:
        local_20 = (**(code **)(param_1 + 0x1dc))
                             (param_1,*(int *)(*(int *)(param_1 + 0x4c) +
                                              (uint)*(ushort *)(param_1 + 0xec) * 8) - *local_1c,
                              *(int *)(*(int *)(param_1 + 0x4c) + 4 +
                                      (uint)*(ushort *)(param_1 + 0xec) * 8) - local_1c[1]);
      }
      else {
        iVar6 = (uint)uVar1 * 8;
        local_34 = (int *)(*(int *)(param_1 + 0x34) + iVar6);
        local_1c = (int *)(iVar6 + *(int *)(param_1 + 0x30));
        uVar11 = (uint)*(ushort *)(param_1 + 0xec);
        bVar4 = false;
        if (*(ushort *)(param_1 + 0xec) < *(ushort *)(param_1 + 0x44)) {
          if (*(int *)(param_1 + 0xbc) == *(int *)(param_1 + 0xc0)) {
            uVar7 = *(int *)(*(int *)(param_1 + 0x50) + 4 + uVar11 * 8) - local_34[1];
            uVar10 = *(int *)(*(int *)(param_1 + 0x50) + uVar11 * 8) - *local_34;
          }
          else {
            lVar3 = (longlong)(*(int *)(*(int *)(param_1 + 0x50) + uVar11 * 8) - *local_34) *
                    (longlong)*(int *)(param_1 + 0xbc);
            iVar6 = (int)(lVar3 >> 0x3f);
            lVar3 = lVar3 + CONCAT44(iVar6,iVar6) + 0x8000;
            uVar10 = (int)((ulonglong)lVar3 >> 0x20) * 0x10000 | (uint)lVar3 >> 0x10;
            lVar3 = (longlong)(*(int *)(*(int *)(param_1 + 0x50) + 4 + uVar11 * 8) - local_34[1]) *
                    (longlong)*(int *)(param_1 + 0xc0);
            iVar6 = (int)(lVar3 >> 0x3f);
            lVar3 = lVar3 + CONCAT44(iVar6,iVar6) + 0x8000;
            uVar7 = (int)((ulonglong)lVar3 >> 0x20) * 0x10000 | (uint)lVar3 >> 0x10;
          }
          local_30 = (**(code **)(param_1 + 0x1e0))(param_1,uVar10,uVar7);
          bVar4 = false;
          goto LAB_101e358e;
        }
LAB_101e3517:
        local_20 = 0;
        local_30 = 0;
      }
      if (iVar2 != 0) {
        iVar6 = 0;
        do {
          uVar11 = *(uint *)(param_2 + -4 + iVar6 * 4);
          if (uVar11 < *(ushort *)(param_1 + 0x60)) {
            if (bVar4) {
              iVar8 = *(int *)(param_1 + 100);
LAB_101e3615:
              uVar7 = *(int *)(iVar8 + 4 + uVar11 * 8) - local_34[1];
              uVar10 = *(int *)(iVar8 + uVar11 * 8) - *local_34;
            }
            else {
              if (*(int *)(param_1 + 0xbc) == *(int *)(param_1 + 0xc0)) {
                iVar8 = *(int *)(param_1 + 0x6c);
                goto LAB_101e3615;
              }
              lVar3 = (longlong)(*(int *)(*(int *)(param_1 + 0x6c) + uVar11 * 8) - *local_34) *
                      (longlong)*(int *)(param_1 + 0xbc);
              iVar8 = (int)(lVar3 >> 0x3f);
              lVar3 = lVar3 + CONCAT44(iVar8,iVar8) + 0x8000;
              uVar10 = (int)((ulonglong)lVar3 >> 0x20) * 0x10000 | (uint)lVar3 >> 0x10;
              lVar3 = (longlong)(*(int *)(*(int *)(param_1 + 0x6c) + 4 + uVar11 * 8) - local_34[1])
                      * (longlong)*(int *)(param_1 + 0xc0);
              iVar8 = (int)(lVar3 >> 0x3f);
              lVar3 = lVar3 + CONCAT44(iVar8,iVar8) + 0x8000;
              uVar7 = (int)((ulonglong)lVar3 >> 0x20) * 0x10000 | (uint)lVar3 >> 0x10;
            }
            iVar8 = (**(code **)(param_1 + 0x1e0))(param_1,uVar10,uVar7);
            iVar9 = (**(code **)(param_1 + 0x1dc))
                              (param_1,*(int *)(*(int *)(param_1 + 0x68) + uVar11 * 8) - *local_1c,
                               *(int *)(*(int *)(param_1 + 0x68) + 4 + uVar11 * 8) - local_1c[1]);
            if ((iVar8 != 0) && (local_30 != 0)) {
              iVar8 = FUN_101c16ea(iVar8,local_20,local_30);
            }
            (**(code **)(param_1 + 0x1e8))(param_1,(ushort *)(param_1 + 0x60),uVar11,iVar8 - iVar9);
          }
          else if (*(char *)(param_1 + 0x1ce) != '\0') {
            *(undefined4 *)(param_1 + 0x10) = 0x86;
            return;
          }
          iVar6 = iVar6 + -1;
        } while (-iVar2 != iVar6);
      }
      goto LAB_101e34a2;
    }
    uVar5 = 0x86;
  }
  if (*(char *)(param_1 + 0x1ce) != '\0') {
    *(undefined4 *)(param_1 + 0x10) = uVar5;
  }
LAB_101e34a2:
  *(undefined4 *)(param_1 + 0x100) = 1;
  return;
}

