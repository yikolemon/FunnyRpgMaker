/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140020116 */

undefined8 FUN_140020116(ushort *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined1 auStack_78 [32];
  uint local_58 [6];
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  uVar8 = 0;
  if ((param_1 != (ushort *)0x0) && (param_1[1] != 0)) {
    FUN_14001d45b((longlong)param_1,(int *)local_58);
    uVar8 = 2;
    if (local_58[0] != local_58[2]) {
      uVar9 = local_58[3] - local_58[1];
      if ((((uVar9 != 0) && ((int)local_58[3] < 0x1000001)) && ((int)local_58[2] < 0x1000001)) &&
         ((-0x1000001 < (int)local_58[0] && (-0x1000001 < (int)local_58[1])))) {
        uVar5 = -local_58[2];
        if ((int)-local_58[2] < 0) {
          uVar5 = local_58[2];
        }
        uVar16 = -local_58[0];
        if ((int)-local_58[0] < 0) {
          uVar16 = local_58[0];
        }
        iVar12 = 0x1f;
        if ((uVar16 | uVar5) != 0) {
          for (; (uVar16 | uVar5) >> iVar12 == 0; iVar12 = iVar12 + -1) {
          }
        }
        iVar17 = 0;
        iVar6 = iVar12 + -0xe;
        if (iVar12 + -0xe < 1) {
          iVar6 = iVar17;
        }
        iVar12 = 0x1f;
        if (uVar9 != 0) {
          for (; uVar9 >> iVar12 == 0; iVar12 = iVar12 + -1) {
          }
        }
        iVar7 = iVar12 + -0xe;
        if (iVar12 + -0xe < 1) {
          iVar7 = iVar17;
        }
        if ((ulonglong)*param_1 != 0) {
          lVar4 = *(longlong *)(param_1 + 4);
          uVar9 = 0xffffffff;
          uVar14 = 0;
          do {
            uVar3 = *(ushort *)(*(longlong *)(param_1 + 0xc) + uVar14 * 2);
            uVar15 = (ulonglong)uVar3;
            if ((int)uVar9 < (int)(uint)uVar3) {
              uVar10 = (ulonglong)(int)uVar9;
              iVar12 = *(int *)(lVar4 + 4 + uVar15 * 8) >> ((byte)iVar7 & 0x1f);
              iVar11 = *(int *)(lVar4 + uVar15 * 8) >> ((byte)iVar6 & 0x1f);
              do {
                lVar1 = uVar10 * 8;
                lVar2 = uVar10 * 8;
                uVar10 = uVar10 + 1;
                iVar18 = *(int *)(lVar4 + 8 + lVar1) >> ((byte)iVar6 & 0x1f);
                iVar13 = *(int *)(lVar4 + 0xc + lVar2) >> ((byte)iVar7 & 0x1f);
                iVar17 = iVar17 + (iVar11 + iVar18) * (iVar13 - iVar12);
                iVar12 = iVar13;
                iVar11 = iVar18;
              } while (uVar15 != uVar10);
            }
            uVar14 = uVar14 + 1;
            uVar9 = (uint)uVar3;
          } while (uVar14 != *param_1);
          uVar8 = 1;
          if ((0 < iVar17) || (uVar8 = 0, iVar17 != 0)) goto LAB_14002017e;
        }
        uVar8 = 2;
      }
    }
  }
LAB_14002017e:
  if (DAT_14012ea80 == (local_40 ^ (ulonglong)auStack_78)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_40 ^ (ulonglong)auStack_78);
}

