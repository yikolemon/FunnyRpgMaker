/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f973f */

uint __fastcall FUN_101f973f(uint *param_1,uint param_2,undefined4 param_3,int param_4)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *_Str1;
  char *pcVar8;
  uint *puVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  char *pcStack_13c;
  char *pcStack_138;
  uint uStack_134;
  uint *puStack_130;
  int iStack_12c;
  uint *puStack_128;
  char *pcStack_124;
  undefined8 uStack_120;
  char cStack_118;
  char acStack_117 [259];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&pcStack_13c;
  param_1[0x18] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  (*(code *)**(undefined4 **)(param_4 + 4))(param_1,0,0,param_3);
  param_1[0x12] = param_2;
  iVar3 = FUN_101c4a88(param_2);
  iVar4 = FUN_101c4b69(param_2,0x1f);
  if (iVar4 == 0) {
    iStack_12c = iVar3;
    iVar3 = _strncmp(*(char **)(param_2 + 0x20),"%!PS-Adobe-3.0 Resource-CIDFont",0x1f);
    FUN_101c4c66(param_2);
    if (iVar3 == 0) {
      puStack_130 = param_1;
      if (*(int *)(param_2 + 0x14) != 0) {
        pcStack_138 = (char *)&uStack_120;
        puStack_128 = (uint *)(-6 - (int)pcStack_138);
        pcStack_13c = (char *)0x0;
        pcVar10 = (char *)0x109;
        pcVar8 = (char *)0x0;
        uStack_134 = param_2;
        do {
          uVar5 = uStack_134;
          iVar3 = *(int *)(uStack_134 + 4);
          iVar4 = FUN_101c4a88(uStack_134);
          pcVar1 = pcStack_138;
          pcVar7 = (char *)(iVar3 - iVar4);
          if (pcVar10 < pcVar7) {
            pcVar7 = pcVar10;
          }
          if ((iVar3 != iVar4) && (uVar5 = FUN_101c4659(uVar5,pcStack_138,pcVar7), uVar5 != 0))
          goto LAB_101f97dc;
          pcVar10 = pcVar1 + (int)pcVar7;
          *pcVar10 = '\0';
          pcStack_13c = pcStack_13c + (int)pcVar7;
          _Str1 = (char *)&uStack_120;
          pcStack_124 = pcVar7;
          if (_Str1 < pcVar10 + -6) {
            iVar3 = -(int)pcStack_13c;
            pcVar7 = pcVar7 + (int)(pcVar1 + (int)puStack_128);
            do {
              if ((*_Str1 == 'S') && (iVar4 = _strncmp(_Str1,"StartData",9), iVar4 == 0)) {
                iVar4 = 10;
LAB_101f98ce:
                iVar6 = FUN_101c4a88(uStack_134);
                pcVar8 = (char *)(iVar6 + iVar4 + iVar3);
              }
              else if ((_Str1[1] == 's') && (iVar4 = _strncmp(_Str1,"/sfnts",6), iVar4 == 0)) {
                iVar4 = 7;
                goto LAB_101f98ce;
              }
              _Str1 = _Str1 + 1;
              iVar3 = iVar3 + 1;
              pcVar7 = pcVar7 + -1;
            } while (pcVar7 != (char *)0x0);
          }
          if (pcStack_13c < (char *)0xa) goto LAB_101f9922;
          uStack_120 = *(undefined8 *)(pcStack_138 + (int)pcStack_124 + -9);
          cStack_118 = (pcStack_138 + (int)pcStack_124)[-1];
          pcStack_13c = (char *)0x9;
          pcVar10 = (char *)0x100;
          pcStack_138 = acStack_117;
        } while( true );
      }
      pcVar8 = *(char **)(param_2 + 4);
      goto LAB_101f993b;
    }
  }
LAB_101f97d7:
  uVar5 = 2;
  goto LAB_101f97dc;
