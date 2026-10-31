/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802462e0 */

longlong * FUN_1802462e0(longlong *param_1,undefined8 param_2,char param_3,int param_4)

{
  undefined2 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_68 [16];
  undefined1 local_58 [48];
  
  lVar6 = 0;
  if (param_4 != 0) {
    *param_1 = (longlong)&DAT_1802dd2d0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[2] = (longlong)std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::vftable;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    *(undefined2 *)(param_1 + 0xd) = 0;
  }
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x10;
  lVar7 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(undefined8 *)(lVar7 + 8) = 0;
  *(undefined4 *)(lVar7 + 0x14) = 0;
  *(undefined4 *)(lVar7 + 0x18) = 0x201;
  *(undefined8 *)(lVar7 + 0x20) = 6;
  *(undefined8 *)(lVar7 + 0x28) = 0;
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined8 *)(lVar7 + 0x38) = 0;
  FUN_180244950(lVar7,0);
  lVar3 = FUN_180239630(0x10);
  if (lVar3 != 0) {
    uVar4 = FUN_18023d070(1);
    *(undefined8 *)(lVar3 + 8) = uVar4;
    lVar6 = lVar3;
  }
  *(longlong *)(lVar7 + 0x40) = lVar6;
  *(undefined8 *)(lVar7 + 0x48) = param_2;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  uVar1 = FUN_1800a3fde(lVar7,0x20);
  *(undefined2 *)(lVar7 + 0x58) = uVar1;
  if (*(longlong *)(lVar7 + 0x48) == 0) {
    *(uint *)(lVar7 + 0x10) = *(uint *)(lVar7 + 0x10) & 0x13;
    *(uint *)(lVar7 + 0x10) = *(uint *)(lVar7 + 0x10) | 4;
    uVar2 = *(uint *)(lVar7 + 0x10) & *(uint *)(lVar7 + 0x14);
    if (uVar2 != 0) {
      if ((uVar2 & 4) == 0) {
        pcVar5 = "ios_base::failbit set";
        if ((uVar2 & 2) == 0) {
          pcVar5 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar5 = "ios_base::badbit set";
      }
      uVar4 = FUN_180244930(local_68,1);
      FUN_1800742d8(local_58,pcVar5,uVar4);
                    /* WARNING: Subroutine does not return */
      FUN_18026d5b0(local_58,&DAT_1803a63f8);
    }
  }
  if (param_3 != '\0') {
    FUN_18023ee80(lVar7);
  }
  return param_1;
}

