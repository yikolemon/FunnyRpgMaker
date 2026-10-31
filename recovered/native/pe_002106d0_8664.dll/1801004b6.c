/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801004b6 */

void FUN_1801004b6(undefined8 *param_1,undefined4 param_2,float param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  
  lVar6 = FUN_1801006f9();
  param_1[5] = lVar6;
  lVar3 = *(longlong *)(lVar6 + 0x1608);
  if ((*(byte *)(lVar6 + 0x2acc) & 0x20) != 0) {
    FUN_1800fdfea("Clipper: Begin(%d,%.2f) in \'%s\'\n",param_2,(double)param_3,
                  *(undefined8 *)(lVar3 + 8));
  }
  if ((*(longlong *)(lVar6 + 0x24f8) != 0) &&
     (*(char *)(*(longlong *)(lVar6 + 0x24f8) + 0x23a) == '\x01')) {
    FUN_180168d68();
  }
  param_1[3] = (double)*(float *)(lVar3 + 0x15c);
  *(float *)(param_1 + 2) = param_3;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_2;
  *param_1 = 0xffffffff;
  iVar2 = *(int *)(lVar6 + 0x24e0);
  uVar12 = (longlong)iVar2 + 1;
  iVar11 = (int)uVar12;
  *(int *)(lVar6 + 0x24e0) = iVar11;
  iVar5 = *(int *)(lVar6 + 0x24e8);
  if (iVar5 <= iVar2) {
    iVar10 = *(int *)(lVar6 + 0x24ec);
    if (iVar10 <= iVar2) {
      if (iVar10 == 0) {
        iVar10 = 8;
      }
      else {
        iVar10 = iVar10 / 2 + iVar10;
      }
      if (iVar10 <= iVar11) {
        iVar10 = iVar11;
      }
      uVar7 = FUN_1800fe7f8((longlong)iVar10 * 0x28);
      if (*(longlong *)(lVar6 + 0x24f0) != 0) {
        FUN_1802a82f0(uVar7,*(longlong *)(lVar6 + 0x24f0),(longlong)*(int *)(lVar6 + 0x24e8) * 0x28)
        ;
        FUN_1800fe8d4(*(undefined8 *)(lVar6 + 0x24f0));
      }
      *(undefined8 *)(lVar6 + 0x24f0) = uVar7;
      *(int *)(lVar6 + 0x24ec) = iVar10;
      iVar5 = *(int *)(lVar6 + 0x24e8);
    }
    if (iVar5 <= iVar2) {
      lVar8 = uVar12 - (longlong)iVar5;
      lVar9 = (longlong)iVar5 * 0x28;
      do {
        lVar4 = *(longlong *)(lVar6 + 0x24f0);
        puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar9);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(lVar4 + lVar9) = 0;
        ((undefined8 *)(lVar4 + lVar9))[1] = 0;
        *(undefined8 *)(lVar4 + 0x20 + lVar9) = 0;
        lVar9 = lVar9 + 0x28;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    *(int *)(lVar6 + 0x24e8) = iVar11;
    uVar12 = (ulonglong)*(uint *)(lVar6 + 0x24e0);
  }
  lVar6 = *(longlong *)(lVar6 + 0x24f0) + (longlong)(int)uVar12 * 0x28;
  FUN_18010075e(lVar6 + -0x28,param_1);
  *(undefined4 *)(lVar6 + -0x20) = *(undefined4 *)(lVar3 + 0x1ac);
  param_1[6] = lVar6 + -0x28;
  param_1[4] = (double)*(float *)(lVar6 + -0x20);
  return;
}

