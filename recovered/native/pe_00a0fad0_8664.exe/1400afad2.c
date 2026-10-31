/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400afad2 */

uint FUN_1400afad2(undefined8 param_1,undefined4 *param_2)

{
  byte *_Str;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  short sVar9;
  ulonglong uVar10;
  
  _Str = (byte *)FUN_1400afc2f();
  sVar1 = strlen((char *)_Str);
  iVar7 = (int)sVar1;
  if (iVar7 == 0) {
    *param_2 = 0;
    uVar8 = 4;
  }
  else {
    uVar8 = iVar7 + 7;
    if (-1 < (int)(iVar7 + 4U)) {
      uVar8 = iVar7 + 4U;
    }
    *(short *)param_2 = (short)((int)uVar8 >> 2);
    uVar10 = 0;
    FUN_1401366a0(param_2 + 1,0);
    FUN_140136ae0((longlong)param_2 + (longlong)(int)(uVar8 & 0xfffffffc) + 4,_Str);
    bVar2 = *_Str;
    if (bVar2 == 0) {
      sVar9 = 0;
    }
    else {
      sVar9 = 0;
      pbVar6 = _Str;
      do {
        if ((byte)(bVar2 + 0x7f) < 0x1f) {
code_r0x0001400afb61:
          *(undefined2 *)((longlong)param_2 + uVar10 + 4) = *(undefined2 *)pbVar6;
          uVar4 = (ushort)pbVar6[1] + (ushort)*pbVar6;
          uVar5 = 2;
        }
        else {
          if (bVar2 < 0xe0) {
            bVar3 = bVar2 - 0x20;
            if (0x19 < (byte)(bVar2 + 0x9f)) {
              bVar3 = bVar2;
            }
          }
          else {
            bVar3 = bVar2;
            if (bVar2 < 0xfd) goto code_r0x0001400afb61;
          }
          *(byte *)((longlong)param_2 + uVar10 + 4) = bVar3;
          uVar4 = (ushort)bVar3;
          uVar5 = 1;
        }
        uVar10 = (ulonglong)uVar5 + (uVar10 & 0xffffffff);
        sVar9 = uVar4 + sVar9;
        pbVar6 = _Str + uVar10;
        bVar2 = _Str[uVar10];
      } while (bVar2 != 0);
    }
    *(short *)((longlong)param_2 + 2) = sVar9;
    thunk_FUN_1400ddcd0(_Str);
    uVar8 = ((int)uVar8 >> 2) << 3 | 4;
  }
  return uVar8;
}

