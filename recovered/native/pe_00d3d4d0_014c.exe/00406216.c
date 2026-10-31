/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00406216 */

undefined4 * FUN_00406216(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint *puVar5;
  
  if (param_2 == 1) {
    *(undefined8 *)(param_1 + 1) = 0;
    param_1[3] = 0;
    pcVar4 = (char *)FUN_0047f230(0x20);
    *param_1 = pcVar4;
    param_1[4] = 0x15;
    param_1[5] = 0x1f;
    uVar3 = s_iostream_stream_error_004a87cc._12_4_;
    uVar2 = s_iostream_stream_error_004a87cc._8_4_;
    uVar1 = s_iostream_stream_error_004a87cc._4_4_;
    *(undefined4 *)pcVar4 = s_iostream_stream_error_004a87cc._0_4_;
    *(undefined4 *)(pcVar4 + 4) = uVar1;
    *(undefined4 *)(pcVar4 + 8) = uVar2;
    *(undefined4 *)(pcVar4 + 0xc) = uVar3;
    *(ulonglong *)(pcVar4 + 0xd) =
         CONCAT53(s_iostream_stream_error_004a87cc._16_5_,s_iostream_stream_error_004a87cc._13_3_);
    pcVar4[0x15] = '\0';
    return param_1;
  }
  puVar5 = (uint *)std::_Syserror_map(param_2);
  FUN_00402bae(param_1,puVar5);
  return param_1;
}

