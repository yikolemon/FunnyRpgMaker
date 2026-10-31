/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10073cee */

undefined4 * FUN_10073cee(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  if (param_2 == 1) {
    *(undefined8 *)(param_1 + 1) = 0;
    param_1[3] = 0;
    pcVar4 = (char *)FUN_10228350(0x20);
    *param_1 = pcVar4;
    param_1[4] = 0x15;
    param_1[5] = 0x1f;
    uVar3 = s_iostream_stream_error_10294ddc._12_4_;
    uVar2 = s_iostream_stream_error_10294ddc._8_4_;
    uVar1 = s_iostream_stream_error_10294ddc._4_4_;
    *(undefined4 *)pcVar4 = s_iostream_stream_error_10294ddc._0_4_;
    *(undefined4 *)(pcVar4 + 4) = uVar1;
    *(undefined4 *)(pcVar4 + 8) = uVar2;
    *(undefined4 *)(pcVar4 + 0xc) = uVar3;
    *(ulonglong *)(pcVar4 + 0xd) =
         CONCAT53(s_iostream_stream_error_10294ddc._16_5_,s_iostream_stream_error_10294ddc._13_3_);
    pcVar4[0x15] = '\0';
    return param_1;
  }
  pcVar4 = std::_Syserror_map(param_2);
  FUN_10001f66(pcVar4);
  return param_1;
}

