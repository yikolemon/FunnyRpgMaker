/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10285720 */

/* Library Function - Multiple Matches With Different Base Names
    __msize
    __msize_base
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl FID_conflict___msize_base(void *_Memory)

{
  undefined4 *puVar1;
  SIZE_T SVar2;
  
  if (_Memory == (void *)0x0) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
    FUN_10273ea8();
    return 0xffffffff;
  }
  SVar2 = HeapSize(DAT_103a5228,0,_Memory);
  return SVar2;
}

