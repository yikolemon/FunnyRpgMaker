/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00450eb7 */

int __fastcall FUN_00450eb7(int *param_1,int *param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  uint *puVar9;
  int *piVar10;
  char *pcVar11;
  char *pcStack_13c;
  uint *puStack_138;
  int *piStack_134;
  int *piStack_130;
  uint uStack_12c;
  int *piStack_128;
  char *pcStack_124;
  undefined8 uStack_120;
  char cStack_118;
  uint auStack_117 [64];
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&pcStack_13c;
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
  param_1[0x12] = (int)param_2;
  uVar3 = FUN_00420b00((int)param_2);
  iVar4 = FUN_00420be1(param_2,0x1f);
  if (iVar4 == 0) {
    uStack_12c = uVar3;
    uVar3 = FUN_00493180(param_2[8],(uint *)"%!PS-Adobe-3.0 Resource-CIDFont",0x1f);
    FUN_00420cde(param_2);
    if (uVar3 == 0) {
      piStack_130 = param_1;
      if (param_2[5] != 0) {
        puStack_138 = (uint *)&uStack_120;
        piStack_128 = (int *)(-6 - (int)puStack_138);
        pcStack_13c = (char *)0x0;
        pcVar11 = (char *)0x109;
        puVar9 = (uint *)0x0;
        piStack_134 = param_2;
        do {
          piVar2 = piStack_134;
          iVar4 = piStack_134[1];
          iVar5 = FUN_00420b00((int)piStack_134);
          puVar1 = puStack_138;
          pcVar7 = (char *)(iVar4 - iVar5);
          if (pcVar11 < pcVar7) {
            pcVar7 = pcVar11;
          }
          if ((iVar4 != iVar5) &&
             (iVar4 = FUN_004206d1(piVar2,puStack_138,(uint)pcVar7), iVar4 != 0)) goto LAB_00450f54;
          pcVar11 = (char *)((int)puVar1 + (int)pcVar7);
          *pcVar11 = '\0';
          pcStack_13c = pcStack_13c + (int)pcVar7;
          pcVar8 = (char *)&uStack_120;
          pcStack_124 = pcVar7;
          if (pcVar8 < pcVar11 + -6) {
            iVar4 = -(int)pcStack_13c;
            pcVar7 = pcVar7 + (int)puVar1 + (int)piStack_128;
            do {
              if ((*pcVar8 == 'S') &&
                 (uVar3 = FUN_00493180((int)pcVar8,(uint *)"StartData",9), uVar3 == 0)) {
                iVar5 = 10;
LAB_00451046:
                iVar6 = FUN_00420b00((int)piStack_134);
                puVar9 = (uint *)(iVar6 + iVar5 + iVar4);
              }
              else if ((pcVar8[1] == 's') &&
                      (uVar3 = FUN_00493180((int)pcVar8,(uint *)"/sfnts",6), uVar3 == 0)) {
                iVar5 = 7;
                goto LAB_00451046;
              }
              pcVar8 = pcVar8 + 1;
              iVar4 = iVar4 + 1;
              pcVar7 = pcVar7 + -1;
            } while (pcVar7 != (char *)0x0);
          }
          if (pcStack_13c < (char *)0xa) goto LAB_0045109a;
          uStack_120 = *(undefined8 *)((char *)((int)puStack_138 + (int)pcStack_124) + -9);
          cStack_118 = ((char *)((int)puStack_138 + (int)pcStack_124))[-1];
          pcStack_13c = (char *)0x9;
          pcVar11 = (char *)0x100;
          puStack_138 = auStack_117;
        } while( true );
      }
      puVar9 = (uint *)param_2[1];
      goto LAB_004510b3;
    }
  }
LAB_00450f4f:
  iVar4 = 2;
  goto LAB_00450f54;
LAB_0045109a:
  param_2 = piStack_134;
  if (puVar9 != (uint *)0x0) {
LAB_004510b3:
    puStack_138 = puVar9;
    uVar3 = uStack_12c;
    piVar2 = piStack_130;
    iVar4 = FUN_00420696((int)param_2,uStack_12c);
    if (iVar4 != 0) goto LAB_00450f54;
    uVar3 = (int)puStack_138 - uVar3;
    iVar4 = FUN_00420bb8(param_2,uVar3,piVar2 + 0x13);
    if (iVar4 != 0) goto LAB_00450f54;
    piVar2[0x15] = (int)puStack_138;
    piVar2[0x14] = uVar3;
    pcVar11 = (char *)piVar2[0x13];
    piVar2[1] = (int)pcVar11;
    *piVar2 = (int)pcVar11;
    piVar2[2] = (int)(pcVar11 + uVar3);
    piVar2[0x18] = -1;
    piStack_134 = param_2;
    (*(code *)piVar2[8])(piVar2);
    (*(code *)piVar2[7])(piVar2);
    pcStack_13c = (char *)*piVar2;
    (*(code *)piVar2[8])(piVar2);
    (*(code *)piVar2[7])(piVar2);
    pcVar7 = (char *)*piVar2;
    iVar5 = piVar2[2];
    pcStack_124 = (char *)(iVar5 - 6);
    if (pcVar7 <= pcStack_124) {
      piVar10 = piStack_130;
      piStack_128 = piVar2 + 0x13;
      do {
        pcVar8 = pcStack_13c;
        iVar4 = piVar10[3];
        if (iVar4 != 0) goto LAB_00450f54;
        pcStack_13c = pcVar7;
        if ((pcVar7 <= (char *)(iVar5 + -9) && *pcVar7 == 'S') &&
           (uVar3 = FUN_00493180((int)pcVar7,(uint *)"StartData",9), uVar3 == 0)) {
          *piStack_130 = (int)pcVar11;
          (*(code *)piStack_130[0xe])(piStack_130,&uStack_120);
          piVar2 = piStack_130;
          iVar4 = 0;
          if ((uStack_120._4_4_ - (int)(int *)uStack_120 == 5) &&
             ((char)((int *)uStack_120)[1] == ')' && *(int *)uStack_120 == 0x78654828)) {
            *piStack_130 = (int)pcVar8;
            iVar5 = (*(code *)piStack_130[9])(piStack_130);
            if (iVar5 < 0) {
              iVar4 = 3;
            }
            else {
              piVar2[0x16] = iVar5;
            }
          }
          piVar10 = piStack_128;
          uVar3 = uStack_12c;
          piVar2 = piStack_134;
          puVar9 = (uint *)(pcStack_13c + (10 - *piStack_128));
          if (puVar9 != puStack_138) {
            FUN_00420cb6((int)piStack_134,piStack_128);
            iVar4 = FUN_00420696((int)piVar2,uVar3);
            if (iVar4 == 0) {
              uVar3 = (int)puVar9 - uVar3;
              iVar4 = FUN_00420bb8(piVar2,uVar3,piVar10);
              if (iVar4 == 0) {
                piStack_130[0x15] = (int)puVar9;
                piStack_130[0x14] = uVar3;
                iVar4 = piStack_130[0x13];
                piStack_130[1] = iVar4;
                *piStack_130 = iVar4;
                piStack_130[2] = iVar4 + uVar3;
                iVar4 = 0;
              }
            }
          }
          goto LAB_00450f54;
        }
        if ((pcStack_13c[1] == 's') &&
           (uVar3 = FUN_00493180((int)pcStack_13c,(uint *)"/sfnts",6), uVar3 == 0))
        goto LAB_00450f4f;
        piVar10 = piStack_130;
        (*(code *)piStack_130[8])(piStack_130);
        (*(code *)piVar10[7])(piVar10);
        pcVar7 = (char *)*piVar10;
        pcVar11 = pcVar8;
      } while (pcVar7 <= pcStack_124);
    }
  }
  iVar4 = 3;
LAB_00450f54:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&pcStack_13c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&pcStack_13c);
  }
  return iVar4;
}

