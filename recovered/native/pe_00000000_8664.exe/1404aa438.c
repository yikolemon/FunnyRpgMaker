/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404aa438 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _alloc_osfhnd
   
   Library: Visual Studio 2019 Release */

int __cdecl _alloc_osfhnd(void)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  FID_conflict___acrt_lock(7);
  uVar2 = 0xffffffff;
  iVar3 = 0;
  do {
    if (0x7f < iVar3) {
LAB_1404aa54f:
      FID_conflict___acrt_lock(7);
      return uVar2;
    }
    lVar1 = (&DAT_1406328d0)[iVar3];
    if (lVar1 == 0) {
      lVar1 = __acrt_lowio_create_handle_array();
      (&DAT_1406328d0)[iVar3] = lVar1;
      if (lVar1 != 0) {
        DAT_140632cd0 = DAT_140632cd0 + 0x40;
        uVar2 = iVar3 << 6;
        __acrt_lowio_lock_fh(uVar2);
        *(undefined1 *)((&DAT_1406328d0)[(longlong)(int)uVar2 >> 6] + 0x38) = 1;
      }
      goto LAB_1404aa54f;
    }
    for (lVar4 = lVar1; lVar4 != lVar1 + 0x1200; lVar4 = lVar4 + 0x48) {
      if ((*(byte *)(lVar4 + 0x38) & 1) == 0) {
        (*(code *)s_GetEnvironmentVariableW_14059dde4._12_8_)(lVar4);
        if ((*(byte *)(lVar4 + 0x38) & 1) == 0) {
          uVar2 = (int)((lVar4 - lVar1) / 0x48) + iVar3 * 0x40;
          *(undefined1 *)
           ((&DAT_1406328d0)[(longlong)(int)uVar2 >> 6] + 0x38 + (ulonglong)(uVar2 & 0x3f) * 0x48) =
               1;
          *(undefined8 *)
           ((&DAT_1406328d0)[(longlong)(int)uVar2 >> 6] + 0x28 + (ulonglong)(uVar2 & 0x3f) * 0x48) =
               0xffffffffffffffff;
          goto LAB_1404aa54f;
        }
        (*_DAT_14059e0c8)(lVar4);
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

