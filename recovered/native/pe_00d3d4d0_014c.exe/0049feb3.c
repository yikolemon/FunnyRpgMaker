/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049feb3 */

uint __cdecl FUN_0049feb3(byte param_1,FILE *param_2,int *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  
  __fileno(param_2);
  if ((param_2->_flag & 6U) == 0) {
    param_3[6] = 9;
  }
  else {
    if (((uint)param_2->_flag >> 0xc & 1) == 0) {
      if ((param_2->_flag & 1U) == 0) {
LAB_0049ff38:
        LOCK();
        param_2->_flag = param_2->_flag | 2;
        UNLOCK();
        LOCK();
        param_2->_flag = param_2->_flag & 0xfffffff7;
        UNLOCK();
        param_2->_base = (char *)0x0;
        if ((param_2->_flag & 0x4c0U) == 0) {
          uVar2 = FUN_004984eb(param_2);
          if ((char)uVar2 == '\0') {
            ___acrt_stdio_allocate_buffer_nolock(&param_2->_ptr);
          }
        }
        cVar1 = FUN_004a00a3(param_1,param_2,param_3);
        if (cVar1 == '\0') {
          LOCK();
          param_2->_flag = param_2->_flag | 0x10;
          UNLOCK();
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (uint)param_1;
        }
        return uVar3;
      }
      cVar1 = FUN_0049fe24((int *)param_2);
      param_2->_base = (char *)0x0;
      if (cVar1 != '\0') {
        param_2->_ptr = (char *)param_2->_cnt;
        LOCK();
        param_2->_flag = param_2->_flag & 0xfffffffe;
        UNLOCK();
        goto LAB_0049ff38;
      }
      goto LAB_0049fedd;
    }
    param_3[6] = 0x22;
  }
  *(undefined1 *)(param_3 + 7) = 1;
LAB_0049fedd:
  LOCK();
  param_2->_flag = param_2->_flag | 0x10;
  UNLOCK();
  return 0xffffffff;
}

