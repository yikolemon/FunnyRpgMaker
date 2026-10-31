/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026d759 */

undefined4 FUN_1026d759(FILE *param_1,undefined4 param_2)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = &param_1->_flag;
  if ((((byte)*piVar1 & 3) == 2) && ((*piVar1 & 0xc0U) != 0)) {
    pcVar2 = (char *)param_1->_cnt;
    iVar4 = (int)param_1->_ptr - (int)pcVar2;
    param_1->_ptr = pcVar2;
    param_1->_base = (char *)0x0;
    if (0 < iVar4) {
      iVar3 = __fileno(param_1);
      iVar3 = FUN_1027eca6(iVar3,pcVar2,iVar4,param_2);
      if (iVar4 != iVar3) {
        LOCK();
        *piVar1 = *piVar1 | 0x10;
        UNLOCK();
        return 0xffffffff;
      }
      if (((uint)*piVar1 >> 2 & 1) != 0) {
        LOCK();
        *piVar1 = *piVar1 & 0xfffffffd;
        UNLOCK();
      }
    }
  }
  return 0;
}

