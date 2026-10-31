/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026d573 */

undefined4 FUN_1026d573(FILE *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == (FILE *)0x0) {
    *(undefined1 *)(param_2 + 0x1c) = 1;
    *(undefined4 *)(param_2 + 0x18) = 0x16;
    FUN_10274034(0,0,0,0,0,param_2);
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0xffffffff;
    if (((uint)param_1->_flag >> 0xd & 1) != 0) {
      uVar1 = FUN_1026d759(param_1,param_2);
      ___acrt_stdio_free_buffer_nolock(param_1);
      iVar2 = __fileno(param_1);
      iVar2 = FUN_1027e800(iVar2,param_2);
      if (iVar2 < 0) {
        uVar1 = 0xffffffff;
      }
      else if (param_1->_tmpfname != (char *)0x0) {
        FUN_10274120(param_1->_tmpfname);
        param_1->_tmpfname = (char *)0x0;
      }
    }
    __acrt_stdio_free_stream(param_1);
  }
  return uVar1;
}

