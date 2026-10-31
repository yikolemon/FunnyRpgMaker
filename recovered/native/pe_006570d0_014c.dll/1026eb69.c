/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026eb69 */

longlong FUN_1026eb69(FILE *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 local_c;
  int local_8;
  
  lVar3 = CONCAT44(param_3,param_2);
  uVar4 = __fileno(param_1);
  iVar5 = (uVar4 & 0x3f) * 0x38;
  uVar9 = 1;
  cVar1 = *(char *)((&DAT_103a5230)[(int)uVar4 >> 6] + 0x29 + iVar5);
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
  uVar7 = (int)param_1->_ptr - param_1->_cnt;
  pcVar8 = pcVar2 + uVar7;
  iVar6 = ((int)uVar7 >> 0x1f) + ((int)pcVar2 >> 0x1f) + (uint)CARRY4(uVar7,(uint)pcVar2);
  if (-1 < *(char *)((&DAT_103a5230)[(int)uVar4 >> 6] + 0x28 + iVar5)) {
    lVar10 = __alldiv(pcVar8,iVar6,local_c,0);
    goto LAB_1026ed15;
  }
  lVar10 = FUN_102793e8(uVar4,0,0,2,param_6);
  if (lVar10 == lVar3) {
    lVar10 = FUN_1026e93a(param_1->_cnt,pcVar8 + param_1->_cnt,cVar1);
    lVar10 = lVar10 + CONCAT44(iVar6,pcVar8);
    if (((uint)param_1->_flag >> 5 & 1) != 0) {
      if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
        uVar9 = 2;
      }
LAB_1026ec6d:
      lVar10 = lVar10 + (ulonglong)uVar9;
    }
  }
  else {
    lVar10 = FUN_102793e8(uVar4,param_2,param_3,0,param_6);
    if (lVar10 == -1) {
      return -1;
    }
    if ((iVar6 < 1) &&
       ((((local_8 = 0x200, iVar6 < 0 || (pcVar8 < (char *)0x201)) &&
         (((uint)param_1->_flag >> 6 & 1) != 0)) && ((param_1->_flag & 0x100U) == 0)))) {
      iVar6 = 0;
    }
    else {
      local_8 = param_1->_bufsiz;
      iVar6 = local_8 >> 0x1f;
    }
    lVar10 = CONCAT44(iVar6,local_8);
    if ((*(byte *)(iVar5 + 0x28 + (&DAT_103a5230)[(int)uVar4 >> 6]) & 4) != 0) {
      if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
        uVar9 = 2;
      }
      goto LAB_1026ec6d;
    }
  }
  lVar10 = __alldiv(lVar10,local_c,0);
LAB_1026ed15:
  lVar11 = __alldiv(param_4,param_5,local_c,0);
  return (lVar11 - lVar10) + lVar3;
}

