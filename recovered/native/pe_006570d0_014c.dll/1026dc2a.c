/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026dc2a */

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
  undefined4 *puVar6;
  undefined *puVar7;
  wint_t *pwVar8;
  undefined4 uVar9;
  byte local_10;
  undefined1 local_f;
  wint_t local_c [2];
  wint_t local_8;
  wint_t local_6;
  
  puVar7 = &DAT_1039b678;
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
    if (puVar4[0x29] != '\0') {
      pwVar8 = &local_8;
      do {
        iVar2 = FUN_1026db4f(_File);
        if (iVar2 == -1) {
          return 0xffff;
        }
        *(char *)pwVar8 = (char)iVar2;
        pwVar8 = (wint_t *)((int)pwVar8 + 1);
      } while (pwVar8 != &local_6);
      return local_8;
    }
  }
  if (((uint)_File->_flag >> 0xc & 1) == 0) {
    iVar2 = __fileno(_File);
    if ((iVar2 != -1) && (iVar2 = __fileno(_File), iVar2 != -2)) {
      iVar2 = __fileno(_File);
      uVar3 = __fileno(_File);
      puVar7 = (undefined *)((&DAT_103a5230)[iVar2 >> 6] + (uVar3 & 0x3f) * 0x38);
    }
    if ((char)puVar7[0x28] < '\0') {
      uVar9 = 1;
      iVar2 = FUN_1026db4f(_File);
      if (iVar2 != -1) {
        local_10 = (byte)iVar2;
        puVar5 = ___pctype_func();
        if ((short)puVar5[local_10] < 0) {
          iVar2 = FUN_1026db4f(_File);
          if (iVar2 == -1) {
            _ungetc((int)(char)local_10,_File);
            return 0xffff;
          }
          local_f = (undefined1)iVar2;
          uVar9 = 2;
        }
        iVar2 = FUN_102780d8(local_c,&local_10,uVar9);
        if (iVar2 != -1) {
          return local_c[0];
        }
        puVar6 = (undefined4 *)FUN_10268ffd();
        *puVar6 = 0x2a;
      }
      return 0xffff;
    }
  }
  if ((int)_File->_base < 2) {
    wVar1 = FUN_1027f568(_File);
  }
  else {
    _File->_base = _File->_base + -2;
    wVar1 = *(wint_t *)_File->_ptr;
    _File->_ptr = (char *)((int)_File->_ptr + 2);
  }
  return wVar1;
}

