/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00493df9 */

/* Library Function - Single Match
    __ungetwc_nolock
   
   Library: Visual Studio 2019 Release */

wint_t __cdecl __ungetwc_nolock(wint_t _Ch,FILE *_File)

{
  wint_t wVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (_Ch != 0xffff) {
    if (((_File->_flag & 1U) != 0) ||
       ((((uint)_File->_flag >> 2 & 1) != 0 && (((uint)_File->_flag >> 1 & 1) == 0)))) {
      if (_File->_cnt == 0) {
        ___acrt_stdio_allocate_buffer_nolock(&_File->_ptr);
      }
      if (((uint)_File->_flag >> 0xc & 1) == 0) {
        iVar2 = __fileno(_File);
        if ((iVar2 == -1) || (iVar2 = __fileno(_File), iVar2 == -2)) {
          puVar4 = &DAT_0051b0e0;
        }
        else {
          iVar2 = __fileno(_File);
          uVar3 = __fileno(_File);
          puVar4 = (undefined *)((&DAT_00521cc8)[iVar2 >> 6] + (uVar3 & 0x3f) * 0x38);
        }
        if ((char)puVar4[0x28] < '\0') {
          wVar1 = FUN_00493eaf(_Ch,_File);
          return wVar1;
        }
      }
      wVar1 = FUN_00493fc1(_Ch,(uint *)_File);
      return wVar1;
    }
  }
  return 0xffff;
}

