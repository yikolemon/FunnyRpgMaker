/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026e34b */

uint FUN_1026e34b(undefined1 *param_1,char *param_2,uint param_3,uint param_4,FILE *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *_DstSize;
  char *pcVar5;
  undefined1 *puVar6;
  char *local_1c;
  char *local_14;
  undefined1 *local_c;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  if (param_1 == (undefined1 *)0x0) {
LAB_1026e36b:
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
  }
  else {
    if ((param_5 == (FILE *)0x0) || ((uint)(0xffffffff / (ulonglong)param_3) < param_4)) {
      if (param_2 != (char *)0xffffffff) {
        _memset(param_1,0,(size_t)param_2);
      }
      if ((param_5 == (FILE *)0x0) || ((uint)(0xffffffff / (ulonglong)param_3) < param_4))
      goto LAB_1026e36b;
    }
    if ((param_5->_flag & 0x4c0U) == 0) {
      local_14 = (char *)0x1000;
    }
    else {
      local_14 = (char *)param_5->_bufsiz;
    }
    pcVar5 = (char *)(param_3 * param_4);
    local_c = param_1;
    if (pcVar5 == (char *)0x0) {
      return param_4;
    }
    local_1c = (char *)0x7fffffff;
    pcVar3 = pcVar5;
    _DstSize = param_2;
    while ((param_5->_flag & 0x4c0U) == 0) {
LAB_1026e448:
      if (local_14 <= pcVar3) {
        pcVar4 = pcVar3;
        if ((char *)0x7fffffff < pcVar3) {
          pcVar4 = local_1c;
        }
        if (local_14 != (char *)0x0) {
          pcVar4 = pcVar4 + -((uint)pcVar4 % (uint)local_14);
        }
        if (pcVar4 <= _DstSize) {
          param_5->_base = (char *)0x0;
          param_5->_ptr = (char *)param_5->_cnt;
          puVar6 = local_c;
          iVar2 = __fileno(param_5);
          pcVar4 = (char *)FUN_1027ff42(iVar2,puVar6,pcVar4);
          if (pcVar4 == (char *)0x0) {
            LOCK();
            param_5->_flag = param_5->_flag | 8;
            UNLOCK();
            goto LAB_1026e510;
          }
          if (-1 < (int)pcVar4) goto LAB_1026e43e;
LAB_1026e4fc:
          LOCK();
          param_5->_flag = param_5->_flag | 0x10;
          UNLOCK();
LAB_1026e510:
          return (uint)((int)pcVar5 - (int)pcVar3) / param_3;
        }
        goto LAB_1026e4d9;
      }
      iVar2 = FUN_1027f55d(param_5);
      if (iVar2 == -1) goto LAB_1026e510;
      if (_DstSize == (char *)0x0) goto LAB_1026e4d9;
      *local_c = (char)iVar2;
      local_c = local_c + 1;
      pcVar3 = pcVar3 + -1;
      local_14 = (char *)param_5->_bufsiz;
      _DstSize = _DstSize + -1;
LAB_1026e4c3:
      if (pcVar3 == (char *)0x0) {
        return param_4;
      }
    }
    pcVar4 = param_5->_base;
    if (pcVar4 == (char *)0x0) goto LAB_1026e448;
    if ((int)pcVar4 < 0) goto LAB_1026e4fc;
    if (pcVar3 < pcVar4) {
      pcVar4 = pcVar3;
    }
    if (pcVar4 <= _DstSize) {
      _memcpy_s(local_c,(rsize_t)_DstSize,param_5->_ptr,(rsize_t)pcVar4);
      param_5->_base = param_5->_base + -(int)pcVar4;
      param_5->_ptr = pcVar4 + (int)param_5->_ptr;
LAB_1026e43e:
      pcVar3 = pcVar3 + -(int)pcVar4;
      local_c = local_c + (int)pcVar4;
      _DstSize = _DstSize + -(int)pcVar4;
      goto LAB_1026e4c3;
    }
LAB_1026e4d9:
    if (param_2 != (char *)0xffffffff) {
      _memset(param_1,0,(size_t)param_2);
    }
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x22;
  }
  FUN_10273ea8();
  return 0;
}

