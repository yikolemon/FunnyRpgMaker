/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401bbfcc */

undefined2 FUN_1401bbfcc(FILE *param_1)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  undefined2 uVar9;
  char *pcVar10;
  char cVar11;
  
  if (param_1 == (FILE *)0x0) {
    puVar7 = (undefined4 *)FUN_14019e8cc();
    *puVar7 = 0x16;
    FUN_1401ae640();
  }
  else if (((*(uint *)((longlong)&param_1->_base + 4) >> 0xd & 1) != 0) &&
          ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0)) {
    if ((*(uint *)((longlong)&param_1->_base + 4) >> 1 & 1) == 0) {
      LOCK();
      puVar1 = (uint *)((longlong)&param_1->_base + 4);
      *puVar1 = *puVar1 | 1;
      UNLOCK();
      if (((ulonglong)param_1->_base & 0x4c000000000) == 0) {
        __acrt_stdio_allocate_buffer_nolock();
      }
      iVar3 = *(int *)&param_1->_base;
      if (iVar3 == 1) {
        cVar11 = *param_1->_ptr;
      }
      else {
        cVar11 = '\0';
      }
      pcVar10 = *(char **)&param_1->_cnt;
      iVar5 = param_1->_charbuf;
      param_1->_ptr = pcVar10;
      iVar4 = _fileno(param_1);
      iVar5 = FUN_1401bc5b0(iVar4,pcVar10,iVar5);
      *(int *)&param_1->_base = iVar5;
      if (2 < iVar5 + 1U) {
        if (((ulonglong)param_1->_base & 0x600000000) == 0) {
          iVar5 = _fileno(param_1);
          if ((iVar5 == -1) || (iVar5 = _fileno(param_1), iVar5 == -2)) {
            puVar8 = &DAT_140f29970;
          }
          else {
            iVar5 = _fileno(param_1);
            uVar6 = _fileno(param_1);
            puVar8 = (undefined *)
                     ((&DAT_140f32db0)[(longlong)iVar5 >> 6] + (ulonglong)(uVar6 & 0x3f) * 0x48);
          }
          if ((puVar8[0x38] & 0x82) == 0x82) {
            LOCK();
            puVar1 = (uint *)((longlong)&param_1->_base + 4);
            *puVar1 = *puVar1 | 0x20;
            UNLOCK();
          }
        }
        if (((param_1->_charbuf == 0x200) &&
            ((*(uint *)((longlong)&param_1->_base + 4) >> 6 & 1) != 0)) &&
           ((*(uint *)((longlong)&param_1->_base + 4) >> 8 & 1) == 0)) {
          param_1->_charbuf = 0x1000;
        }
        pcVar10 = param_1->_ptr;
        if (iVar3 == 1) {
          cVar2 = *pcVar10;
          *(int *)&param_1->_base = *(int *)&param_1->_base + -1;
          uVar9 = CONCAT11(cVar2,cVar11);
          pcVar10 = pcVar10 + 1;
        }
        else {
          uVar9 = *(undefined2 *)pcVar10;
          *(int *)&param_1->_base = *(int *)&param_1->_base + -2;
          pcVar10 = pcVar10 + 2;
        }
        param_1->_ptr = pcVar10;
        return uVar9;
      }
      LOCK();
      puVar1 = (uint *)((longlong)&param_1->_base + 4);
      *puVar1 = *puVar1 | (-(uint)(iVar5 != 0) & 8) + 8;
      UNLOCK();
      *(undefined4 *)&param_1->_base = 0;
    }
    else {
      LOCK();
      puVar1 = (uint *)((longlong)&param_1->_base + 4);
      *puVar1 = *puVar1 | 0x10;
      UNLOCK();
    }
  }
  return 0xffff;
}

