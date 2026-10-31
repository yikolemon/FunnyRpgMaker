/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028c8d8 */

void FUN_18028c8d8(undefined2 param_1,FILE *param_2)

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
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_20 = param_1;
  iVar2 = _fileno(param_2);
  if ((iVar2 == -1) || (iVar2 = _fileno(param_2), iVar2 == -2)) {
    puVar4 = &DAT_1804161d0;
  }
  else {
    iVar2 = _fileno(param_2);
    uVar3 = _fileno(param_2);
    puVar4 = (undefined *)
             ((&DAT_180421400)[(longlong)iVar2 >> 6] + (ulonglong)(uVar3 & 0x3f) * 0x48);
  }
  local_28[0] = 0;
  local_18 = 0;
  local_14 = 0;
  if (puVar4[0x39] == '\0') {
    iVar2 = FUN_180295da4(local_28,&local_18,5,param_1);
    if (iVar2 != 0) goto LAB_18028c9f9;
  }
  else {
    local_28[0] = 2;
    local_18 = (uint)CONCAT11(local_20._1_1_,(char)param_1);
  }
  pcVar5 = (char *)(*(longlong *)&param_2->_cnt + (longlong)local_28[0]);
  if (param_2->_ptr < pcVar5) {
    if ((*(int *)&param_2->_base != 0) || (param_2->_charbuf < local_28[0])) goto LAB_18028c9f9;
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
LAB_18028c9f9:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_48);
}

