/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00490d3a */

/* Library Function - Single Match
    __fgetwc_nolock
   
   Library: Visual Studio 2019 Release */

wint_t __cdecl __fgetwc_nolock(FILE *_File)

{
  wint_t wVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  ushort *puVar5;
  __acrt_ptd *p_Var6;
  undefined *puVar7;
  WCHAR *pWVar8;
  byte local_10;
  undefined1 local_f;
  WCHAR local_c [2];
  WCHAR local_8;
  WCHAR local_6;
  
  puVar7 = &DAT_0051b0e0;
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
    if (puVar4[0x29] != '\0') {
      pWVar8 = &local_8;
      do {
        iVar2 = FUN_00490c5f(_File);
        if (iVar2 == -1) {
          return 0xffff;
        }
        *(char *)pWVar8 = (char)iVar2;
        pWVar8 = (WCHAR *)((int)pWVar8 + 1);
      } while (pWVar8 != &local_6);
      return local_8;
    }
  }
  if (((uint)_File->_flag >> 0xc & 1) == 0) {
    iVar2 = __fileno(_File);
    if ((iVar2 != -1) && (iVar2 = __fileno(_File), iVar2 != -2)) {
      iVar2 = __fileno(_File);
      uVar3 = __fileno(_File);
      puVar7 = (undefined *)((&DAT_00521cc8)[iVar2 >> 6] + (uVar3 & 0x3f) * 0x38);
    }
    if ((char)puVar7[0x28] < '\0') {
      uVar3 = 1;
      iVar2 = FUN_00490c5f(_File);
      if (iVar2 != -1) {
        local_10 = (byte)iVar2;
        puVar5 = ___pctype_func();
        if ((short)puVar5[local_10] < 0) {
          iVar2 = FUN_00490c5f(_File);
          if (iVar2 == -1) {
            _ungetc((int)(char)local_10,_File);
            return 0xffff;
          }
          local_f = (undefined1)iVar2;
          uVar3 = 2;
        }
        uVar3 = FUN_0049931f(local_c,&local_10,uVar3);
        if (uVar3 != 0xffffffff) {
          return local_c[0];
        }
        p_Var6 = FUN_0048f66d();
        *(undefined4 *)p_Var6 = 0x2a;
      }
      return 0xffff;
    }
  }
  if ((int)_File->_base < 2) {
    wVar1 = FUN_0049f981(_File);
  }
  else {
    _File->_base = _File->_base + -2;
    wVar1 = *(wint_t *)_File->_ptr;
    _File->_ptr = (char *)((int)_File->_ptr + 2);
  }
  return wVar1;
}

