/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025dceb */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_1025dceb(undefined4 param_1,int param_2,undefined2 *param_3,int *param_4,int *param_5,
                 int param_6)

{
  ushort uVar1;
  short sVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  ushort *puVar9;
  short *psVar10;
  ushort *puVar11;
  undefined4 uVar12;
  undefined4 local_20;
  short local_18;
  short local_16;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if (param_2 == 0) {
    puVar11 = *(ushort **)(param_6 + 0x154);
  }
  else if (param_2 == 1) {
    puVar11 = *(ushort **)(param_6 + 0x158);
  }
  else {
    puVar11 = *(ushort **)(param_6 + 0x15c);
  }
  if (*(int *)(param_6 + 0xac) == 1) goto LAB_1025de92;
  local_18 = param_3[10] + 0x76c;
  local_16 = param_3[8] + 1;
  local_12 = param_3[6];
  local_10 = param_3[4];
  local_e = param_3[2];
  local_c = *param_3;
  local_a = 0;
  if (param_2 == 2) {
    iVar5 = ___acrt_GetTimeFormatEx_24(*(undefined4 *)(param_6 + 0x160),0,&local_18,puVar11,0,0);
  }
  else {
    iVar5 = ___acrt_GetDateFormatEx_28(*(undefined4 *)(param_6 + 0x160),0,&local_18,puVar11,0,0,0);
  }
  if (iVar5 == 0) goto LAB_1025de92;
  uVar6 = iVar5 * 2 + 8;
  uVar6 = -(uint)((uint)(iVar5 * 2) < uVar6) & uVar6;
  if (uVar6 != 0) {
    if (uVar6 < 0x401) {
      puVar7 = (undefined4 *)&stack0xffffffc4;
      if (&stack0x00000000 != (undefined1 *)0x3c) {
LAB_1025de04:
        puVar7 = puVar7 + 2;
        if (puVar7 != (undefined4 *)0x0) {
          puVar3 = puVar7;
          if (param_2 == 2) {
            iVar5 = ___acrt_GetTimeFormatEx_24
                              (*(undefined4 *)(param_6 + 0x160),0,&local_18,puVar11,puVar7,iVar5);
          }
          else {
            iVar5 = ___acrt_GetDateFormatEx_28
                              (*(undefined4 *)(param_6 + 0x160),0,&local_18,puVar11,puVar7,iVar5,0);
          }
          while ((iVar5 = iVar5 + -1, 0 < iVar5 && (*param_5 != 0))) {
            *(undefined2 *)*param_4 = *(undefined2 *)puVar3;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 + -1;
            puVar3 = (undefined4 *)((int)puVar3 + 2);
          }
          FUN_10234d10(puVar7);
LAB_1025de71:
                    /* WARNING: Subroutine does not return */
          FUN_102283e0();
        }
      }
    }
    else {
      puVar7 = (undefined4 *)FUN_10274170(uVar6);
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0xdddd;
        goto LAB_1025de04;
      }
    }
  }
  FUN_10234d10(0);
