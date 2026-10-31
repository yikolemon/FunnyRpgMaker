/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401513e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401513e8(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined1 local_a8 [32];
  int local_88 [8];
  uint local_68 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)local_a8;
  lVar8 = *(longlong *)(param_1 + 0x20);
  uVar5 = 0xa1;
  if (lVar8 + 0x30U <= *(ulonglong *)(param_1 + 0x28)) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    *(undefined1 *)(lVar2 + 0x3c) = 1;
    iVar10 = -0x80000000;
    iVar9 = 0x7fffffff;
    lVar11 = 0;
    do {
      iVar4 = FUN_14015186c(param_1,lVar8);
      *(int *)((longlong)local_68 + lVar11) = iVar4;
      if (iVar4 != 0) {
        iVar4 = *(int *)((longlong)local_88 + lVar11);
        if (iVar10 < iVar4) {
          iVar10 = iVar4;
        }
        if (iVar4 < iVar9) {
          iVar9 = iVar4;
        }
      }
      lVar8 = lVar8 + 8;
      lVar11 = lVar11 + 4;
    } while (lVar11 != 0x18);
    if ((0xfffffff5 < iVar10 - 1U) && ((uint)(iVar10 - iVar9) < 10)) {
      lVar8 = 0;
      do {
        uVar1 = local_68[lVar8];
        uVar6 = (ulonglong)uVar1;
        if (uVar1 != 0) {
          iVar9 = *(int *)(&DAT_140e9ded0 + ((longlong)iVar10 - (longlong)local_88[lVar8]) * 4);
          uVar7 = iVar9 >> 1;
          if ((int)uVar1 < 0) {
            iVar4 = uVar1 - uVar7;
            if (uVar1 <= (uVar7 | 0x80000000)) {
              iVar4 = -0x80000000;
            }
          }
          else {
            iVar4 = uVar7 + uVar1;
            if ((uVar7 ^ 0x7fffffff) <= uVar1) {
              iVar4 = 0x7fffffff;
            }
          }
          uVar6 = (longlong)iVar4 % (longlong)iVar9 & 0xffffffff;
          local_68[lVar8] = iVar4 / iVar9;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != 6);
      *(uint *)(lVar2 + 0x2c) = local_68[0];
      *(uint *)(lVar2 + 0x30) = local_68[2];
      *(uint *)(lVar2 + 0x34) = local_68[1];
      *(uint *)(lVar2 + 0x38) = local_68[3];
      *(undefined8 *)(lVar2 + 0x44) = local_58;
      *(undefined4 *)(lVar2 + 0x40) = *(undefined4 *)(&DAT_140e9ded0 + (ulonglong)(uint)-iVar10 * 4)
      ;
      cVar3 = FUN_14012e78c(lVar2 + 0x2c,uVar6);
      uVar5 = 0;
      if (cVar3 != '\0') goto LAB_14015154c;
    }
    uVar5 = _UNK_140e94ee8;
    *(undefined8 *)(lVar2 + 0x2c) = _DAT_140e94ee0;
    *(undefined8 *)(lVar2 + 0x34) = uVar5;
    *(undefined4 *)(lVar2 + 0x48) = 0;
    *(undefined8 *)(lVar2 + 0x40) = 1;
    uVar5 = 0;
  }
LAB_14015154c:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)local_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)local_a8);
  }
  return uVar5;
}

