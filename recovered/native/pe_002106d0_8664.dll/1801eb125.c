/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801eb125 */

void FUN_1801eb125(longlong *param_1)

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
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_98;
  lVar5 = 0;
  local_4c = 0;
  lVar1 = *param_1;
  uVar2 = *(undefined8 *)(lVar1 + 0x98);
  param_1[5] = 0;
  param_1[7] = 0;
  local_50 = 0;
  local_78 = &local_50;
  iVar4 = FUN_1801ccc39(lVar1,0x47535542,0,0);
  lVar9 = 0;
  if (iVar4 == 0) {
    lVar9 = FUN_1801cc006(uVar2,local_50,&local_4c);
    if (local_4c == 0) {
      lVar5 = 0;
      local_78 = &local_50;
      iVar4 = FUN_1801ccc39(lVar1,0x47535542,0,lVar9);
      if (local_50 < 10 || iVar4 != 0) goto LAB_1801eb1a9;
      uVar6 = *(ushort *)(lVar9 + 8) << 8 | *(ushort *)(lVar9 + 8) >> 8;
      uVar11 = (ulonglong)uVar6;
      if (uVar6 + 2 <= local_50) {
        uVar7 = *(ushort *)(lVar9 + uVar11) << 8 | *(ushort *)(lVar9 + uVar11) >> 8;
        uVar10 = (uint)uVar7;
        if (uVar6 + 2 + uVar10 * 2 <= local_50) {
          local_78 = (uint *)0x0;
          local_70 = &local_4c;
          lVar5 = FUN_1801c9c3f(uVar2,4,0,uVar10);
          if (local_4c == 0) {
            local_5a = uVar7;
            if (uVar7 != 0) {
              uVar12 = (ulonglong)local_50;
              local_58 = lVar9 + uVar11 + 2;
              uVar8 = 0;
              do {
                uVar7 = *(ushort *)(lVar9 + uVar11 + 2 + uVar8 * 2);
                uVar7 = uVar7 << 8 | uVar7 >> 8;
                cVar3 = FUN_1801eb7c1(lVar9 + uVar11 + (ulonglong)uVar7,uVar12 + lVar9);
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
            goto LAB_1801eb1c5;
          }
          goto LAB_1801eb1a9;
        }
      }
    }
    lVar5 = 0;
  }
LAB_1801eb1a9:
  *(undefined2 *)(param_1 + 6) = 0;
  FUN_1801c9b65(uVar2,lVar9);
  FUN_1801c9b65(uVar2,lVar5);
LAB_1801eb1c5:
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_98);
}

