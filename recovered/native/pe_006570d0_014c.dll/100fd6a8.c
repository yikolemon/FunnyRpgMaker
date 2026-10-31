/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fd6a8 */

void FUN_100fd6a8(int param_1,char *param_2,char *param_3)

{
  float fVar1;
  char *_Str;
  int iVar2;
  size_t sVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float fVar10;
  
  while( true ) {
    iVar2 = DAT_1039d74c;
    iVar8 = *(int *)(DAT_1039d74c + 0x14cc);
    pcVar5 = *(char **)(DAT_1039d74c + 0x2764);
    _Str = *(char **)(DAT_1039d74c + 0x2768);
    *(undefined4 *)(DAT_1039d74c + 0x2768) = 0;
    *(undefined4 *)(iVar2 + 0x2764) = 0;
    if (param_3 == (char *)0x0) {
      param_3 = (char *)FUN_100fd57d(param_2,0);
    }
    if (param_1 != 0) {
      fVar1 = *(float *)(param_1 + 4);
      fVar10 = *(float *)(iVar2 + 0x276c);
      fVar9 = (float10)FUN_100fdbca(*(undefined4 *)(iVar2 + 0xd10),*(undefined4 *)(iVar2 + 0xd20));
      fVar10 = fVar10 + (float)fVar9 + DAT_1028b430;
      *(undefined4 *)(iVar2 + 0x276c) = *(undefined4 *)(param_1 + 4);
      if (fVar10 < fVar1) {
        FUN_10110bf6("\r\n");
        *(undefined1 *)(iVar2 + 0x2749) = 1;
      }
    }
    if (pcVar5 != (char *)0x0) {
      sVar3 = _strlen(pcVar5);
      FUN_100fd6a8(param_1,pcVar5,pcVar5 + sVar3);
    }
    iVar6 = *(int *)(iVar8 + 0x1cc);
    iVar4 = *(int *)(iVar2 + 0x2770);
    iVar7 = iVar6;
    if (iVar6 < *(int *)(iVar2 + 0x2770)) {
      *(int *)(iVar2 + 0x2770) = iVar6;
      iVar7 = *(int *)(iVar8 + 0x1cc);
      iVar4 = iVar6;
    }
    iVar8 = (iVar7 - iVar4) * 4;
    do {
      pcVar5 = (char *)FUN_100fa32e(param_2,param_3,iVar8);
      if ((param_2 != pcVar5) || (pcVar5 != param_3)) {
        iVar6 = 1;
        if (*(char *)(iVar2 + 0x2749) != '\0') {
          iVar6 = iVar8;
        }
        FUN_10110bf6(&DAT_1033408f,iVar6,&DAT_10356101,(int)pcVar5 - (int)param_2,param_2);
        *(undefined1 *)(iVar2 + 0x2749) = 0;
        if (*pcVar5 == '\n') {
          FUN_10110bf6("\r\n");
          *(undefined1 *)(iVar2 + 0x2749) = 1;
        }
      }
      param_2 = pcVar5 + 1;
    } while (pcVar5 != param_3);
    if (_Str == (char *)0x0) break;
    sVar3 = _strlen(_Str);
    param_3 = _Str + sVar3;
    param_2 = _Str;
  }
  return;
}

