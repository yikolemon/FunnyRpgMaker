/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048f962 */

undefined4 __cdecl
FUN_0048f962(FILE *param_1,undefined4 param_2,undefined4 param_3,PLARGE_INTEGER param_4,int *param_5
            )

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = CONCAT44(param_3,param_2);
  if (((uint)param_1->_flag >> 0xd & 1) == 0) {
    *(undefined1 *)(param_5 + 7) = 1;
    param_5[6] = 0x16;
    return 0xffffffff;
  }
  LOCK();
  param_1->_flag = param_1->_flag & 0xfffffff7;
  UNLOCK();
  bVar1 = common_fseek_binary_mode_read_only_fast_track_nolock(param_1,param_2,param_3,param_4);
  if (!bVar1) {
    if (param_4 == (PLARGE_INTEGER)0x1) {
      lVar2 = FUN_00491a0f(param_1,param_5);
      lVar3 = lVar2 + lVar3;
      param_4 = (PLARGE_INTEGER)0x0;
    }
    FUN_00490869(param_1,param_5);
    param_1->_base = (char *)0x0;
    param_1->_ptr = (char *)param_1->_cnt;
    if (((uint)param_1->_flag >> 2 & 1) == 0) {
      if ((((byte)param_1->_flag & 0x41) == 0x41) && (((uint)param_1->_flag >> 8 & 1) == 0)) {
        param_1->_bufsiz = 0x200;
      }
    }
    else {
      LOCK();
      param_1->_flag = param_1->_flag & 0xfffffffc;
      UNLOCK();
    }
    lVar3 = FUN_0049cdd4(param_1->_file,(int)lVar3,(int)((ulonglong)lVar3 >> 0x20),param_4,
                         (int)param_5);
    if (lVar3 == -1) {
      return 0xffffffff;
    }
  }
  return 0;
}

