/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049ffa9 */

WCHAR __cdecl FUN_0049ffa9(WCHAR param_1,FILE *param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  
  __fileno(param_2);
  if ((param_2->_flag & 6U) == 0) {
    param_3[6] = 9;
  }
  else {
    if (((uint)param_2->_flag >> 0xc & 1) == 0) {
      if ((param_2->_flag & 1U) == 0) {
LAB_004a0030:
        LOCK();
        param_2->_flag = param_2->_flag | 2;
        UNLOCK();
        LOCK();
        param_2->_flag = param_2->_flag & 0xfffffff7;
        UNLOCK();
        param_2->_base = (char *)0x0;
        if (((param_2->_flag & 0x4c0U) == 0) && (uVar3 = FUN_004984eb(param_2), (char)uVar3 == '\0')
           ) {
          ___acrt_stdio_allocate_buffer_nolock(&param_2->_ptr);
        }
        bVar2 = FUN_004a0175(param_1,param_2,param_3);
        if (!bVar2) {
          LOCK();
          param_2->_flag = param_2->_flag | 0x10;
          UNLOCK();
          param_1 = L'\xffff';
        }
        return param_1;
      }
      cVar1 = FUN_0049fe24((int *)param_2);
      param_2->_base = (char *)0x0;
      if (cVar1 != '\0') {
        param_2->_ptr = (char *)param_2->_cnt;
        LOCK();
        param_2->_flag = param_2->_flag & 0xfffffffe;
        UNLOCK();
        goto LAB_004a0030;
      }
      goto LAB_0049ffd3;
    }
    param_3[6] = 0x22;
  }
  *(undefined1 *)(param_3 + 7) = 1;
LAB_0049ffd3:
  LOCK();
  param_2->_flag = param_2->_flag | 0x10;
  UNLOCK();
  return L'\xffff';
}

