/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011687c */

/* Library Function - Single Match
    fread
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl fread(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File)

{
  size_t sVar1;
  
  sVar1 = fread_s(_DstBuf,0xffffffffffffffff,_ElementSize,_Count,_File);
  return sVar1;
}

