/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044853a */

int __fastcall FUN_0044853a(int *param_1,int *param_2,int param_3,int param_4)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined3 extraout_var;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  uint *puVar8;
  char *pcVar9;
  undefined *puVar10;
  bool bVar11;
  char *pcVar12;
  uint uStack_2c;
  char *pcStack_28;
  int *piStack_24;
  char *pcStack_20;
  int iStack_1c;
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&uStack_2c;
  *param_2 = param_3;
  pcVar9 = (char *)(param_3 + param_4);
  param_2[2] = (int)pcVar9;
  param_2[3] = 0;
  (*(code *)param_2[7])(param_2);
  pcVar7 = (char *)*param_2;
  if (pcVar9 <= pcVar7) {
LAB_00448915:
    iVar6 = param_2[3];
LAB_00448918:
    if (DAT_0050e8c0 != (local_14 ^ (uint)&uStack_2c)) {
                    /* WARNING: Subroutine does not return */
      FUN_0047f2c0(local_14 ^ (uint)&uStack_2c);
    }
    return iVar6;
  }
  pcStack_20 = (char *)0x0;
  uStack_2c = 0;
LAB_00448584:
  cVar1 = *pcVar7;
  if (cVar1 == 'F') {
    if (pcVar7 + 0xe == pcVar9) goto LAB_00448823;
    if (pcVar7 + 0xe < pcVar9) {
      uVar3 = (uint)(byte)pcVar7[0xd];
      if (uVar3 < 0x5b) {
        if (((uVar3 - 0x20 < 0x1f) && ((0x50008321U >> (uVar3 - 0x20 & 0x1f) & 1) != 0)) ||
           ((uVar3 < 0xe && ((0x3601U >> (uVar3 & 0x1f) & 1) != 0)))) goto LAB_00448823;
      }
      else if (uVar3 < 0x7b) {
        if ((uVar3 == 0x5b) || (uVar3 == 0x5d)) {
LAB_00448823:
          uVar3 = FUN_00493180((int)pcVar7,(uint *)"FontDirectory",0xd);
          if (uVar3 == 0) {
            if ((param_2[0x59] & 1U) != 0) {
              param_2[0x59] = param_2[0x59] | 2;
            }
            *param_2 = (int)(pcVar7 + 0xd);
            goto LAB_0044889e;
          }
        }
      }
      else if ((uVar3 == 0x7d) || (uVar3 == 0x7b)) goto LAB_00448823;
    }
LAB_0044888a:
    (*(code *)param_2[8])(param_2);
    if (param_2[3] != 0) goto LAB_00448915;
  }
  else {
    if (cVar1 == 'c') {
      if (pcVar7 + 10 == pcVar9) goto LAB_004487f9;
      if (pcVar9 <= pcVar7 + 10) goto LAB_0044888a;
      uVar3 = (uint)(byte)pcVar7[9];
      if (uVar3 < 0x5b) {
        if (((uVar3 - 0x20 < 0x1f) && ((0x50008321U >> (uVar3 - 0x20 & 0x1f) & 1) != 0)) ||
           ((uVar3 < 0xe && ((0x3601U >> (uVar3 & 0x1f) & 1) != 0)))) goto LAB_004487f9;
      }
      else if (uVar3 < 0x7b) {
        if ((uVar3 == 0x5b) || (uVar3 == 0x5d)) {
LAB_004487f9:
          uVar3 = 9;
          pcVar12 = "closefile";
LAB_00448879:
          uVar3 = FUN_00493180((int)pcVar7,(uint *)pcVar12,uVar3);
          if (uVar3 == 0) goto LAB_00448915;
        }
      }
      else if ((uVar3 == 0x7d) || (uVar3 == 0x7b)) goto LAB_004487f9;
      goto LAB_0044888a;
    }
    if (cVar1 == 'e') {
      if (pcVar7 + 6 == pcVar9) goto LAB_00448872;
      if (pcVar7 + 6 < pcVar9) {
        uVar3 = (uint)(byte)pcVar7[5];
        if (uVar3 < 0x5b) {
          if (((uVar3 - 0x20 < 0x1f) && ((0x50008321U >> (uVar3 - 0x20 & 0x1f) & 1) != 0)) ||
             ((uVar3 < 0xe && ((0x3601U >> (uVar3 & 0x1f) & 1) != 0)))) goto LAB_00448872;
        }
        else if (uVar3 < 0x7b) {
          if ((uVar3 == 0x5b) || (uVar3 == 0x5d)) {
LAB_00448872:
            uVar3 = 5;
            pcVar12 = "eexec";
            goto LAB_00448879;
          }
        }
        else if ((uVar3 == 0x7d) || (uVar3 == 0x7b)) goto LAB_00448872;
      }
      goto LAB_0044888a;
    }
    if ((byte)(cVar1 - 0x30U) < 10) {
      uVar4 = (*(code *)param_2[8])(param_2);
      uStack_2c = CONCAT31((int3)((uint)uVar4 >> 8),1);
      pcStack_20 = pcVar7;
      if (param_2[3] != 0) goto LAB_00448915;
      goto LAB_0044889e;
    }
    if (pcVar9 <= pcVar7 + 6 || cVar1 != 'R') {
      if (cVar1 == '-' && pcVar7 + 6 < pcVar9) {
        bVar11 = pcVar7[1] == '|';
        goto LAB_004486b0;
      }
      if (pcVar9 <= pcVar7 + 2 || cVar1 != '/') goto LAB_0044888a;
      puVar8 = (uint *)(pcVar7 + 1);
      *param_2 = (int)puVar8;
      (*(code *)param_2[8])(param_2);
      if (param_2[3] == 0) {
        uVar3 = *param_2 - (int)puVar8;
        if (((char *)*param_2 < pcVar9 && uVar3 != 0) && uVar3 < 0x16) {
          puVar10 = &DAT_004e32e4;
          uVar5 = 7;
          uStack_2c = uVar3;
          pcStack_28 = pcVar9;
          piStack_24 = param_1;
          do {
            if (uVar5 == uVar3) {
              puVar2 = *(uint **)(puVar10 + 4);
              iVar6 = FUN_00485bd0(puVar8,puVar2,uVar3);
              uVar3 = uStack_2c;
              if (iVar6 == 0) {
                param_1 = piStack_24;
                if (((*(uint *)(puVar10 + 0x24) & (param_2[0x59] & 1U) + 1) != 0) &&
                   (((param_2[0x59] & 2U) == 0 ||
                    (uVar3 = FUN_00493010((byte *)puVar2,(byte *)"CharStrings"),
                    param_1 = piStack_24, uVar3 == 0)))) {
                  param_1 = piStack_24;
                  iVar6 = FUN_00448f30(piStack_24,param_2,(int)puVar10);
                  param_2[3] = iVar6;
                  if (iVar6 != 0) {
                    if ((char)iVar6 != -0x5e) goto LAB_00448918;
                    param_2[3] = 0;
                    pcVar9 = pcStack_28;
                    goto LAB_00448897;
                  }
                }
                break;
              }
            }
            uVar5 = *(uint *)(puVar10 + 0x28);
            puVar10 = puVar10 + 0x28;
            param_1 = piStack_24;
          } while (uVar5 != 0);
          uStack_2c = 0;
          pcVar9 = pcStack_28;
          goto LAB_0044889e;
        }
        goto LAB_00448897;
      }
      goto LAB_00448915;
    }
    bVar11 = pcVar7[1] == 'D';
LAB_004486b0:
    if (!(bool)((char)uStack_2c != '\0' & bVar11)) goto LAB_0044888a;
    *param_2 = (int)pcStack_20;
    bVar11 = FUN_00448ebc(param_2,&iStack_18,&iStack_1c,*(int *)(param_1[0x20] + 0x34) != 0);
    if (CONCAT31(extraout_var,bVar11) == 0) {
      iVar6 = 3;
      goto LAB_00448918;
    }
  }
LAB_00448897:
  uStack_2c = 0;
LAB_0044889e:
  (*(code *)param_2[7])(param_2);
  pcVar7 = (char *)*param_2;
  if (pcVar9 <= pcVar7) goto LAB_00448915;
  goto LAB_00448584;
}

