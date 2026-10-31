/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400abf9c */

ulonglong FUN_1400abf9c(byte param_1,longlong *param_2,longlong *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  
  FUN_1400a5bb4((longlong)param_2);
  if ((*(uint *)((longlong)param_2 + 0x14) & 6) == 0) {
    *(undefined4 *)((longlong)param_3 + 0x2c) = 9;
  }
  else {
    if ((*(uint *)((longlong)param_2 + 0x14) >> 0xc & 1) == 0) {
      if ((*(uint *)((longlong)param_2 + 0x14) & 1) != 0) {
        bVar1 = FUN_1400ac134(param_2);
        *(undefined4 *)(param_2 + 2) = 0;
        if (!bVar1) goto LAB_1400abfce;
        *param_2 = param_2[1];
        LOCK();
        *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) & 0xfffffffe;
        UNLOCK();
      }
      LOCK();
      *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) | 2;
      UNLOCK();
      LOCK();
      *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) & 0xfffffff7;
      UNLOCK();
      *(undefined4 *)(param_2 + 2) = 0;
      if (((*(uint *)((longlong)param_2 + 0x14) & 0x4c0) == 0) &&
         (uVar2 = FUN_1400a4330((undefined *)param_2), (char)uVar2 == '\0')) {
        __acrt_stdio_allocate_buffer_nolock(param_2);
      }
      bVar1 = FUN_1400ac1bc(param_1,param_2,param_3);
      if (bVar1) {
        return (ulonglong)param_1;
      }
      goto LAB_1400abfce;
    }
    *(undefined4 *)((longlong)param_3 + 0x2c) = 0x22;
  }
  *(undefined1 *)(param_3 + 6) = 1;
LAB_1400abfce:
  LOCK();
  *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) | 0x10;
  UNLOCK();
  return 0xffffffff;
}

