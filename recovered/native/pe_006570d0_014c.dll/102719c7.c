/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102719c7 */

uint FUN_102719c7(uint param_1,FILE *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  if (((uint)param_2->_flag >> 0xc & 1) == 0) {
    uVar3 = __fileno(param_2);
    puVar7 = &DAT_1039b678;
    if ((uVar3 == 0xffffffff) || (uVar3 == 0xfffffffe)) {
      puVar6 = &DAT_1039b678;
    }
    else {
      puVar6 = (undefined *)((uVar3 & 0x3f) * 0x38 + (&DAT_103a5230)[(int)uVar3 >> 6]);
    }
    if (puVar6[0x29] == '\0') {
      if ((uVar3 != 0xffffffff) && (uVar3 != 0xfffffffe)) {
        puVar7 = (undefined *)((uVar3 & 0x3f) * 0x38 + (&DAT_103a5230)[(int)uVar3 >> 6]);
      }
      if ((puVar7[0x2d] & 1) == 0) goto LAB_10271a52;
    }
    puVar4 = (undefined4 *)FUN_10268ffd();
    *puVar4 = 0x16;
    FUN_10273ea8();
  }
  else {
LAB_10271a52:
    if ((param_1 != 0xffffffff) &&
       (((param_2->_flag & 1U) != 0 || (((byte)param_2->_flag & 6) == 6)))) {
      if (param_2->_cnt == 0) {
        ___acrt_stdio_allocate_buffer_nolock(param_2);
      }
      piVar5 = &param_2->_flag;
      if (param_2->_ptr == (char *)param_2->_cnt) {
        if (param_2->_base != (char *)0x0) {
          return 0xffffffff;
        }
        param_2->_ptr = param_2->_ptr + 1;
      }
      pcVar2 = param_2->_ptr;
      pcVar1 = pcVar2 + -1;
      param_2->_ptr = pcVar1;
      if (((uint)*piVar5 >> 0xc & 1) == 0) {
        *pcVar1 = (char)param_1;
      }
      else if (*pcVar1 != (char)param_1) {
        param_2->_ptr = pcVar2;
        return 0xffffffff;
      }
      param_2->_base = param_2->_base + 1;
      LOCK();
      *piVar5 = *piVar5 & 0xfffffff7;
      UNLOCK();
      LOCK();
      *piVar5 = *piVar5 | 1;
      UNLOCK();
      return param_1 & 0xff;
    }
  }
  return 0xffffffff;
}

