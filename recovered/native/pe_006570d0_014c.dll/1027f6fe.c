/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027f6fe */

undefined2 FUN_1027f6fe(FILE *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  undefined2 uVar9;
  char local_5;
  
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
      pcVar1 = param_1->_base;
      if (pcVar1 == (char *)0x1) {
        local_5 = *param_1->_ptr;
      }
      else {
        local_5 = '\0';
      }
      param_1->_ptr = (char *)param_1->_cnt;
      iVar6 = param_1->_bufsiz;
      iVar2 = param_1->_cnt;
      iVar4 = __fileno(param_1);
      pcVar5 = (char *)FUN_1027fe29(iVar4,iVar2,iVar6);
      param_1->_base = pcVar5;
      pcVar5 = param_1->_base;
      if (((pcVar5 != (char *)0x0) && (pcVar5 != (char *)0x1)) && (pcVar5 != (char *)0xffffffff)) {
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
           (((uint)param_1->_flag >> 8 & 1) == 0)) {
          param_1->_bufsiz = 0x1000;
        }
        pcVar5 = param_1->_ptr;
        if (pcVar1 == (char *)0x1) {
          uVar9 = CONCAT11(*pcVar5,local_5);
          param_1->_base = param_1->_base + -1;
          pcVar5 = pcVar5 + 1;
        }
        else {
          uVar9 = *(undefined2 *)pcVar5;
          param_1->_base = param_1->_base + -2;
          pcVar5 = pcVar5 + 2;
        }
        param_1->_ptr = pcVar5;
        return uVar9;
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
  return 0xffff;
}

