/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f4ef6 */

ulonglong FUN_1801f4ef6(longlong *param_1,longlong param_2,longlong param_3,uint param_4,
                       char param_5)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  bool bVar13;
  
  lVar2 = *(longlong *)(param_3 + 8);
  FUN_1802a89a0(param_1,0,0x130);
  if (param_5 == '\0' && (char)((param_4 & 2) >> 1) == '\0') {
    uVar10 = param_4 >> 0x10 & 0xf;
    bVar13 = uVar10 != 2;
    uVar5 = *(uint *)(param_2 + 0x118);
    if (0 < (int)uVar5) {
      return (ulonglong)uVar5;
    }
    lVar9 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x90);
    if (((int)uVar5 < 0) && (uVar6 = FUN_1801f5ef5(param_2,param_4 >> 7 & 1), (int)uVar6 != 0)) {
      return uVar6;
    }
    lVar3 = *(longlong *)(param_2 + 0x110);
    *(undefined4 *)(lVar3 + 0x324) = 0;
    bVar4 = false;
    if (*(int *)(lVar9 + 0x70) == 0x28) {
      bVar13 = false;
      bVar4 = false;
      if (uVar10 != *(uint *)(lVar3 + 0x328)) {
        *(uint *)(lVar3 + 0x328) = uVar10;
        bVar4 = true;
        bVar13 = false;
      }
    }
    if (bVar13 != (bool)*(char *)(lVar3 + 800)) {
      *(bool *)(lVar3 + 800) = bVar13;
      bVar4 = true;
    }
    uVar5 = *(uint *)(param_2 + 0x11c);
    if (0 < (int)uVar5) {
      return (ulonglong)uVar5;
    }
    if ((uVar5 != 0 || bVar4) && (uVar6 = FUN_1801f60c3(param_2), (int)uVar6 != 0)) {
      return uVar6;
    }
    FUN_1801f621b(lVar3,lVar2,param_2);
    bVar1 = *(byte *)(param_2 + 0xcd);
    bVar7 = bVar1;
    if ((bVar1 & 2) != 0) {
      puVar11 = &DAT_180337358;
      puVar12 = (undefined4 *)(param_2 + 0x88);
      for (lVar8 = 0x13; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      bVar7 = 0;
    }
    if (((uVar10 != 2) && (*(int *)(lVar9 + 0x70) == 0x28)) &&
       ((*(byte *)(*(longlong *)(param_3 + 8) + 9) & 0x20) == 0)) {
      *(uint *)(lVar3 + 0x324) = (uint)(~bVar7 & 4);
    }
    uVar5 = (uint)bVar1 + (uint)bVar1 & 2;
    param_1[0x1b] = lVar3;
    lVar9 = 0;
    if (((param_4 >> 0x15 & 1) == 0) && ((char)uVar5 == '\0')) {
      if ((*(int *)(lVar3 + 0x324) == 0) && (*(int *)(lVar2 + 0x27c) == 0)) {
        lVar9 = *(longlong *)(param_2 + 0x78);
      }
      else {
        lVar9 = 0;
      }
    }
    param_4 = param_4 | uVar5;
    param_1[0x25] = lVar9;
  }
  else if (param_5 != '\0') goto LAB_1801f4f58;
  lVar9 = **(longlong **)(param_3 + 0xf0);
  FUN_1801c9ac8(lVar9);
  param_1[3] = lVar9;
LAB_1801f4f58:
  *(uint *)(param_1 + 4) = param_4;
  *param_1 = lVar2;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[5] = *(longlong *)(lVar2 + 0xa0);
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  return 0;
}

