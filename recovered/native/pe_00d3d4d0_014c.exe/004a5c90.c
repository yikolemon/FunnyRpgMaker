/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a5c90 */

/* Library Function - Multiple Matches With Different Base Names
    __msize
    __msize_base
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl FID_conflict___msize_base(void *_Memory)

{
  __acrt_ptd *p_Var1;
  SIZE_T SVar2;
  
  if (_Memory == (void *)0x0) {
    p_Var1 = FUN_0048f66d();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_00495c88();
    return 0xffffffff;
  }
  SVar2 = HeapSize(DAT_00521cc4,0,_Memory);
  return SVar2;
}

