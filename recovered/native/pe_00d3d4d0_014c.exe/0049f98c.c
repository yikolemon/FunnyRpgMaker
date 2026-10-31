/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049f98c */

uint __cdecl FUN_0049f98c(FILE *param_1)

{
  byte bVar1;
  LPWSTR pWVar2;
  __acrt_ptd *p_Var3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  
  if (param_1 == (FILE *)0x0) {
    p_Var3 = FUN_0048f66d();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_00495c88();
  }
  else if ((((uint)param_1->_flag >> 0xd & 1) != 0) && (((uint)param_1->_flag >> 0xc & 1) == 0)) {
    if (((uint)param_1->_flag >> 1 & 1) == 0) {
      LOCK();
      param_1->_flag = param_1->_flag | 1;
      UNLOCK();
      if ((param_1->_flag & 0x4c0U) == 0) {
        ___acrt_stdio_allocate_buffer_nolock(&param_1->_ptr);
      }
      param_1->_ptr = (char *)param_1->_cnt;
      uVar7 = param_1->_bufsiz;
      pWVar2 = (LPWSTR)param_1->_cnt;
      uVar4 = __fileno(param_1);
      pcVar5 = (char *)FUN_004a0249(uVar4,pWVar2,uVar7);
      param_1->_base = pcVar5;
      pcVar5 = param_1->_base;
      if ((pcVar5 != (char *)0x0) && (pcVar5 != (char *)0xffffffff)) {
        if ((param_1->_flag & 6U) == 0) {
          iVar6 = __fileno(param_1);
          if ((iVar6 == -1) || (iVar6 = __fileno(param_1), iVar6 == -2)) {
            puVar8 = &DAT_0051b0e0;
          }
          else {
            iVar6 = __fileno(param_1);
            uVar7 = __fileno(param_1);
            puVar8 = (undefined *)((&DAT_00521cc8)[iVar6 >> 6] + (uVar7 & 0x3f) * 0x38);
          }
          if ((puVar8[0x28] & 0x82) == 0x82) {
            LOCK();
            param_1->_flag = param_1->_flag | 0x20;
            UNLOCK();
          }
        }
        if (((param_1->_bufsiz == 0x200) && (((uint)param_1->_flag >> 6 & 1) != 0)) &&
           ((param_1->_flag & 0x100U) == 0)) {
          param_1->_bufsiz = 0x1000;
        }
        param_1->_base = param_1->_base + -1;
        bVar1 = *param_1->_ptr;
        param_1->_ptr = param_1->_ptr + 1;
        return (uint)bVar1;
      }
      uVar7 = 8;
      if (pcVar5 != (char *)0x0) {
        uVar7 = 0x10;
      }
      LOCK();
      param_1->_flag = param_1->_flag | uVar7;
      UNLOCK();
      param_1->_base = (char *)0x0;
    }
    else {
      LOCK();
      param_1->_flag = param_1->_flag | 0x10;
      UNLOCK();
    }
  }
  return 0xffffffff;
}

