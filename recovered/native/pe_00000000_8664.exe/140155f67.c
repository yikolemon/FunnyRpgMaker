/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140155f67 */

int FUN_140155f67(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 local_f8 [4];
  int local_f4;
  undefined1 local_f0 [152];
  undefined8 local_58;
  undefined4 local_50;
  int local_4c;
  uint local_48;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_128;
  uVar7 = *(undefined8 *)(param_1 + 0x98);
  FUN_140156231(local_f0);
  local_f4 = FUN_14015623e(local_f0,*(undefined8 *)(param_1 + 0xa0),uVar7,
                           *(undefined8 *)(param_1 + 0xe0));
  iVar5 = local_f4;
  if ((local_f4 == 0) &&
     (local_f4 = FUN_140156670(param_1,local_f0,local_58,local_50), iVar5 = local_f4,
     -1 < param_2 && local_f4 == 0)) {
    puVar6 = (undefined8 *)FUN_140128a1f(uVar7,0x48,&local_f4);
    *(undefined8 **)(param_1 + 0x1e8) = puVar6;
    iVar5 = local_f4;
    if (local_f4 == 0) {
      if (local_48 == 0) {
        puVar10 = *(undefined8 **)(param_1 + 0xa0);
        for (lVar9 = 9; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar6 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      else {
        uVar4 = *(int *)(*(undefined8 **)(param_1 + 0xa0) + 1) - local_4c;
        if (uVar4 < local_48) {
          local_48 = uVar4;
        }
        uVar7 = FUN_14012afda(uVar7,local_48,&local_f4);
        *(undefined8 *)(param_1 + 0x1e0) = uVar7;
        iVar5 = local_f4;
        if (local_f4 != 0) goto LAB_1401561ee;
        local_108 = local_f8;
        local_f4 = FUN_1401567e8(uVar7,local_48,local_4c,param_1);
        iVar5 = local_f4;
        if (local_f4 != 0) goto LAB_1401561ee;
        FUN_140129628(*(undefined8 *)(param_1 + 0x1e8),*(undefined8 *)(param_1 + 0x1e0));
        local_4c = 0;
      }
      *(int *)(param_1 + 0x1c0) = local_4c;
      uVar4 = *(uint *)(param_1 + 0x1a8);
      iVar5 = 3;
      if ((uVar4 != 0) && (uVar4 < 5 && *(uint *)(param_1 + 0x1a4) < 5)) {
        uVar8 = *(int *)(*(longlong *)(param_1 + 0x1e8) + 8) - local_4c;
        if ((*(uint *)(param_1 + 0x1a0) <= uVar8) &&
           ((*(uint *)(param_1 + 0x1ac) < 0x20000000 &&
            (*(uint *)(param_1 + 0x1ac) * (*(uint *)(param_1 + 0x1a4) + uVar4) <=
             uVar8 - *(uint *)(param_1 + 0x1a0))))) {
          if (*(int *)(param_1 + 0x1b0) != 0) {
            lVar9 = 0x70;
            uVar11 = 0;
            do {
              lVar3 = *(longlong *)(param_1 + 0x1b8);
              if (1000 < *(uint *)(lVar3 + lVar9)) {
                *(undefined4 *)(lVar3 + lVar9) = 7;
              }
              if (1000 < *(uint *)(lVar3 + 4 + lVar9)) {
                *(undefined4 *)(lVar3 + 4 + lVar9) = 1;
              }
              uVar4 = *(uint *)(lVar3 + 0x80 + lVar9);
              uVar2 = *(uint *)(lVar3 + 0x88 + lVar9);
              if ((((uVar4 != 0 && uVar2 == 0) || (4 < uVar2)) ||
                  (puVar1 = (uint *)(lVar3 + 0x84 + lVar9), uVar8 < *puVar1)) ||
                 ((0x3fffffff < uVar4 || (uVar8 - *puVar1 < uVar2 * uVar4)))) goto LAB_1401561ee;
              uVar11 = uVar11 + 1;
              lVar9 = lVar9 + 0xfc;
            } while (uVar11 < *(uint *)(param_1 + 0x1b0));
          }
          iVar5 = FUN_1401569a7(param_1);
        }
      }
    }
  }
LAB_1401561ee:
  local_f4 = iVar5;
  thunk_FUN_14015718d(local_f0);
  if (DAT_140f17b40 != (local_28 ^ (ulonglong)auStack_128)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_28 ^ (ulonglong)auStack_128);
  }
  return local_f4;
}

