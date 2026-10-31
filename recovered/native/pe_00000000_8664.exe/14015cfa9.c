/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015cfa9 */

int FUN_14015cfa9(longlong param_1,longlong *param_2,uint param_3,uint param_4)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int *local_50;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  lVar5 = *param_2;
  local_3c = 0;
  if (lVar5 == 0) {
    iVar9 = 0x23;
  }
  else {
    lVar6 = *(longlong *)(lVar5 + 0xd8);
    iVar9 = 6;
    if ((lVar6 != 0) && (param_3 < *(uint *)(lVar5 + 0x10))) {
      if (param_3 == 0) {
        param_3 = (uint)*(byte *)(lVar6 + 0x6a);
      }
      else {
        param_3 = param_3 - 1;
      }
      sVar1 = *(short *)(lVar6 + 4);
      iVar9 = ((uint)(sVar1 == 0x300) * 2 + 4) * param_3;
      uVar13 = iVar9 + 0x94;
      if (sVar1 != 0x300) {
        uVar13 = iVar9 + 0x76;
      }
      if (uVar13 < (*(int *)(lVar6 + 8) + ((uint)(sVar1 != 0x300) * 2 | 0xfffffffc)) - 2) {
        lVar5 = *(longlong *)(lVar6 + 0xa0);
        uVar10 = (ulonglong)uVar13;
        uVar2 = *(ushort *)(lVar5 + uVar10);
        *(uint *)(param_1 + 0x6c) = (uint)uVar2;
        if (sVar1 == 0x300) {
          uVar13 = *(uint *)(lVar5 + 2 + uVar10);
        }
        else {
          uVar13 = (uint)*(ushort *)(lVar5 + 2 + uVar10);
        }
        if (uVar13 < *(uint *)(lVar6 + 8)) {
          uVar3 = *(ushort *)(lVar6 + 0x60);
          *(uint *)(param_1 + 0x68) = (uint)uVar3;
          *(undefined1 *)(param_1 + 0x82) = 1;
          *(undefined4 *)(param_1 + 0x90) = 0;
          uVar4 = *(ushort *)(lVar6 + 0x50);
          *(uint *)(param_1 + 0x94) = (uint)uVar4;
          *(undefined4 *)(param_1 + 0x60) = 0x62697473;
          iVar9 = (uint)uVar2 << 6;
          *(int *)(param_1 + 0x30) = iVar9;
          *(uint *)(param_1 + 0x34) = (uint)uVar3 << 6;
          *(int *)(param_1 + 0x40) = iVar9;
          *(undefined4 *)(param_1 + 0x38) = 0;
          *(uint *)(param_1 + 0x3c) = (uint)uVar4 << 6;
          FUN_14012b254(param_1 + 0x30);
          iVar9 = 0;
          if ((param_4 >> 0x16 & 1) != 0) goto LAB_14015d18d;
          uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x98);
          puVar15 = (undefined1 *)((ulonglong)uVar13 + *(longlong *)(lVar6 + 0xa0));
          uVar14 = *(int *)(param_1 + 0x6c) + 7U >> 3;
          *(uint *)(param_1 + 0x70) = uVar14;
          if (uVar14 != 0) {
            iVar9 = 3;
            if (*(int *)(param_1 + 0x68) * uVar14 + uVar13 <= *(uint *)(lVar6 + 8)) {
              local_50 = &local_3c;
              local_58 = 0;
              puVar8 = (undefined1 *)FUN_14012b8aa(uVar7,uVar14,0);
              *(undefined1 **)(param_1 + 0x78) = puVar8;
              iVar9 = local_3c;
              if (local_3c == 0) {
                do {
                  if ((ulonglong)*(uint *)(param_1 + 0x68) != 0) {
                    puVar11 = puVar15 + *(uint *)(param_1 + 0x68);
                    puVar12 = puVar8;
                    do {
                      *puVar12 = *puVar15;
                      puVar15 = puVar15 + 1;
                      puVar12 = puVar12 + *(int *)(param_1 + 0x70);
                    } while (puVar15 < puVar11);
                  }
                  puVar8 = puVar8 + 1;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
                *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + 8) = 1;
              }
            }
            goto LAB_14015d18d;
          }
        }
      }
      iVar9 = 3;
    }
  }
LAB_14015d18d:
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_78)) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_78);
}

