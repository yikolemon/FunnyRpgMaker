/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401aa57c */

void FUN_1401aa57c(undefined2 param_1,FILE *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  char *pcVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  int local_28 [2];
  undefined2 local_20;
  uint local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  local_20 = param_1;
  iVar2 = _fileno(param_2);
  if ((iVar2 == -1) || (iVar2 = _fileno(param_2), iVar2 == -2)) {
    puVar4 = &DAT_140f29970;
  }
  else {
    iVar2 = _fileno(param_2);
    uVar3 = _fileno(param_2);
    puVar4 = (undefined *)
             ((&DAT_140f32db0)[(longlong)iVar2 >> 6] + (ulonglong)(uVar3 & 0x3f) * 0x48);
  }
  local_28[0] = 0;
  local_18 = 0;
  local_14 = 0;
  if (puVar4[0x39] == '\0') {
    iVar2 = FUN_1401b38e8(local_28,&local_18,5,param_1);
    if (iVar2 != 0) goto LAB_1401aa69d;
  }
  else {
    local_28[0] = 2;
    local_18 = (uint)CONCAT11(local_20._1_1_,(char)param_1);
  }
  pcVar5 = (char *)(*(longlong *)&param_2->_cnt + (longlong)local_28[0]);
  if (param_2->_ptr < pcVar5) {
    if ((*(int *)&param_2->_base != 0) || (param_2->_charbuf < local_28[0])) goto LAB_1401aa69d;
    param_2->_ptr = pcVar5;
  }
  lVar6 = (longlong)(local_28[0] + -1);
  if (-1 < local_28[0] + -1) {
    do {
      param_2->_ptr = param_2->_ptr + -1;
      pcVar5 = (char *)((longlong)&local_18 + lVar6);
      lVar6 = lVar6 + -1;
      *param_2->_ptr = *pcVar5;
    } while (-1 < lVar6);
  }
  *(int *)&param_2->_base = *(int *)&param_2->_base + local_28[0];
  LOCK();
  puVar1 = (uint *)((longlong)&param_2->_base + 4);
  *puVar1 = *puVar1 & 0xfffffff7;
  UNLOCK();
  LOCK();
  puVar1 = (uint *)((longlong)&param_2->_base + 4);
  *puVar1 = *puVar1 | 1;
  UNLOCK();
LAB_1401aa69d:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_48);
}

