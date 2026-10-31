/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10269667 */

int FUN_10269667(uint *param_1,undefined1 *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = *param_1;
  uVar1 = param_1[1];
  iVar3 = __alldiv(uVar10,uVar1,0x1e13380,0);
  iVar7 = iVar3 + 0x46;
  iVar4 = __crt_time_elapsed_leap_years<>(iVar7);
  uVar5 = (uint)((longlong)iVar4 * 0x15180);
  uVar6 = (uint)((longlong)iVar3 * 0x1e13380);
  uVar8 = uVar10 - uVar6;
  uVar9 = uVar8 - uVar5;
  uVar10 = (((uVar1 - (int)((ulonglong)((longlong)iVar3 * 0x1e13380) >> 0x20)) -
            (uint)(uVar10 < uVar6)) - (int)((ulonglong)((longlong)iVar4 * 0x15180) >> 0x20)) -
           (uint)(uVar8 < uVar5);
  *param_1 = uVar9;
  param_1[1] = uVar10;
  if (((int)uVar10 < 1) && ((int)uVar10 < 0)) {
    *param_1 = uVar9 + 0x1e13380;
    uVar10 = uVar10 + (0xfe1ecc7f < uVar9);
    iVar7 = iVar3 + 0x45;
    param_1[1] = uVar10;
    cVar2 = FUN_1025c500(iVar7);
    if (cVar2 != '\0') {
      *param_1 = uVar9 + 0x1e28500;
      param_1[1] = uVar10 + (0xfffeae7f < uVar9 + 0x1e13380);
      *param_2 = 1;
    }
  }
  else {
    cVar2 = FUN_1025c500(iVar7);
    if (cVar2 != '\0') {
      *param_2 = 1;
    }
  }
  return iVar7;
}

