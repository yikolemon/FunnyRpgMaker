/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140088370 */

longlong * FUN_140088370(longlong *param_1,undefined8 param_2,char param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_68 [4];
  longlong local_58 [6];
  
  lVar7 = 0;
  if (param_4 != 0) {
    *param_1 = (longlong)&DAT_1400bc0b8;
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
  lVar8 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  *(undefined8 *)(lVar8 + 0x40) = 0;
  *(undefined8 *)(lVar8 + 8) = 0;
  *(undefined4 *)(lVar8 + 0x14) = 0;
  *(undefined4 *)(lVar8 + 0x18) = 0x201;
  *(undefined8 *)(lVar8 + 0x20) = 6;
  *(undefined8 *)(lVar8 + 0x28) = 0;
  *(undefined8 *)(lVar8 + 0x30) = 0;
  *(undefined8 *)(lVar8 + 0x38) = 0;
  FUN_140087320(lVar8,0);
  lVar2 = FUN_1400863a0(0x10);
  if (lVar2 != 0) {
    plVar3 = FUN_140086860('\x01');
    *(longlong **)(lVar2 + 8) = plVar3;
    lVar7 = lVar2;
  }
  *(longlong *)(lVar8 + 0x40) = lVar7;
  *(undefined8 *)(lVar8 + 0x48) = param_2;
  *(undefined8 *)(lVar8 + 0x50) = 0;
  uVar4 = FUN_14000627c(lVar8,0x20);
  *(short *)(lVar8 + 0x58) = (short)uVar4;
  if (*(longlong *)(lVar8 + 0x48) == 0) {
    *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) & 0x13;
    *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 4;
    uVar1 = *(uint *)(lVar8 + 0x10) & *(uint *)(lVar8 + 0x14);
    if (uVar1 != 0) {
      if ((uVar1 & 4) == 0) {
        pcVar6 = "ios_base::failbit set";
        if ((uVar1 & 2) == 0) {
          pcVar6 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar6 = "ios_base::badbit set";
      }
      puVar5 = (undefined8 *)FUN_140086db0(local_68,1);
      FUN_140005de2(local_58,pcVar6,puVar5);
                    /* WARNING: Subroutine does not return */
      FUN_14008c800(local_58,&DAT_140121678);
    }
  }
  if (param_3 != '\0') {
    FUN_140089550(lVar8);
  }
  return param_1;
}

