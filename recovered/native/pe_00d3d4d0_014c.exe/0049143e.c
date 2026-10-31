/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049143e */

/* Library Function - Single Match
    _fread
   
   Library: Visual Studio 2019 Release */

size_t __cdecl _fread(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File)

{
  size_t sVar1;
  
  sVar1 = _fread_s(_DstBuf,0xffffffff,_ElementSize,_Count,_File);
  return sVar1;
}

