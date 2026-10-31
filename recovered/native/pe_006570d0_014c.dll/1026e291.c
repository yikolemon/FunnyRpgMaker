/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026e291 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    _fread_s
   
   Library: Visual Studio 2019 Release */

size_t __cdecl _fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File)

{
  undefined4 *puVar1;
  size_t sVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_14;
  
  if ((_ElementSize != 0) && (_Count != 0)) {
    if (_File != (FILE *)0x0) {
      __lock_file(_File);
      sVar2 = FUN_1026e34b(_DstBuf,_DstSize,_ElementSize,_Count,_File);
      FUN_1026e326();
      goto LAB_1026e2d7;
    }
    if (_DstSize != 0xffffffff) {
      _memset(_DstBuf,0,_DstSize);
    }
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
    FUN_10273ea8();
  }
  sVar2 = 0;
LAB_1026e2d7:
  *unaff_FS_OFFSET = local_14;
  return sVar2;
}

