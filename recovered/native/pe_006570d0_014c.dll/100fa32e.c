/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fa32e */

void * FUN_100fa32e(void *param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = _memchr(param_1,10,(int)param_2 - (int)param_1);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = param_2;
  }
  return pvVar1;
}

