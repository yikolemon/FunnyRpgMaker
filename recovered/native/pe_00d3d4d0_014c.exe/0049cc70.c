/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049cc70 */

/* Library Function - Single Match
    __recalloc_base
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID __cdecl __recalloc_base(void *param_1,uint param_2,uint param_3)

{
  __acrt_ptd *p_Var1;
  LPVOID pvVar2;
  size_t sVar3;
  uint uVar4;
  
  if ((param_2 == 0) || (param_3 <= 0xffffffe0 / param_2)) {
    if (param_1 == (void *)0x0) {
      sVar3 = 0;
    }
    else {
      sVar3 = FID_conflict___msize_base(param_1);
    }
    uVar4 = param_2 * param_3;
    pvVar2 = __realloc_base(param_1,uVar4);
    if ((pvVar2 != (LPVOID)0x0) && (sVar3 < uVar4)) {
      _memset((void *)((int)pvVar2 + sVar3),0,uVar4 - sVar3);
    }
  }
  else {
    p_Var1 = FUN_0048f66d();
    *(undefined4 *)p_Var1 = 0xc;
    pvVar2 = (LPVOID)0x0;
  }
  return pvVar2;
}

