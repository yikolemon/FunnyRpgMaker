/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027fc83 */

char FUN_1027fc83(undefined1 param_1,FILE *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  
  uVar1 = __fileno(param_2);
  if ((param_2->_flag & 0xc0U) == 0) {
    iVar4 = FUN_1027eca6(uVar1,&param_1,1,param_3);
    cVar5 = '\x01' - (iVar4 != 1);
  }
  else {
    iVar4 = 0;
    iVar3 = (int)param_2->_ptr - param_2->_cnt;
    param_2->_ptr = (char *)(param_2->_cnt + 1);
    param_2->_base = (char *)(param_2->_bufsiz + -1);
    if (iVar3 < 1) {
      if ((uVar1 == 0xffffffff) || (uVar1 == 0xfffffffe)) {
        puVar2 = &DAT_1039b678;
      }
      else {
        puVar2 = (undefined *)((uVar1 & 0x3f) * 0x38 + (&DAT_103a5230)[(int)uVar1 >> 6]);
      }
      if ((puVar2[0x28] & 0x20) != 0) {
        lVar6 = FUN_1027934a(uVar1,0,0,2);
        if (lVar6 == -1) {
          LOCK();
          param_2->_flag = param_2->_flag | 0x10;
          UNLOCK();
          return '\x01';
        }
      }
    }
    else {
      iVar4 = FUN_1027eca6(uVar1,param_2->_cnt,iVar3,param_3);
    }
    cVar5 = iVar4 == iVar3;
    *(undefined1 *)param_2->_cnt = param_1;
  }
  return cVar5;
}

