/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012ffe2 */

int FUN_14012ffe2(undefined8 *param_1,undefined8 param_2,char *param_3,longlong *param_4,
                 undefined4 *param_5)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  size_t sVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [44];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  sVar5 = strlen(param_3);
  lVar6 = FUN_14012afda(*param_1,(int)sVar5 + 0x12,&local_3c);
  if (local_3c == 0) {
    lVar7 = (longlong)(int)sVar5;
    FUN_1401c5180(lVar6,param_3,lVar7);
    uVar4 = s____namedfork_rsrc_140ecbfe0._12_4_;
    uVar3 = s____namedfork_rsrc_140ecbfe0._8_4_;
    uVar2 = s____namedfork_rsrc_140ecbfe0._4_4_;
    pcVar1 = (char *)(lVar6 + lVar7);
    *(undefined4 *)pcVar1 = s____namedfork_rsrc_140ecbfe0._0_4_;
    *(undefined4 *)(pcVar1 + 4) = uVar2;
    *(undefined4 *)(pcVar1 + 8) = uVar3;
    *(undefined4 *)(pcVar1 + 0xc) = uVar4;
    *(undefined2 *)(lVar6 + 0x10 + lVar7) = 99;
    *param_4 = lVar6;
    *param_5 = 0;
  }
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_68)) {
    return local_3c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_68);
}

