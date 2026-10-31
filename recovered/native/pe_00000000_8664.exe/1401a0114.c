/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a0114 */

/* Library Function - Single Match
    _set_fmode
   
   Library: Visual Studio 2012 Release */

errno_t __cdecl _set_fmode(int _Mode)

{
  errno_t eVar1;
  undefined4 *puVar2;
  
  if (((_Mode - 0x4000U & 0xffff3fff) == 0) && (_Mode != 0xc000)) {
    LOCK();
    UNLOCK();
    eVar1 = 0;
    DAT_140f3325c = _Mode;
  }
  else {
    puVar2 = (undefined4 *)FUN_14019e8cc();
    *puVar2 = 0x16;
    FUN_1401ae640();
    eVar1 = 0x16;
  }
  return eVar1;
}

