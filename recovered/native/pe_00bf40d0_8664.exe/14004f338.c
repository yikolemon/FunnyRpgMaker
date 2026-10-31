/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004f338 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14004f338(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined1 local_a8 [32];
  int local_88 [8];
  uint local_68 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)local_a8;
  puVar7 = *(undefined8 **)(param_1 + 0x20);
  uVar5 = 0xa1;
  if (puVar7 + 6 <= *(undefined8 **)(param_1 + 0x28)) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    *(undefined1 *)(lVar2 + 0x3c) = 1;
    iVar9 = -0x80000000;
    iVar8 = 0x7fffffff;
    lVar10 = 0;
    do {
      iVar3 = FUN_14004f7bc(param_1,puVar7,(int *)((longlong)local_88 + lVar10));
      *(int *)((longlong)local_68 + lVar10) = iVar3;
      if (iVar3 != 0) {
        iVar3 = *(int *)((longlong)local_88 + lVar10);
        if (iVar9 < iVar3) {
          iVar9 = iVar3;
        }
        if (iVar3 < iVar8) {
          iVar8 = iVar3;
        }
      }
      puVar7 = puVar7 + 1;
      lVar10 = lVar10 + 4;
    } while (lVar10 != 0x18);
    if ((0xfffffff5 < iVar9 - 1U) && ((uint)(iVar9 - iVar8) < 10)) {
      lVar10 = 0;
      do {
        uVar1 = local_68[lVar10];
        if (uVar1 != 0) {
          uVar6 = *(int *)(&DAT_1400f6c90 + ((longlong)iVar9 - (longlong)local_88[lVar10]) * 4) >> 1
          ;
          if ((int)uVar1 < 0) {
            iVar8 = uVar1 - uVar6;
            if (uVar1 <= (uVar6 | 0x80000000)) {
              iVar8 = -0x80000000;
            }
          }
          else {
            iVar8 = uVar6 + uVar1;
            if ((uVar6 ^ 0x7fffffff) <= uVar1) {
              iVar8 = 0x7fffffff;
            }
          }
          local_68[lVar10] =
               iVar8 / *(int *)(&DAT_1400f6c90 + ((longlong)iVar9 - (longlong)local_88[lVar10]) * 4)
          ;
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 != 6);
      *(uint *)(lVar2 + 0x2c) = local_68[0];
      *(uint *)(lVar2 + 0x30) = local_68[2];
      *(uint *)(lVar2 + 0x34) = local_68[1];
      *(uint *)(lVar2 + 0x38) = local_68[3];
      *(undefined8 *)(lVar2 + 0x44) = local_58;
      *(undefined4 *)(lVar2 + 0x40) = *(undefined4 *)(&DAT_1400f6c90 + (ulonglong)(uint)-iVar9 * 4);
      uVar4 = FUN_140021bbb((uint *)(lVar2 + 0x2c));
      uVar5 = 0;
      if ((char)uVar4 != '\0') goto LAB_14004f49c;
    }
    uVar5 = _UNK_1400e6838;
    *(undefined8 *)(lVar2 + 0x2c) = _DAT_1400e6830;
    *(undefined8 *)(lVar2 + 0x34) = uVar5;
    *(undefined4 *)(lVar2 + 0x48) = 0;
    *(undefined8 *)(lVar2 + 0x40) = 1;
    uVar5 = 0;
  }
LAB_14004f49c:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)local_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)local_a8);
  }
  return uVar5;
}

