/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d100e */

int FUN_1801d100e(undefined8 *param_1,undefined8 param_2,char *param_3,longlong *param_4,
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
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_68;
  sVar5 = strlen(param_3);
  lVar6 = FUN_1801cc006(*param_1,(int)sVar5 + 0x12,&local_3c);
  if (local_3c == 0) {
    lVar7 = (longlong)(int)sVar5;
    FUN_1802a82f0(lVar6,param_3,lVar7);
    uVar4 = s____namedfork_rsrc_18036b4bc._12_4_;
    uVar3 = s____namedfork_rsrc_18036b4bc._8_4_;
    uVar2 = s____namedfork_rsrc_18036b4bc._4_4_;
    pcVar1 = (char *)(lVar6 + lVar7);
    *(undefined4 *)pcVar1 = s____namedfork_rsrc_18036b4bc._0_4_;
    *(undefined4 *)(pcVar1 + 4) = uVar2;
    *(undefined4 *)(pcVar1 + 8) = uVar3;
    *(undefined4 *)(pcVar1 + 0xc) = uVar4;
    *(undefined2 *)(lVar6 + 0x10 + lVar7) = 99;
    *param_4 = lVar6;
    *param_5 = 0;
  }
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_68)) {
    return local_3c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_68);
}

