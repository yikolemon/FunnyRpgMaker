/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00498529 */

void __cdecl FUN_00498529(char param_1,FILE *param_2,int *param_3)

{
  int *piVar1;
  
  if ((param_1 != '\0') && (piVar1 = &param_2->_flag, ((uint)*piVar1 >> 9 & 1) != 0)) {
    FUN_00490869(param_2,param_3);
    LOCK();
    *piVar1 = *piVar1 & 0xfffffd7f;
    UNLOCK();
    param_2->_bufsiz = 0;
    param_2->_cnt = 0;
    param_2->_ptr = (char *)0x0;
  }
  return;
}

