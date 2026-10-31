/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140495d18 */

undefined4 FUN_140495d18(FILE *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == (FILE *)0x0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 0x16;
    FUN_1404a2100(0,0,0,0,0,param_2);
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0xffffffff;
    if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xd & 1) != 0) {
      uVar1 = FUN_140495f80();
      __acrt_stdio_free_buffer_nolock(param_1);
      iVar2 = _fileno(param_1);
      iVar2 = FUN_1404aefb8(iVar2,param_2);
      if (iVar2 < 0) {
        uVar1 = 0xffffffff;
      }
      else if (param_1->_tmpfname != (char *)0x0) {
        FUN_1404a2310();
        param_1->_tmpfname = (char *)0x0;
      }
    }
    __acrt_stdio_free_stream(param_1);
  }
  return uVar1;
}

