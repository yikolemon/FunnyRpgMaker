/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a0175 */

bool __cdecl FUN_004a0175(WCHAR param_1,FILE *param_2,int *param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  
  uVar1 = __fileno(param_2);
  if ((param_2->_flag & 0xc0U) == 0) {
    iVar3 = FUN_0049f0bf(uVar1,&param_1,2,param_3);
    bVar6 = iVar3 == 2;
  }
  else {
    uVar5 = 0;
    uVar4 = (int)param_2->_ptr - param_2->_cnt;
    param_2->_ptr = (char *)(param_2->_cnt + 2);
    param_2->_base = (char *)(param_2->_bufsiz + -2);
    if ((int)uVar4 < 1) {
      if ((uVar1 == 0xffffffff) || (uVar1 == 0xfffffffe)) {
        puVar2 = &DAT_0051b0e0;
      }
      else {
        puVar2 = (undefined *)((uVar1 & 0x3f) * 0x38 + (&DAT_00521cc8)[(int)uVar1 >> 6]);
      }
      if (((puVar2[0x28] & 0x20) != 0) &&
         (lVar7 = FUN_0049cd54(uVar1,0,0,(PLARGE_INTEGER)0x2), lVar7 == -1)) {
        LOCK();
        param_2->_flag = param_2->_flag | 0x10;
        UNLOCK();
        return true;
      }
    }
    else {
      uVar5 = FUN_0049f0bf(uVar1,(WCHAR *)param_2->_cnt,uVar4,param_3);
    }
    bVar6 = uVar5 == uVar4;
    *(WCHAR *)param_2->_cnt = param_1;
  }
  return bVar6;
}

