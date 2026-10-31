/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049145b */

uint __cdecl FUN_0049145b(LPWSTR param_1,char *param_2,uint param_3,uint param_4,FILE *param_5)

{
  __acrt_ptd *p_Var1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *_DstSize;
  char *pcVar6;
  LPWSTR pWVar7;
  char *local_1c;
  char *local_14;
  LPWSTR local_c;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  if (param_1 == (LPWSTR)0x0) {
LAB_0049147b:
    p_Var1 = FUN_0048f66d();
    *(undefined4 *)p_Var1 = 0x16;
  }
  else {
    if ((param_5 == (FILE *)0x0) || ((uint)(0xffffffff / (ulonglong)param_3) < param_4)) {
      if (param_2 != (char *)0xffffffff) {
        _memset(param_1,0,(size_t)param_2);
      }
      if ((param_5 == (FILE *)0x0) || ((uint)(0xffffffff / (ulonglong)param_3) < param_4))
      goto LAB_0049147b;
    }
    if ((param_5->_flag & 0x4c0U) == 0) {
      local_14 = (char *)0x1000;
    }
    else {
      local_14 = (char *)param_5->_bufsiz;
    }
    pcVar6 = (char *)(param_3 * param_4);
    local_c = param_1;
    if (pcVar6 == (char *)0x0) {
      return param_4;
    }
    local_1c = (char *)0x7fffffff;
    pcVar4 = pcVar6;
    _DstSize = param_2;
    while ((param_5->_flag & 0x4c0U) == 0) {
LAB_00491558:
      if (local_14 <= pcVar4) {
        pcVar5 = pcVar4;
        if ((char *)0x7fffffff < pcVar4) {
          pcVar5 = local_1c;
        }
        if (local_14 != (char *)0x0) {
          pcVar5 = pcVar5 + -((uint)pcVar5 % (uint)local_14);
        }
        if (pcVar5 <= _DstSize) {
          param_5->_base = (char *)0x0;
          param_5->_ptr = (char *)param_5->_cnt;
          pWVar7 = local_c;
          uVar2 = __fileno(param_5);
          pcVar5 = (char *)FUN_004a0362(uVar2,pWVar7,(uint)pcVar5);
          if (pcVar5 == (char *)0x0) {
            LOCK();
            param_5->_flag = param_5->_flag | 8;
            UNLOCK();
            goto LAB_00491620;
          }
          if (-1 < (int)pcVar5) goto LAB_0049154e;
LAB_0049160c:
          LOCK();
          param_5->_flag = param_5->_flag | 0x10;
          UNLOCK();
LAB_00491620:
          return (uint)((int)pcVar6 - (int)pcVar4) / param_3;
        }
        goto LAB_004915e9;
      }
      iVar3 = FUN_0049f976(param_5);
      if (iVar3 == -1) goto LAB_00491620;
      if (_DstSize == (char *)0x0) goto LAB_004915e9;
      *(char *)local_c = (char)iVar3;
      local_c = (LPWSTR)((int)local_c + 1);
      pcVar4 = pcVar4 + -1;
      local_14 = (char *)param_5->_bufsiz;
      _DstSize = _DstSize + -1;
LAB_004915d3:
      if (pcVar4 == (char *)0x0) {
        return param_4;
      }
    }
    pcVar5 = param_5->_base;
    if (pcVar5 == (char *)0x0) goto LAB_00491558;
    if ((int)pcVar5 < 0) goto LAB_0049160c;
    if (pcVar4 < pcVar5) {
      pcVar5 = pcVar4;
    }
    if (pcVar5 <= _DstSize) {
      _memcpy_s(local_c,(rsize_t)_DstSize,param_5->_ptr,(rsize_t)pcVar5);
      param_5->_base = param_5->_base + -(int)pcVar5;
      param_5->_ptr = pcVar5 + (int)param_5->_ptr;
LAB_0049154e:
      pcVar4 = pcVar4 + -(int)pcVar5;
      local_c = (LPWSTR)((int)local_c + (int)pcVar5);
      _DstSize = _DstSize + -(int)pcVar5;
      goto LAB_004915d3;
    }
LAB_004915e9:
    if (param_2 != (char *)0xffffffff) {
      _memset(param_1,0,(size_t)param_2);
    }
    p_Var1 = FUN_0048f66d();
    *(undefined4 *)p_Var1 = 0x22;
  }
  FUN_00495c88();
  return 0;
}

