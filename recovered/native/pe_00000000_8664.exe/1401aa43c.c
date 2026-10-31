/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401aa43c */

ulonglong FUN_1401aa43c(ushort param_1,FILE *param_2)

{
  ushort *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined *puVar6;
  ulonglong uVar7;
  
  uVar7 = 0xffff;
  if (param_1 != 0xffff) {
    if ((((ulonglong)param_2->_base & 0x100000000) != 0) ||
       (((*(uint *)((longlong)&param_2->_base + 4) >> 2 & 1) != 0 &&
        ((*(uint *)((longlong)&param_2->_base + 4) >> 1 & 1) == 0)))) {
      if (*(longlong *)&param_2->_cnt == 0) {
        __acrt_stdio_allocate_buffer_nolock(param_2);
      }
      if ((*(uint *)((longlong)&param_2->_base + 4) >> 0xc & 1) == 0) {
        iVar3 = _fileno(param_2);
        if ((iVar3 == -1) || (iVar3 = _fileno(param_2), iVar3 == -2)) {
          puVar6 = &DAT_140f29970;
        }
        else {
          iVar3 = _fileno(param_2);
          uVar4 = _fileno(param_2);
          puVar6 = (undefined *)
                   ((ulonglong)(uVar4 & 0x3f) * 0x48 + (&DAT_140f32db0)[(longlong)iVar3 >> 6]);
        }
        if ((char)puVar6[0x38] < '\0') {
          uVar7 = FUN_1401aa57c(param_1,param_2);
          return uVar7;
        }
      }
      pcVar5 = (char *)(*(longlong *)&param_2->_cnt + 2);
      if (param_2->_ptr < pcVar5) {
        if (*(int *)&param_2->_base != 0) {
          return 0xffff;
        }
        if ((uint)param_2->_charbuf < 2) {
          return 0xffff;
        }
        param_2->_ptr = pcVar5;
      }
      uVar4 = *(uint *)((longlong)&param_2->_base + 4);
      pcVar5 = param_2->_ptr;
      puVar1 = (ushort *)(pcVar5 + -2);
      param_2->_ptr = (char *)puVar1;
      if ((uVar4 >> 0xc & 1) == 0) {
        *puVar1 = param_1;
      }
      else if (*puVar1 != param_1) {
        param_2->_ptr = pcVar5;
        return 0xffff;
      }
      *(int *)&param_2->_base = *(int *)&param_2->_base + 2;
      LOCK();
      puVar2 = (uint *)((longlong)&param_2->_base + 4);
      *puVar2 = *puVar2 & 0xfffffff7;
      UNLOCK();
      LOCK();
      puVar2 = (uint *)((longlong)&param_2->_base + 4);
      *puVar2 = *puVar2 | 1;
      UNLOCK();
      uVar7 = (ulonglong)param_1;
    }
  }
  return uVar7;
}

