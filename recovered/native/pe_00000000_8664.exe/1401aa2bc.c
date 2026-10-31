/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401aa2bc */

uint FUN_1401aa2bc(uint param_1,FILE *param_2)

{
  char *pcVar1;
  uint *puVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  if ((*(uint *)((longlong)&param_2->_base + 4) >> 0xc & 1) == 0) {
    uVar4 = _fileno(param_2);
    puVar6 = &DAT_140f29970;
    if (uVar4 + 2 < 2) {
      puVar7 = &DAT_140f29970;
    }
    else {
      puVar7 = (undefined *)
               ((&DAT_140f32db0)[(longlong)(int)uVar4 >> 6] + (ulonglong)(uVar4 & 0x3f) * 0x48);
    }
    if (puVar7[0x39] == '\0') {
      if (1 < uVar4 + 2) {
        puVar6 = (undefined *)
                 ((&DAT_140f32db0)[(longlong)(int)uVar4 >> 6] + (ulonglong)(uVar4 & 0x3f) * 0x48);
      }
      if ((puVar6[0x3d] & 1) == 0) goto LAB_1401aa368;
    }
    puVar5 = (undefined4 *)FUN_14019e8cc();
    *puVar5 = 0x16;
    FUN_1401ae640();
  }
  else {
LAB_1401aa368:
    if ((param_1 != 0xffffffff) &&
       ((((ulonglong)param_2->_base & 0x100000000) != 0 ||
        (((byte)*(undefined4 *)((longlong)&param_2->_base + 4) & 6) == 6)))) {
      if (*(longlong *)&param_2->_cnt == 0) {
        __acrt_stdio_allocate_buffer_nolock(param_2);
      }
      if (param_2->_ptr == *(char **)&param_2->_cnt) {
        if (*(int *)&param_2->_base != 0) {
          return 0xffffffff;
        }
        param_2->_ptr = param_2->_ptr + 1;
      }
      uVar4 = *(uint *)((longlong)&param_2->_base + 4);
      pcVar3 = param_2->_ptr;
      pcVar1 = pcVar3 + -1;
      param_2->_ptr = pcVar1;
      if ((uVar4 >> 0xc & 1) == 0) {
        *pcVar1 = (char)param_1;
      }
      else if (*pcVar1 != (char)param_1) {
        param_2->_ptr = pcVar3;
        return 0xffffffff;
      }
      *(int *)&param_2->_base = *(int *)&param_2->_base + 1;
      LOCK();
      puVar2 = (uint *)((longlong)&param_2->_base + 4);
      *puVar2 = *puVar2 & 0xfffffff7;
      UNLOCK();
      LOCK();
      puVar2 = (uint *)((longlong)&param_2->_base + 4);
      *puVar2 = *puVar2 | 1;
      UNLOCK();
      return param_1 & 0xff;
    }
  }
  return 0xffffffff;
}

