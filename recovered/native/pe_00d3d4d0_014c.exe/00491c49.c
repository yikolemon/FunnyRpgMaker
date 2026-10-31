/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00491c49 */

longlong __cdecl
FUN_00491c49(FILE *param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5,
            int *param_6)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint local_c;
  int local_8;
  
  lVar3 = CONCAT44(param_3,param_2);
  uVar4 = __fileno(param_1);
  iVar5 = (uVar4 & 0x3f) * 0x38;
  uVar9 = 1;
  cVar1 = *(char *)((&DAT_00521cc8)[(int)uVar4 >> 6] + 0x29 + iVar5);
  if (cVar1 == '\x01') {
    local_c = 2;
  }
  else {
    local_c = 1;
  }
  pcVar2 = param_1->_base;
  if (pcVar2 == (char *)0x0) {
    return lVar3;
  }
  uVar6 = (int)param_1->_ptr - param_1->_cnt;
  pcVar7 = pcVar2 + uVar6;
  uVar6 = ((int)uVar6 >> 0x1f) + ((int)pcVar2 >> 0x1f) + (uint)CARRY4(uVar6,(uint)pcVar2);
  if (-1 < *(char *)((&DAT_00521cc8)[(int)uVar4 >> 6] + 0x28 + iVar5)) {
    lVar10 = __alldiv((uint)pcVar7,uVar6,local_c,0);
    goto LAB_00491df5;
  }
  lVar10 = FUN_0049cdf2(uVar4,0,0,(PLARGE_INTEGER)0x2,param_6);
  if (lVar10 == lVar3) {
    lVar10 = FUN_00491a1a((short *)param_1->_cnt,(short *)(pcVar7 + param_1->_cnt),cVar1);
    lVar10 = lVar10 + CONCAT44(uVar6,pcVar7);
    if (((uint)param_1->_flag >> 5 & 1) != 0) {
      if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
        uVar9 = 2;
      }
LAB_00491d4d:
      lVar10 = lVar10 + (ulonglong)uVar9;
    }
  }
  else {
    lVar10 = FUN_0049cdf2(uVar4,param_2,param_3,(PLARGE_INTEGER)0x0,param_6);
    if (lVar10 == -1) {
      return -1;
    }
    if (((int)uVar6 < 1) &&
       ((((local_8 = 0x200, (int)uVar6 < 0 || (pcVar7 < (char *)0x201)) &&
         (((uint)param_1->_flag >> 6 & 1) != 0)) && ((param_1->_flag & 0x100U) == 0)))) {
      iVar8 = 0;
    }
    else {
      local_8 = param_1->_bufsiz;
      iVar8 = local_8 >> 0x1f;
    }
    lVar10 = CONCAT44(iVar8,local_8);
    if ((*(byte *)(iVar5 + 0x28 + (&DAT_00521cc8)[(int)uVar4 >> 6]) & 4) != 0) {
      if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
        uVar9 = 2;
      }
      goto LAB_00491d4d;
    }
  }
  lVar10 = __alldiv((uint)lVar10,(uint)((ulonglong)lVar10 >> 0x20),local_c,0);
LAB_00491df5:
  lVar11 = __alldiv(param_4,param_5,local_c,0);
  return (lVar11 - lVar10) + lVar3;
}

