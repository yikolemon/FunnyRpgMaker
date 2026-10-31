/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017279f */

undefined4 __fastcall FUN_1017279f(uint *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *_Dst;
  size_t _Size;
  char *pcVar6;
  
  _Dst = (undefined1 *)param_1[5];
  do {
    if ((int)param_1[2] < 0x10) {
      if (*param_1 < param_1[1]) {
        FUN_10172a07();
      }
      else {
        if (param_1[3] != 0) {
LAB_101729ca:
          pcVar6 = "bad huffman code";
LAB_101729f5:
          FUN_10170e07(pcVar6);
          return 0;
        }
        param_1[3] = 1;
        param_1[2] = param_1[2] + 0x10;
      }
    }
    uVar1 = *(ushort *)((int)param_1 + (param_1[4] & 0x1ff) * 2 + 0x24);
    if (uVar1 == 0) {
      uVar5 = FUN_10172aab();
    }
    else {
      param_1[4] = param_1[4] >> ((byte)(uVar1 >> 9) & 0x1f);
      param_1[2] = param_1[2] - (uint)(uVar1 >> 9);
      uVar5 = uVar1 & 0x1ff;
    }
    if ((int)uVar5 < 0x100) {
      if ((int)uVar5 < 0) goto LAB_101729ca;
      if ((undefined1 *)param_1[7] <= _Dst) {
        iVar3 = FUN_10172a46(1);
        if (iVar3 == 0) {
          return 0;
        }
        _Dst = (undefined1 *)param_1[5];
      }
      *_Dst = (char)uVar5;
      _Dst = _Dst + 1;
    }
    else {
      if (uVar5 == 0x100) {
        param_1[5] = (uint)_Dst;
        if (param_1[3] == 0) {
          return 1;
        }
        pcVar6 = "unexpected end";
        if (0xf < (int)param_1[2]) {
          return 1;
        }
        goto LAB_101729f5;
      }
      pcVar6 = "bad huffman code";
      if (0x11d < uVar5) goto LAB_101729f5;
      _Size = *(size_t *)(&DAT_102ba938 + uVar5 * 4);
      if (uVar5 - 0x11d < 0xffffffec) {
        uVar5 = param_1[2];
      }
      else {
        iVar3 = *(int *)(&DAT_102ba9b4 + uVar5 * 4);
        uVar5 = param_1[2];
        if ((int)uVar5 < iVar3) {
          FUN_10172a07("bad huffman code");
          uVar5 = param_1[2];
        }
        uVar2 = param_1[4];
        param_1[4] = uVar2 >> ((byte)iVar3 & 0x1f);
        uVar5 = uVar5 - iVar3;
        _Size = _Size + (~(-1 << ((byte)iVar3 & 0x1f)) & uVar2);
        param_1[2] = uVar5;
      }
      if ((int)uVar5 < 0x10) {
        if (*param_1 < param_1[1]) {
          FUN_10172a07(pcVar6);
        }
        else {
          if (param_1[3] != 0) goto LAB_101729f5;
          param_1[3] = 1;
          param_1[2] = uVar5 + 0x10;
        }
      }
      uVar1 = *(ushort *)((int)param_1 + (param_1[4] & 0x1ff) * 2 + 0x808);
      if (uVar1 == 0) {
        uVar5 = FUN_10172aab();
      }
      else {
        param_1[4] = param_1[4] >> ((byte)(uVar1 >> 9) & 0x1f);
        param_1[2] = param_1[2] - (uint)(uVar1 >> 9);
        uVar5 = uVar1 & 0x1ff;
      }
      if (0x1d < uVar5) goto LAB_101729f5;
      iVar3 = *(int *)(&DAT_102bae34 + uVar5 * 4);
      if (3 < uVar5) {
        iVar4 = *(int *)(&DAT_102baeb4 + uVar5 * 4);
        uVar5 = param_1[2];
        if ((int)uVar5 < iVar4) {
          FUN_10172a07();
          uVar5 = param_1[2];
        }
        uVar2 = param_1[4];
        param_1[4] = uVar2 >> ((byte)iVar4 & 0x1f);
        param_1[2] = uVar5 - iVar4;
        iVar3 = iVar3 + (~(-1 << ((byte)iVar4 & 0x1f)) & uVar2);
      }
      if ((int)((int)_Dst - param_1[6]) < iVar3) {
        pcVar6 = "bad dist";
        goto LAB_101729f5;
      }
      if ((int)(param_1[7] - (int)_Dst) < (int)_Size) {
        iVar4 = FUN_10172a46(_Size);
        if (iVar4 == 0) {
          return 0;
        }
        _Dst = (undefined1 *)param_1[5];
      }
      if (iVar3 == 1) {
        if (_Size != 0) {
          _memset(_Dst,(uint)(byte)_Dst[-1],_Size);
          _Dst = _Dst + _Size;
        }
      }
      else {
        for (; _Size != 0; _Size = _Size - 1) {
          *_Dst = _Dst[-iVar3];
          _Dst = _Dst + 1;
        }
      }
    }
  } while( true );
}

