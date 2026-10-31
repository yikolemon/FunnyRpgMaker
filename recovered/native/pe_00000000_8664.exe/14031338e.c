/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14031338e */

void FUN_14031338e(longlong param_1,char *param_2,char *param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  char *_Str;
  float fVar4;
  longlong lVar5;
  int iVar6;
  size_t sVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  
  fVar4 = DAT_1404bda40;
  while( true ) {
    lVar5 = DAT_14062a630;
    lVar3 = *(longlong *)(DAT_14062a630 + 0x1608);
    pcVar8 = *(char **)(DAT_14062a630 + 0x2a68);
    _Str = *(char **)(DAT_14062a630 + 0x2a70);
    *(undefined8 *)(DAT_14062a630 + 0x2a68) = 0;
    *(undefined8 *)(lVar5 + 0x2a70) = 0;
    if (param_3 == (char *)0x0) {
      param_3 = (char *)FUN_140313264(param_2,0);
    }
    if (param_1 != 0) {
      fVar1 = *(float *)(param_1 + 4);
      fVar2 = *(float *)(lVar5 + 0x2a78);
      fVar11 = (float)FUN_140313933(*(undefined4 *)(lVar5 + 0xdf8),*(undefined4 *)(lVar5 + 0xe08));
      *(undefined4 *)(lVar5 + 0x2a78) = *(undefined4 *)(param_1 + 4);
      if (fVar11 + fVar2 + fVar4 < fVar1) {
        FUN_140326cad((longlong)L" Rpg Maker MV/MZ Engine" + 0x13);
        *(undefined1 *)(lVar5 + 0x2a41) = 1;
      }
    }
    if (pcVar8 != (char *)0x0) {
      sVar7 = strlen(pcVar8);
      FUN_14031338e(param_1,pcVar8,pcVar8 + sVar7);
    }
    iVar9 = *(int *)(lVar3 + 0x1e0);
    iVar6 = *(int *)(lVar5 + 0x2a7c);
    iVar10 = iVar9;
    if (iVar9 < *(int *)(lVar5 + 0x2a7c)) {
      *(int *)(lVar5 + 0x2a7c) = iVar9;
      iVar10 = *(int *)(lVar3 + 0x1e0);
      iVar6 = iVar9;
    }
    do {
      pcVar8 = (char *)FUN_14030fdfe(param_2);
      if ((param_2 != pcVar8) || (pcVar8 != param_3)) {
        iVar9 = 1;
        if (*(char *)(lVar5 + 0x2a41) != '\0') {
          iVar9 = (iVar10 - iVar6) * 4;
        }
        FUN_140326cad(" not integer",iVar9,L"pNonPic",(int)pcVar8 - (int)param_2,param_2);
        *(undefined1 *)(lVar5 + 0x2a41) = 0;
        if (*pcVar8 == '\n') {
          FUN_140326cad((longlong)L" Rpg Maker MV/MZ Engine" + 0x13);
          *(undefined1 *)(lVar5 + 0x2a41) = 1;
        }
      }
      param_2 = pcVar8 + 1;
    } while (pcVar8 != param_3);
    if (_Str == (char *)0x0) break;
    sVar7 = strlen(_Str);
    param_3 = _Str + sVar7;
    param_2 = _Str;
  }
  return;
}

