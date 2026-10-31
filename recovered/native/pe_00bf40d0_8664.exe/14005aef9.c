/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005aef9 */

int FUN_14005aef9(longlong param_1,longlong *param_2,uint param_3,uint param_4)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined1 auStackY_78 [32];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStackY_78;
  lVar5 = *param_2;
  local_3c = 0;
  if (lVar5 == 0) {
    iVar8 = 0x23;
  }
  else {
    lVar6 = *(longlong *)(lVar5 + 0xd8);
    iVar8 = 6;
    if ((lVar6 != 0) && (param_3 < *(uint *)(lVar5 + 0x10))) {
      if (param_3 == 0) {
        uVar14 = (uint)*(byte *)(lVar6 + 0x6a);
      }
      else {
        uVar14 = param_3 - 1;
      }
      sVar1 = *(short *)(lVar6 + 4);
      iVar8 = ((uint)(sVar1 == 0x300) * 2 + 4) * uVar14;
      uVar14 = iVar8 + 0x94;
      if (sVar1 != 0x300) {
        uVar14 = iVar8 + 0x76;
      }
      if (uVar14 < (*(int *)(lVar6 + 8) + ((uint)(sVar1 != 0x300) * 2 | 0xfffffffc)) - 2) {
        lVar5 = *(longlong *)(lVar6 + 0xa0);
        uVar9 = (ulonglong)uVar14;
        uVar2 = *(ushort *)(lVar5 + uVar9);
        *(uint *)(param_1 + 0x6c) = (uint)uVar2;
        if (sVar1 == 0x300) {
          uVar14 = *(uint *)(lVar5 + 2 + uVar9);
        }
        else {
          uVar14 = (uint)*(ushort *)(lVar5 + 2 + uVar9);
        }
        if (uVar14 < *(uint *)(lVar6 + 8)) {
          uVar3 = *(ushort *)(lVar6 + 0x60);
          *(uint *)(param_1 + 0x68) = (uint)uVar3;
          *(undefined1 *)(param_1 + 0x82) = 1;
          *(undefined4 *)(param_1 + 0x90) = 0;
          uVar4 = *(ushort *)(lVar6 + 0x50);
          *(uint *)(param_1 + 0x94) = (uint)uVar4;
          *(undefined4 *)(param_1 + 0x60) = 0x62697473;
          iVar8 = (uint)uVar2 << 6;
          *(int *)(param_1 + 0x30) = iVar8;
          iVar11 = (uint)uVar3 << 6;
          *(int *)(param_1 + 0x34) = iVar11;
          *(int *)(param_1 + 0x40) = iVar8;
          *(undefined4 *)(param_1 + 0x38) = 0;
          *(uint *)(param_1 + 0x3c) = (uint)uVar4 << 6;
          FUN_14001ebdb(param_1 + 0x30,iVar11);
          iVar8 = 0;
          if ((param_4 >> 0x16 & 1) != 0) goto LAB_14005b0dd;
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x98);
          puVar15 = (undefined1 *)((ulonglong)uVar14 + *(longlong *)(lVar6 + 0xa0));
          uVar13 = *(int *)(param_1 + 0x6c) + 7U >> 3;
          *(uint *)(param_1 + 0x70) = uVar13;
          if (uVar13 != 0) {
            iVar8 = 3;
            if (*(uint *)(param_1 + 0x68) * uVar13 + uVar14 <= *(uint *)(lVar6 + 8)) {
              puVar7 = (undefined1 *)
                       FUN_14001f231(lVar5,uVar13,0,*(uint *)(param_1 + 0x68),0,&local_3c);
              *(undefined1 **)(param_1 + 0x78) = puVar7;
              iVar8 = local_3c;
              if (local_3c == 0) {
                do {
                  if ((ulonglong)*(uint *)(param_1 + 0x68) != 0) {
                    puVar10 = puVar15 + *(uint *)(param_1 + 0x68);
                    puVar12 = puVar7;
                    do {
                      *puVar12 = *puVar15;
                      puVar15 = puVar15 + 1;
                      puVar12 = puVar12 + *(int *)(param_1 + 0x70);
                    } while (puVar15 < puVar10);
                  }
                  puVar7 = puVar7 + 1;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
                *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + 8) = 1;
              }
            }
            goto LAB_14005b0dd;
          }
        }
      }
      iVar8 = 3;
    }
  }
LAB_14005b0dd:
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStackY_78)) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStackY_78);
}

