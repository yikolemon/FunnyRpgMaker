/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10271bef */

void FUN_10271bef(uint param_1,FILE *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined4 local_14;
  uint local_10;
  undefined1 local_c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  iVar2 = __fileno(param_2);
  if ((iVar2 == -1) || (iVar2 = __fileno(param_2), iVar2 == -2)) {
    puVar4 = &DAT_1039b678;
  }
  else {
    iVar2 = __fileno(param_2);
    uVar3 = __fileno(param_2);
    puVar4 = (undefined *)((&DAT_103a5230)[iVar2 >> 6] + (uVar3 & 0x3f) * 0x38);
  }
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  if (puVar4[0x29] == '\0') {
    iVar2 = FUN_10277f3a(&local_14,&local_10,5,param_1);
    if (iVar2 != 0) goto LAB_10271ceb;
  }
  else {
    local_10 = param_1 & 0xffff;
    local_14 = 2;
  }
  pcVar5 = (char *)(param_2->_cnt + local_14);
  iVar2 = local_14;
  if (param_2->_ptr < pcVar5) {
    if ((param_2->_base != (char *)0x0) || (param_2->_bufsiz < local_14)) goto LAB_10271ceb;
    param_2->_ptr = pcVar5;
  }
  while (-1 < iVar2 + -1) {
    cVar1 = *(char *)((int)&local_14 + iVar2 + 3);
    param_2->_ptr = param_2->_ptr + -1;
    *param_2->_ptr = cVar1;
    iVar2 = iVar2 + -1;
  }
  param_2->_base = param_2->_base + local_14;
  LOCK();
  param_2->_flag = param_2->_flag & 0xfffffff7;
  UNLOCK();
  LOCK();
  param_2->_flag = param_2->_flag | 1;
  UNLOCK();
LAB_10271ceb:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

