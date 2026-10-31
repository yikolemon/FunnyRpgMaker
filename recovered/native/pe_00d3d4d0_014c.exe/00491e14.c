/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00491e14 */

uint __cdecl FUN_00491e14(FILE *param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  
  if (param_1 == (FILE *)0x0) {
    *(undefined1 *)(param_2 + 7) = 1;
    param_2[6] = 0x16;
    FUN_00495e14((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
    return 0xffffffff;
  }
  uVar2 = __fileno(param_1);
  if ((int)param_1->_base < 0) {
    param_1->_base = (char *)0x0;
  }
  lVar8 = FUN_0049cdf2(uVar2,0,0,(PLARGE_INTEGER)0x1,param_2);
  uVar7 = (undefined4)((ulonglong)lVar8 >> 0x20);
  iVar3 = (int)lVar8;
  if ((lVar8 < 0x100000000) && (lVar8 < 0)) {
    return 0xffffffff;
  }
  if ((param_1->_flag & 0xc0U) == 0) {
    return iVar3 - (int)param_1->_base;
  }
  iVar4 = (int)uVar2 >> 6;
  iVar6 = (uVar2 & 0x3f) * 0x38;
  cVar1 = *(char *)(iVar6 + 0x29 + (&DAT_00521cc8)[iVar4]);
  iVar5 = (int)param_1->_ptr - param_1->_cnt;
  if ((param_1->_flag & 3U) == 0) {
    if (((uint)param_1->_flag >> 2 & 1) == 0) {
      *(undefined1 *)(param_2 + 7) = 1;
      param_2[6] = 0x16;
      return 0xffffffff;
    }
  }
  else {
    if ((cVar1 == '\x01') && ((*(byte *)(iVar6 + 0x2d + (&DAT_00521cc8)[iVar4]) & 2) != 0)) {
      uVar2 = FUN_00491a83(param_1,iVar3,uVar7,param_2);
      return uVar2;
    }
    if (*(char *)(iVar6 + 0x28 + (&DAT_00521cc8)[iVar4]) < '\0') {
      lVar9 = FUN_00491a1a((short *)param_1->_cnt,(short *)param_1->_ptr,cVar1);
      lVar9 = lVar9 + iVar5;
      goto LAB_00491f68;
    }
  }
  lVar9 = (longlong)iVar5;
LAB_00491f68:
  uVar2 = (uint)lVar9;
  if (lVar8 == 0) {
    return uVar2;
  }
  uVar11 = (uint)((ulonglong)lVar9 >> 0x20);
  if ((param_1->_flag & 1U) != 0) {
    lVar8 = FUN_00491c49(param_1,iVar3,uVar7,uVar2,uVar11,param_2);
    return (uint)lVar8;
  }
  if (cVar1 == '\x01') {
    uVar10 = __alldiv(uVar2,uVar11,2,0);
    uVar2 = (uint)uVar10;
  }
  return uVar2 + iVar3;
}

