/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140045abb */

void FUN_140045abb(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  
  FUN_1400378a0(&DAT_140f14008);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c
              ) < DAT_140f2a3b8) {
    FUN_140188840(&DAT_140f2a3b8);
    if (DAT_140f2a3b8 == -1) {
      FUN_140045ca8();
      _Init_thread_footer(&DAT_140f2a3b8);
    }
  }
  cVar3 = FUN_140085d7e("FunnyGamePlayer",&DAT_140f14001,0);
  lVar2 = DAT_140f2a910;
  if (cVar3 == '\0') goto LAB_140045ba3;
  if (DAT_140f2a3c0 == (longlong *)0x0) {
    *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
    lVar1 = *(longlong *)(lVar2 + 0x1608);
    if (*(longlong *)(*(longlong *)(lVar1 + 0x48) + 0x60) != 0) {
      plVar4 = (longlong *)FUN_1401887b0(0x40);
      *(undefined1 *)(lVar1 + 0x10b) = 1;
      FUN_140045d9e(plVar4,*(undefined8 *)
                            (*(longlong *)(*(longlong *)(lVar2 + 0x1608) + 0x48) + 0x60));
      DAT_140f2a3c0 = plVar4;
      goto LAB_140045b90;
    }
  }
  else {
LAB_140045b90:
    FUN_140045e1b();
  }
  FUN_140046918(&DAT_140f2a2d8);
LAB_140045ba3:
  FUN_140088c18();
  if (DAT_140f14001 == '\0') {
    PostQuitMessage(0);
    if (DAT_140f2a3c0 != (longlong *)0x0) {
      (**(code **)(*DAT_140f2a3c0 + 0x38))(DAT_140f2a3c0,1);
      DAT_140f2a3c0 = (longlong *)0x0;
    }
  }
  FUN_14018a340(&DAT_140f14008);
  return;
}

