/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027fa93 */

uint FUN_1027fa93(uint param_1,FILE *param_2,int param_3)

{
  char cVar1;
  
  __fileno(param_2);
  if ((param_2->_flag & 6U) == 0) {
    *(undefined4 *)(param_3 + 0x18) = 9;
  }
  else {
    if (((uint)param_2->_flag >> 0xc & 1) == 0) {
      if ((param_2->_flag & 1U) == 0) {
LAB_1027fb18:
        LOCK();
        param_2->_flag = param_2->_flag | 2;
        UNLOCK();
        LOCK();
        param_2->_flag = param_2->_flag & 0xfffffff7;
        UNLOCK();
        param_2->_base = (char *)0x0;
        if ((param_2->_flag & 0x4c0U) == 0) {
          cVar1 = FUN_102772a4(param_2);
          if (cVar1 == '\0') {
            ___acrt_stdio_allocate_buffer_nolock(param_2);
          }
        }
        cVar1 = FUN_1027fc83(param_1,param_2,param_3);
        if (cVar1 == '\0') {
          LOCK();
          param_2->_flag = param_2->_flag | 0x10;
          UNLOCK();
          param_1 = 0xffffffff;
        }
        else {
          param_1 = param_1 & 0xff;
        }
        return param_1;
      }
      cVar1 = FUN_1027fa04(param_2);
      param_2->_base = (char *)0x0;
      if (cVar1 != '\0') {
        param_2->_ptr = (char *)param_2->_cnt;
        LOCK();
        param_2->_flag = param_2->_flag & 0xfffffffe;
        UNLOCK();
        goto LAB_1027fb18;
      }
      goto LAB_1027fabd;
    }
    *(undefined4 *)(param_3 + 0x18) = 0x22;
  }
  *(undefined1 *)(param_3 + 0x1c) = 1;
LAB_1027fabd:
  LOCK();
  param_2->_flag = param_2->_flag | 0x10;
  UNLOCK();
  return 0xffffffff;
}

