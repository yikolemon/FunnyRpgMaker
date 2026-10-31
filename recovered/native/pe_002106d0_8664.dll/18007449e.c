/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007449e */

undefined8 * FUN_18007449e(undefined8 param_1,undefined8 *param_2,int param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (param_3 == 1) {
    param_2[1] = 0;
    pcVar1 = (char *)FUN_180239630(0x20);
    *param_2 = pcVar1;
    param_2[2] = 0x15;
    param_2[3] = 0x1f;
    uVar2 = s_iostream_stream_error_1802b8630._8_8_;
    *(undefined8 *)pcVar1 = s_iostream_stream_error_1802b8630._0_8_;
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
    uVar2 = FUN_1802396f0(param_3);
    FUN_180001e92(param_2,uVar2);
  }
  return param_2;
}