LAB_101f9922:
  param_2 = uStack_134;
  if (pcVar8 != (char *)0x0) {
LAB_101f993b:
    pcStack_138 = pcVar8;
    iVar3 = iStack_12c;
    puVar2 = puStack_130;
    uVar5 = FUN_101c461e(param_2,iStack_12c);
    if (uVar5 != 0) goto LAB_101f97dc;
    uVar12 = (int)pcStack_138 - iVar3;
    uVar5 = FUN_101c4b40(param_2,uVar12,puVar2 + 0x13);
    if (uVar5 != 0) goto LAB_101f97dc;
    puVar2[0x15] = (uint)pcStack_138;
    puVar2[0x14] = uVar12;
    pcVar8 = (char *)puVar2[0x13];
    puVar2[1] = (uint)pcVar8;
    *puVar2 = (uint)pcVar8;
    puVar2[2] = (uint)(pcVar8 + uVar12);
    puVar2[0x18] = 0xffffffff;
    uStack_134 = param_2;
    (*(code *)puVar2[8])(puVar2);
    (*(code *)puVar2[7])(puVar2);
    pcStack_13c = (char *)*puVar2;
    (*(code *)puVar2[8])(puVar2);
    (*(code *)puVar2[7])(puVar2);
    pcVar10 = (char *)*puVar2;
    uVar12 = puVar2[2];
    pcStack_124 = (char *)(uVar12 - 6);
    if (pcVar10 <= pcStack_124) {
      puVar9 = puStack_130;
      puStack_128 = puVar2 + 0x13;
      do {
        pcVar1 = pcStack_13c;
        uVar5 = puVar9[3];
        if (uVar5 != 0) goto LAB_101f97dc;
        pcStack_13c = pcVar10;
        if ((pcVar10 <= (char *)(uVar12 - 9) && *pcVar10 == 'S') &&
           (iVar3 = _strncmp(pcVar10,"StartData",9), iVar3 == 0)) {
          *puStack_130 = (uint)pcVar8;
          (*(code *)puStack_130[0xe])(puStack_130,&uStack_120);
          puVar2 = puStack_130;
          uVar5 = 0;
          if ((uStack_120._4_4_ - (int)(int *)uStack_120 == 5) &&
             ((char)((int *)uStack_120)[1] == ')' && *(int *)uStack_120 == 0x78654828)) {
            *puStack_130 = (uint)pcVar1;
            uVar12 = (*(code *)puStack_130[9])(puStack_130);
            if ((int)uVar12 < 0) {
              uVar5 = 3;
            }
            else {
              puVar2[0x16] = uVar12;
            }
          }
          puVar2 = puStack_128;
          iVar3 = iStack_12c;
          uVar12 = uStack_134;
          pcVar8 = pcStack_13c + (10 - *puStack_128);
          if (pcVar8 != pcStack_138) {
            FUN_101c4c3e(uStack_134,puStack_128);
            uVar5 = FUN_101c461e(uVar12,iVar3);
            if (uVar5 == 0) {
              uVar11 = (int)pcVar8 - iVar3;
              uVar5 = FUN_101c4b40(uVar12,uVar11,puVar2);
              if (uVar5 == 0) {
                puStack_130[0x15] = (uint)pcVar8;
                puStack_130[0x14] = uVar11;
                uVar5 = puStack_130[0x13];
                puStack_130[1] = uVar5;
                *puStack_130 = uVar5;
                puStack_130[2] = uVar5 + uVar11;
                uVar5 = 0;
              }
            }
          }
          goto LAB_101f97dc;
        }
        if ((pcStack_13c[1] == 's') && (iVar3 = _strncmp(pcStack_13c,"/sfnts",6), iVar3 == 0))
        goto LAB_101f97d7;
        puVar9 = puStack_130;
        (*(code *)puStack_130[8])(puStack_130);
        (*(code *)puVar9[7])(puVar9);
        pcVar10 = (char *)*puVar9;
        pcVar8 = pcVar1;
      } while (pcVar10 <= pcStack_124);
    }
  }
  uVar5 = 3;
LAB_101f97dc:
  if (DAT_10388d00 != (local_14 ^ (uint)&pcStack_13c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar5;
}

