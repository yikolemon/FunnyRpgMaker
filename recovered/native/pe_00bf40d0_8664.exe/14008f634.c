/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008f634 */

ulonglong FUN_14008f634(__uint64 *param_1)

{
  ushort uVar1;
  short sVar2;
  __uint64 _Var3;
  short *psVar4;
  ulonglong uVar5;
  short *psVar6;
  
  uVar1 = *(ushort *)((longlong)param_1 + 0x3a);
  psVar6 = (short *)(ulonglong)uVar1;
  if (uVar1 == 0x46) {
    if ((*param_1 & 8) == 0) {
      *(undefined1 *)((longlong)param_1 + 0x24) = 7;
      uVar5 = FUN_14008f7e4(param_1);
      return uVar5;
    }
  }
  else if (uVar1 == 0x4e) {
    if ((*param_1 & 8) == 0) {
      *(undefined1 *)((longlong)param_1 + 0x24) = 8;
LAB_14008f66b:
      _Var3 = param_1[1];
      *(undefined1 *)(_Var3 + 0x30) = 1;
      *(undefined4 *)(_Var3 + 0x2c) = 0x16;
      uVar5 = FUN_1400a1080((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,(longlong *)param_1[1])
      ;
      return uVar5 & 0xffffffffffffff00;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x34) != 0) goto LAB_14008f66b;
    if (uVar1 == 0x49) {
      psVar4 = (short *)param_1[2];
      sVar2 = *psVar4;
      if ((sVar2 == 0x33) && (psVar4[1] == 0x32)) {
        psVar6 = psVar4 + 2;
        *(undefined4 *)((longlong)param_1 + 0x34) = 10;
        param_1[2] = (__uint64)psVar6;
      }
      else if (sVar2 == 0x36) {
        psVar6 = (short *)0x0;
        if (psVar4[1] == 0x34) {
          psVar6 = psVar4 + 2;
          *(undefined4 *)((longlong)param_1 + 0x34) = 0xb;
          param_1[2] = (__uint64)psVar6;
        }
      }
      else {
        psVar6 = (short *)(ulonglong)(ushort)(sVar2 - 0x58U);
        if (((ushort)(sVar2 - 0x58U) < 0x21) &&
           ((0x120821001U >> ((ulonglong)psVar6 & 0x3f) & 1) != 0)) {
          *(undefined4 *)((longlong)param_1 + 0x34) = 9;
        }
      }
    }
    else if (uVar1 == 0x4c) {
      *(undefined4 *)((longlong)param_1 + 0x34) = 8;
    }
    else if (uVar1 == 0x54) {
      *(undefined4 *)((longlong)param_1 + 0x34) = 0xd;
    }
    else {
      if (uVar1 == 0x68) {
        if (*(short *)param_1[2] == 0x68) {
          param_1[2] = (__uint64)((short *)param_1[2] + 1);
          psVar6 = (short *)0x1;
        }
        else {
          psVar6 = (short *)0x2;
        }
      }
      else {
        if (uVar1 == 0x6a) {
          *(undefined4 *)((longlong)param_1 + 0x34) = 5;
          goto LAB_14008f7da;
        }
        if (uVar1 != 0x6c) {
          if (uVar1 == 0x74) {
            *(undefined4 *)((longlong)param_1 + 0x34) = 7;
          }
          else if (uVar1 == 0x77) {
            *(undefined4 *)((longlong)param_1 + 0x34) = 0xc;
          }
          else if (uVar1 == 0x7a) {
            *(undefined4 *)((longlong)param_1 + 0x34) = 6;
          }
          goto LAB_14008f7da;
        }
        if (*(short *)param_1[2] == 0x6c) {
          param_1[2] = (__uint64)((short *)param_1[2] + 1);
          psVar6 = (short *)0x4;
        }
        else {
          psVar6 = (short *)0x3;
        }
      }
      *(int *)((longlong)param_1 + 0x34) = (int)psVar6;
    }
  }
LAB_14008f7da:
  return CONCAT71((int7)((ulonglong)psVar6 >> 8),1);
}

