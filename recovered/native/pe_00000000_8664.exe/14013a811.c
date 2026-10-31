/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013a811 */

void FUN_14013a811(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_98 [32];
  uint *local_78;
  int *local_70;
  ushort local_5a;
  longlong local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  lVar5 = 0;
  local_4c = 0;
  lVar1 = *param_1;
  uVar2 = *(undefined8 *)(lVar1 + 0x98);
  param_1[5] = 0;
  param_1[7] = 0;
  local_50 = 0;
  local_78 = &local_50;
  iVar4 = FUN_14012bc0d(lVar1,0x47535542,0,0);
  lVar9 = 0;
  if (iVar4 == 0) {
    lVar9 = FUN_14012afda(uVar2,local_50,&local_4c);
    if (local_4c == 0) {
      lVar5 = 0;
      local_78 = &local_50;
      iVar4 = FUN_14012bc0d(lVar1,0x47535542,0,lVar9);
      if (local_50 < 10 || iVar4 != 0) goto LAB_14013a895;
      uVar6 = *(ushort *)(lVar9 + 8) << 8 | *(ushort *)(lVar9 + 8) >> 8;
      uVar11 = (ulonglong)uVar6;
      if (uVar6 + 2 <= local_50) {
        uVar7 = *(ushort *)(lVar9 + uVar11) << 8 | *(ushort *)(lVar9 + uVar11) >> 8;
        uVar10 = (uint)uVar7;
        if (uVar6 + 2 + uVar10 * 2 <= local_50) {
          local_78 = (uint *)0x0;
          local_70 = &local_4c;
          lVar5 = FUN_140128c13(uVar2,4,0,uVar10);
          if (local_4c == 0) {
            local_5a = uVar7;
            if (uVar7 != 0) {
              uVar12 = (ulonglong)local_50;
              local_58 = lVar9 + uVar11 + 2;
              uVar8 = 0;
              do {
                uVar7 = *(ushort *)(lVar9 + uVar11 + 2 + uVar8 * 2);
                uVar7 = uVar7 << 8 | uVar7 >> 8;
                cVar3 = FUN_14013aead(lVar9 + uVar11 + (ulonglong)uVar7,uVar12 + lVar9);
                if (cVar3 != '\0') {
                  *(uint *)(lVar5 + (uVar8 & 0xffffffff) * 4) = (uint)uVar7 + (uint)uVar6;
                }
                lVar1 = uVar8 * 2;
                uVar8 = uVar8 + 1;
              } while (local_58 + lVar1 + 2U < lVar9 + uVar11 + (ulonglong)(uVar10 * 2) + 2);
            }
            param_1[5] = lVar9;
            *(ushort *)(param_1 + 6) = local_5a;
            param_1[7] = lVar5;
            goto LAB_14013a8b1;
          }
          goto LAB_14013a895;
        }
      }
    }
    lVar5 = 0;
  }
LAB_14013a895:
  *(undefined2 *)(param_1 + 6) = 0;
  FUN_140128b39(uVar2,lVar9);
  FUN_140128b39(uVar2,lVar5);
LAB_14013a8b1:
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_98);
}

