/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180177d27 */

undefined8 FUN_180177d27(longlong *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char *pcVar8;
  undefined1 *puVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 uVar12;
  bool bVar13;
  undefined1 auStack_48 [44];
  ushort local_1c;
  ushort local_1a;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  uVar2 = *(uint *)(param_1 + 2);
  uVar11 = uVar2 & 7;
  if (uVar11 != 0) {
    if ((int)uVar2 < 0) {
      FUN_180178653(param_1);
      uVar2 = *(uint *)(param_1 + 2);
    }
    *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) >> (sbyte)uVar11;
    uVar2 = uVar2 - uVar11;
    *(uint *)(param_1 + 2) = uVar2;
  }
  if ((int)uVar2 < 1) {
    if (-1 < (int)uVar2) {
      uVar7 = 0;
LAB_180177d92:
      puVar9 = (undefined1 *)*param_1;
      puVar1 = (undefined1 *)param_1[1];
      uVar7 = uVar7 & 0xffffffff;
      do {
        if (puVar9 < puVar1) {
          *param_1 = (longlong)(puVar9 + 1);
          uVar12 = *puVar9;
          puVar9 = puVar9 + 1;
        }
        else {
          uVar12 = 0;
        }
        *(undefined1 *)((longlong)&local_1c + uVar7) = uVar12;
        uVar7 = uVar7 + 1;
      } while (uVar7 != 4);
      goto LAB_180177dc0;
    }
LAB_180177dee:
    pcVar8 = "zlib corrupt";
LAB_180177df5:
    FUN_1801765d0(pcVar8);
  }
  else {
    uVar11 = *(uint *)(param_1 + 3);
    uVar7 = 0;
    do {
      uVar6 = uVar7;
      *(char *)((longlong)&local_1c + uVar6) = (char)uVar11;
      uVar7 = uVar6 + 1;
      uVar11 = uVar11 >> 8;
      bVar13 = 7 < uVar2;
      uVar2 = uVar2 - 8;
    } while (bVar13 && uVar2 != 0);
    *(uint *)(param_1 + 3) = uVar11;
    *(uint *)(param_1 + 2) = uVar2;
    if (uVar2 != 0) goto LAB_180177dee;
    if (uVar6 < 3) goto LAB_180177d92;
LAB_180177dc0:
    if ((local_1a ^ local_1c) != 0xffff) goto LAB_180177dee;
    lVar10 = *param_1;
    uVar7 = (ulonglong)local_1c;
    if ((ulonglong)param_1[1] < lVar10 + uVar7) {
      pcVar8 = "read past buffer";
      goto LAB_180177df5;
    }
    lVar4 = param_1[4];
    if (lVar4 + uVar7 <= (ulonglong)param_1[6]) {
LAB_180177e3b:
      FUN_1802a82f0(lVar4,lVar10,uVar7);
      *param_1 = *param_1 + uVar7;
      param_1[4] = param_1[4] + uVar7;
      uVar5 = 1;
      goto LAB_180177dfc;
    }
    iVar3 = FUN_18017869b(param_1,lVar4);
    if (iVar3 != 0) {
      lVar10 = *param_1;
      lVar4 = param_1[4];
      goto LAB_180177e3b;
    }
  }
  uVar5 = 0;
LAB_180177dfc:
  if (DAT_180402640 != (local_18 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
  }
  return uVar5;
}

