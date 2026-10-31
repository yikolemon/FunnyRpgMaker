/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026ed34 */

int FUN_1026ed34(FILE *param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_1 == (FILE *)0x0) {
    *(undefined1 *)(param_2 + 0x1c) = 1;
    *(undefined4 *)(param_2 + 0x18) = 0x16;
    FUN_10274034(0,0,0,0,0,param_2);
    return -1;
  }
  uVar3 = __fileno(param_1);
  if ((int)param_1->_base < 0) {
    param_1->_base = (char *)0x0;
  }
  lVar6 = FUN_102793e8(uVar3,0,0,1,param_2);
  if ((lVar6 < 0x100000000) && (lVar6 < 0)) {
LAB_1026ee7b:
    iVar4 = -1;
  }
  else {
    if ((param_1->_flag & 0xc0U) == 0) {
      return (int)lVar6 - (int)param_1->_base;
    }
    iVar4 = (int)uVar3 >> 6;
    iVar5 = (uVar3 & 0x3f) * 0x38;
    cVar1 = *(char *)(iVar5 + 0x29 + (&DAT_103a5230)[iVar4]);
    lVar2 = (longlong)((int)param_1->_ptr - param_1->_cnt);
    if ((param_1->_flag & 3U) == 0) {
      if (((uint)param_1->_flag >> 2 & 1) == 0) {
        *(undefined1 *)(param_2 + 0x1c) = 1;
        *(undefined4 *)(param_2 + 0x18) = 0x16;
        goto LAB_1026ee7b;
      }
    }
    else {
      if ((cVar1 == '\x01') && ((*(byte *)(iVar5 + 0x2d + (&DAT_103a5230)[iVar4]) & 2) != 0)) {
        iVar4 = FUN_1026e9a3(param_1,lVar6,param_2);
        return iVar4;
      }
      if (*(char *)(iVar5 + 0x28 + (&DAT_103a5230)[iVar4]) < '\0') {
        lVar7 = FUN_1026e93a(param_1->_cnt,param_1->_ptr,cVar1);
        lVar2 = lVar7 + lVar2;
      }
    }
    iVar4 = (int)lVar2;
    if (lVar6 != 0) {
      if ((param_1->_flag & 1U) == 0) {
        if (cVar1 == '\x01') {
          iVar4 = __alldiv(lVar2,2,0);
        }
        iVar4 = iVar4 + (int)lVar6;
      }
      else {
        iVar4 = FUN_1026eb69(param_1,lVar6,lVar2,param_2);
      }
    }
  }
  return iVar4;
}

