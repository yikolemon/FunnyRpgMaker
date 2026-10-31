/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140452780 */

undefined8 * FUN_140452780(undefined8 *param_1,undefined8 param_2,undefined4 param_3,char param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  wchar_t *pwVar6;
  undefined1 local_58 [48];
  
  *(undefined4 *)(param_1 + 1) = param_3;
  *param_1 = &DAT_1404c1678;
  puVar2 = (undefined8 *)FUN_140498a30();
  FUN_14044e840(local_58);
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  pwVar6 = L"pNonPic";
  if (param_4 == '\0') {
    pwVar6 = (wchar_t *)puVar2[2];
  }
  lVar4 = -1;
  do {
    lVar3 = lVar4;
    lVar4 = lVar3 + 1;
  } while (*(char *)((longlong)pwVar6 + lVar4) != '\0');
  lVar3 = lVar3 + 2;
  lVar4 = _calloc_base(lVar3,1);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14044ac40();
  }
  if (lVar3 != 0) {
    FUN_1404b97c0(lVar4,pwVar6,lVar3);
  }
  param_1[2] = lVar4;
  pcVar5 = (char *)_calloc_base(6,1);
  if (pcVar5 != (char *)0x0) {
    *(undefined4 *)pcVar5 = s_host_unreachable_1405989f0._0_4_;
    *(undefined2 *)(pcVar5 + 4) = s_host_unreachable_1405989f0._4_2_;
    param_1[4] = pcVar5;
    pcVar5 = (char *)_calloc_base(5,1);
    if (pcVar5 != (char *)0x0) {
      *(undefined4 *)pcVar5 = s_no_message_available_1405989d8._12_4_;
      pcVar5[4] = s_no_message_available_1405989d8[0x10];
      param_1[5] = pcVar5;
      if (param_4 == '\0') {
        *(undefined1 *)(param_1 + 3) = *(undefined1 *)*puVar2;
        uVar1 = *(undefined1 *)puVar2[1];
      }
      else {
        *(undefined1 *)(param_1 + 3) = 0x2e;
        uVar1 = 0x2c;
      }
      *(undefined1 *)((longlong)param_1 + 0x19) = uVar1;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14044ac40();
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044ac40();
}

