/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027f573 */

uint FUN_1027f573(FILE *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  
  if (param_1 == (FILE *)0x0) {
    puVar3 = (undefined4 *)FUN_10268ffd();
    *puVar3 = 0x16;
    FUN_10273ea8();
  }
  else if ((((uint)param_1->_flag >> 0xd & 1) != 0) && (((uint)param_1->_flag >> 0xc & 1) == 0)) {
    if (((uint)param_1->_flag >> 1 & 1) == 0) {
      LOCK();
      param_1->_flag = param_1->_flag | 1;
      UNLOCK();
      if ((param_1->_flag & 0x4c0U) == 0) {
        ___acrt_stdio_allocate_buffer_nolock(param_1);
      }
      param_1->_ptr = (char *)param_1->_cnt;
      iVar6 = param_1->_bufsiz;
      iVar2 = param_1->_cnt;
      iVar4 = __fileno(param_1);
      pcVar5 = (char *)FUN_1027fe29(iVar4,iVar2,iVar6);
      param_1->_base = pcVar5;
      pcVar5 = param_1->_base;
      if ((pcVar5 != (char *)0x0) && (pcVar5 != (char *)0xffffffff)) {
        if ((param_1->_flag & 6U) == 0) {
          iVar6 = __fileno(param_1);
          if ((iVar6 == -1) || (iVar6 = __fileno(param_1), iVar6 == -2)) {
            puVar8 = &DAT_1039b678;
          }
          else {
            iVar6 = __fileno(param_1);
            uVar7 = __fileno(param_1);
            puVar8 = (undefined *)((&DAT_103a5230)[iVar6 >> 6] + (uVar7 & 0x3f) * 0x38);
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

