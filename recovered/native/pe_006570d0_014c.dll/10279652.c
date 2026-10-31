/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10279652 */

/* Library Function - Single Match
    class __crt_stdio_stream __cdecl find_or_allocate_unused_stream_nolock(void)
   
   Library: Visual Studio 2019 Release */

void __cdecl find_or_allocate_unused_stream_nolock(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  FILE *_File;
  int *piVar6;
  bool bVar7;
  undefined4 *in_stack_00000004;
  
  piVar6 = (int *)(DAT_103a4d4c + 0xc);
  piVar2 = piVar6 + DAT_103a4d48 + -3;
  do {
    if (piVar6 == piVar2) {
LAB_102796bb:
      *in_stack_00000004 = 0;
      return;
    }
    _File = (FILE *)*piVar6;
    if (_File == (FILE *)0x0) {
      iVar5 = FUN_10275d90(1,0x38);
      *piVar6 = iVar5;
      FUN_10274120(0);
      if (*piVar6 != 0) {
        *(undefined4 *)(*piVar6 + 0x10) = 0xffffffff;
        FUN_10274cf2(*piVar6 + 0x20,4000,0);
        _File = (FILE *)*piVar6;
        LOCK();
        _File->_flag = _File->_flag | 0x2000;
        UNLOCK();
        __lock_file(_File);
LAB_102796c6:
        *in_stack_00000004 = _File;
        return;
      }
      goto LAB_102796bb;
    }
    if (((uint)_File->_flag >> 0xd & 1) == 0) {
      __lock_file(_File);
      piVar1 = &_File->_flag;
      uVar3 = *piVar1;
      do {
        LOCK();
        uVar4 = *piVar1;
        bVar7 = uVar3 == uVar4;
        if (bVar7) {
          *piVar1 = uVar3 | 0x2000;
          uVar4 = uVar3;
        }
        UNLOCK();
        uVar3 = uVar4;
      } while (!bVar7);
      if ((~(byte)(uVar4 >> 0xd) & 1) != 0) goto LAB_102796c6;
      __unlock_file(_File);
    }
    piVar6 = piVar6 + 1;
  } while( true );
}

