/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10271b39 */

/* Library Function - Single Match
    __ungetwc_nolock
   
   Library: Visual Studio 2019 Release */

wint_t __cdecl __ungetwc_nolock(wint_t _Ch,FILE *_File)

{
  wint_t wVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined2 in_stack_00000006;
  
  if (_Ch != 0xffff) {
    if (((_File->_flag & 1U) != 0) ||
       ((((uint)_File->_flag >> 2 & 1) != 0 && (((uint)_File->_flag >> 1 & 1) == 0)))) {
      if (_File->_cnt == 0) {
        ___acrt_stdio_allocate_buffer_nolock(_File);
      }
      if (((uint)_File->_flag >> 0xc & 1) == 0) {
        iVar2 = __fileno(_File);
        if ((iVar2 == -1) || (iVar2 = __fileno(_File), iVar2 == -2)) {
          puVar4 = &DAT_1039b678;
        }
        else {
          iVar2 = __fileno(_File);
          uVar3 = __fileno(_File);
          puVar4 = (undefined *)((&DAT_103a5230)[iVar2 >> 6] + (uVar3 & 0x3f) * 0x38);
        }
        if ((char)puVar4[0x28] < '\0') {
          wVar1 = FUN_10271bef(__Ch,_File);
          return wVar1;
        }
      }
      wVar1 = FUN_10271d01(__Ch,_File);
      return wVar1;
    }
  }
  return 0xffff;
}