LAB_1025de92:
  uVar1 = *puVar11;
  do {
    if ((uVar1 == 0) || (*param_5 == 0)) goto LAB_1025de71;
    local_20 = 0;
    uVar6 = 0;
    puVar9 = puVar11;
    do {
      uVar8 = uVar6;
      puVar9 = puVar9 + 1;
      uVar6 = uVar8 + 1;
    } while (*puVar9 == *puVar11);
    uVar1 = *puVar11;
    if (uVar1 < 0x65) {
      if (uVar1 == 100) {
        if (uVar8 == 0) {
          local_20 = 1;
        }
        else if (uVar8 != 1) {
          if (uVar8 == 2) {
            uVar12 = 0x61;
          }
          else {
            if (uVar8 != 3) goto LAB_1025e0c4;
            uVar12 = 0x41;
          }
          goto LAB_1025e0de;
        }
        uVar12 = 100;
        goto LAB_1025e0de;
      }
      if (uVar1 != 0x27) {
        if (uVar1 != 0x41) {
          if (uVar1 == 0x48) {
            if (uVar8 == 0) {
              local_20 = 1;
            }
            else if (uVar6 != 2) goto LAB_1025e0c4;
            uVar12 = 0x48;
            goto LAB_1025e0de;
          }
          if (uVar1 == 0x4d) {
            if (uVar8 == 0) {
              local_20 = 1;
            }
            else if (uVar8 != 1) {
              if (uVar8 == 2) {
                uVar12 = 0x62;
              }
              else {
                if (uVar8 != 3) goto LAB_1025e0c4;
                uVar12 = 0x42;
              }
              goto LAB_1025e0de;
            }
            uVar12 = 0x6d;
            goto LAB_1025e0de;
          }
          if (uVar1 != 0x61) goto LAB_1025e0c4;
        }
        iVar5 = FUN_1026b1a0(puVar11,L"am/pm");
        if (iVar5 == 0) {
          puVar9 = puVar11 + 5;
        }
        else {
          iVar5 = FUN_1026b1a0(puVar11,&DAT_10358bbc);
          if (iVar5 == 0) {
            puVar9 = puVar11 + 3;
          }
        }
        uVar12 = 0x70;
        goto LAB_1025e0de;
      }
      puVar9 = puVar11 + uVar6;
      if ((uVar6 & 1) != 0) {
        uVar1 = *puVar9;
        if (uVar1 == 0) goto LAB_1025de71;
        do {
          if ((*param_5 == 0) || (puVar9 = puVar9 + 1, uVar1 == 0x27)) break;
          *(ushort *)*param_4 = uVar1;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          uVar1 = *puVar9;
        } while (uVar1 != 0);
      }
    }
    else {
      if (uVar1 == 0x68) {
        if (uVar8 == 0) {
          local_20 = 1;
        }
        else if (uVar6 != 2) goto LAB_1025e0c4;
        uVar12 = 0x49;
      }
      else if (uVar1 == 0x6d) {
        if (uVar8 == 0) {
          local_20 = 1;
        }
        else if (uVar6 != 2) goto LAB_1025e0c4;
        uVar12 = 0x4d;
      }
      else if (uVar1 == 0x73) {
        if (uVar8 == 0) {
          local_20 = 1;
        }
        else if (uVar6 != 2) goto LAB_1025e0c4;
        uVar12 = 0x53;
      }
      else {
        if (uVar1 == 0x74) {
          if (*(int *)(param_3 + 4) < 0xc) {
            psVar10 = *(short **)(param_6 + 0x14c);
          }
          else {
            psVar10 = *(short **)(param_6 + 0x150);
          }
          if ((uVar6 == 1) && (*param_5 != 0)) {
            *(short *)*param_4 = *psVar10;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 + -1;
          }
          else {
            sVar2 = *psVar10;
            while ((sVar2 != 0 && (*param_5 != 0))) {
              psVar10 = psVar10 + 1;
              *(short *)*param_4 = sVar2;
              *param_4 = *param_4 + 2;
              *param_5 = *param_5 + -1;
              sVar2 = *psVar10;
            }
          }
          goto LAB_1025e0fa;
        }
        if (uVar1 != 0x79) {
LAB_1025e0c4:
          puVar9 = puVar11 + 1;
          *(ushort *)*param_4 = uVar1;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          goto LAB_1025e0fa;
        }
        if (uVar8 == 1) {
          uVar12 = 0x79;
        }
        else {
          if (uVar8 != 3) goto LAB_1025e0c4;
          uVar12 = 0x59;
        }
      }
LAB_1025e0de:
      cVar4 = FUN_1025d323(param_1,uVar12,param_3,param_4,param_5,param_6,local_20);
      if (cVar4 == '\0') {
        puVar7 = (undefined4 *)FUN_10268ffd();
        *puVar7 = 0x16;
        goto LAB_1025de71;
      }
    }
LAB_1025e0fa:
    uVar1 = *puVar9;
    puVar11 = puVar9;
  } while( true );
}

