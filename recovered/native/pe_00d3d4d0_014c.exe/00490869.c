/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00490869 */

undefined4 __cdecl FUN_00490869(FILE *param_1,int *param_2)

{
  int *piVar1;
  WCHAR *pWVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = &param_1->_flag;
  if ((((byte)*piVar1 & 3) == 2) && ((*piVar1 & 0xc0U) != 0)) {
    pWVar2 = (WCHAR *)param_1->_cnt;
    uVar4 = (int)param_1->_ptr - (int)pWVar2;
    param_1->_ptr = (char *)pWVar2;
    param_1->_base = (char *)0x0;
    if (0 < (int)uVar4) {
      uVar3 = __fileno(param_1);
      uVar3 = FUN_0049f0bf(uVar3,pWVar2,uVar4,param_2);
      if (uVar4 != uVar3) {
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

