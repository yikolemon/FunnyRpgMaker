/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180284848 */

undefined4 FUN_180284848(FILE *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == (FILE *)0x0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 0x16;
    FUN_180290c30(0,0,0,0,0,param_2);
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0xffffffff;
    if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xd & 1) != 0) {
      uVar1 = FUN_180284ab0();
      __acrt_stdio_free_buffer_nolock(param_1);
      iVar2 = _fileno(param_1);
      iVar2 = FUN_18029dae8(iVar2,param_2);
      if (iVar2 < 0) {
        uVar1 = 0xffffffff;
      }
      else if (param_1->_tmpfname != (char *)0x0) {
        FUN_180290e40();
        param_1->_tmpfname = (char *)0x0;
      }
    }
    __acrt_stdio_free_stream(param_1);
  }
  return uVar1;
}

