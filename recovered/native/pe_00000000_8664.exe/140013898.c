/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140013898 */

undefined8 * FUN_140013898(undefined8 param_1,undefined8 *param_2,int param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (param_3 == 1) {
    param_2[1] = 0;
    pcVar1 = (char *)FUN_1401887b0(0x20);
    *param_2 = pcVar1;
    param_2[2] = 0x15;
    param_2[3] = 0x1f;
    uVar2 = s_iostream_stream_error_1401c9320._8_8_;
    *(undefined8 *)pcVar1 = s_iostream_stream_error_1401c9320._0_8_;
    *(undefined8 *)(pcVar1 + 8) = uVar2;
    pcVar1[0xd] = 'a';
    pcVar1[0xe] = 'm';
    pcVar1[0xf] = ' ';
    pcVar1[0x10] = 'e';
    pcVar1[0x11] = 'r';
    pcVar1[0x12] = 'r';
    pcVar1[0x13] = 'o';
    pcVar1[0x14] = 'r';
    pcVar1[0x15] = '\0';
  }
  else {
    uVar2 = FUN_140189650(param_3);
    FUN_1400027d2(param_2,uVar2);
  }
  return param_2;
}

