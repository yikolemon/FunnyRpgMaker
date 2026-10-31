/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140005fbc */

ulonglong * FUN_140005fbc(undefined8 param_1,ulonglong *param_2,int param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (param_3 == 1) {
    param_2[1] = 0;
    pcVar2 = (char *)FUN_1400863a0(0x20);
    *param_2 = (ulonglong)pcVar2;
    param_2[2] = 0x15;
    param_2[3] = 0x1f;
    uVar1 = s_iostream_stream_error_1400b69d0._8_8_;
    *(undefined8 *)pcVar2 = s_iostream_stream_error_1400b69d0._0_8_;
    *(undefined8 *)(pcVar2 + 8) = uVar1;
    pcVar2[0xd] = 'a';
    pcVar2[0xe] = 'm';
    pcVar2[0xf] = ' ';
    pcVar2[0x10] = 'e';
    pcVar2[0x11] = 'r';
    pcVar2[0x12] = 'r';
    pcVar2[0x13] = 'o';
    pcVar2[0x14] = 'r';
    pcVar2[0x15] = '\0';
  }
  else {
    pcVar2 = FUN_140086a30(param_3);
    FUN_1400029cc(param_2,pcVar2);
  }
  return param_2;
}

