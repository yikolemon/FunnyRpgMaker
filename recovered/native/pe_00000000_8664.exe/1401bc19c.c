/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401bc19c */

ulonglong FUN_1401bc19c(byte param_1,FILE *param_2,longlong param_3)

{
  uint *puVar1;
  char cVar2;
  
  _fileno(param_2);
  if (((ulonglong)param_2->_base & 0x600000000) == 0) {
    *(undefined4 *)(param_3 + 0x2c) = 9;
  }
  else {
    if ((*(uint *)((longlong)&param_2->_base + 4) >> 0xc & 1) == 0) {
      if (((ulonglong)param_2->_base & 0x100000000) != 0) {
        cVar2 = FUN_1401bc334(param_2);
        *(undefined4 *)&param_2->_base = 0;
        if (cVar2 == '\0') goto LAB_1401bc1ce;
        param_2->_ptr = *(char **)&param_2->_cnt;
        LOCK();
        puVar1 = (uint *)((longlong)&param_2->_base + 4);
        *puVar1 = *puVar1 & 0xfffffffe;
        UNLOCK();
      }
      LOCK();
      puVar1 = (uint *)((longlong)&param_2->_base + 4);
      *puVar1 = *puVar1 | 2;
      UNLOCK();
      LOCK();
      puVar1 = (uint *)((longlong)&param_2->_base + 4);
      *puVar1 = *puVar1 & 0xfffffff7;
      UNLOCK();
      *(undefined4 *)&param_2->_base = 0;
      if ((((ulonglong)param_2->_base & 0x4c000000000) == 0) &&
         (cVar2 = FUN_1401b2968(param_2), cVar2 == '\0')) {
        __acrt_stdio_allocate_buffer_nolock(param_2);
      }
      cVar2 = FUN_1401bc3bc(param_1,param_2,param_3);
      if (cVar2 != '\0') {
        return (ulonglong)param_1;
      }
      goto LAB_1401bc1ce;
    }
    *(undefined4 *)(param_3 + 0x2c) = 0x22;
  }
  *(undefined1 *)(param_3 + 0x30) = 1;
LAB_1401bc1ce:
  LOCK();
  puVar1 = (uint *)((longlong)&param_2->_base + 4);
  *puVar1 = *puVar1 | 0x10;
  UNLOCK();
  return 0xffffffff;
}

