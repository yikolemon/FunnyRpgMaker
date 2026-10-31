/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042fac7 */

undefined4 __fastcall FUN_0042fac7(int *param_1,undefined2 *param_2,int param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  undefined *puVar9;
  uint uVar10;
  int *piVar11;
  byte *pbVar12;
  undefined *puStack_58;
  undefined4 uStack_54;
  int *piStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 *puStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined *puStack_38;
  uint uStack_34;
  uint uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&puStack_58;
  local_18 = 0;
  uVar1 = 6;
  if (param_3 == 0 || (param_2 == (undefined2 *)0x0 || param_1 == (int *)0x0)) goto LAB_0042ff58;
  uVar1 = (**(code **)(*(int *)(param_1[0x66] + 0x38) + 0x44))(param_1[3]);
  puVar5 = (&PTR_DAT_004e24f4)[*(int *)(param_2 + 8)];
  uStack_34 = 3;
  piStack_50 = param_1;
  puStack_44 = param_2;
  (**(code **)(*(int *)(param_1[0x66] + 0x38) + 0x58))
            (*(undefined4 *)
              ("mldAbarAnmrAtsvAumaBgneBdhuBmkaCsnaCiraCrehCtpoCtrpClryCaveDtrsDihtEroeG" +
              *(int *)(param_2 + 4) * 4),0,&uStack_34,&uStack_30,0,0);
  piVar11 = piStack_50;
  uStack_24 = 0;
  if (uStack_34 != 0) {
    uStack_24 = uStack_30;
  }
  iStack_20 = 0;
  if (1 < uStack_34) {
    iStack_20 = iStack_2c;
  }
  uStack_1c = 0;
  if (2 < uStack_34) {
    uStack_1c = uStack_28;
  }
  if (param_4 == '\0') {
    if (uStack_24 != 0x44464c54) goto LAB_0042fbde;
    uStack_54 = 0;
    uVar2 = 0;
    uVar1 = 0;
    puVar5 = (undefined *)0x0;
  }
  else {
    if (uStack_24 == 0) {
      uStack_24 = 0x44464c54;
    }
    else if (iStack_20 != 0x44464c54) {
      if (iStack_20 == 0) {
        iStack_20 = 0x44464c54;
      }
      else {
        uStack_1c = 0x44464c54;
      }
    }
LAB_0042fbde:
    uVar2 = (**(code **)(*(int *)(piStack_50[0x66] + 0x38) + 100))();
    (**(code **)(*(int *)(piVar11[0x66] + 0x38) + 0x4c))(uVar1,0x47535542,&uStack_24,0,puVar5,uVar2)
    ;
    iVar3 = (**(code **)(*(int *)(piVar11[0x66] + 0x38) + 0x74))(uVar2);
    if (iVar3 == 0) {
      puStack_58 = puVar5;
      uVar4 = (**(code **)(*(int *)(piVar11[0x66] + 0x38) + 100))();
      uStack_30 = 0xffffffff;
      iVar3 = (**(code **)(*(int *)(piVar11[0x66] + 0x38) + 0x78))(uVar2,&uStack_30);
      uStack_40 = uVar1;
      while (iVar3 != 0) {
        (**(code **)(*(int *)(piVar11[0x66] + 0x38) + 0x50))
                  (uStack_40,0x47535542,uStack_30,0,0,0,uVar4);
        iVar3 = (**(code **)(*(int *)(piVar11[0x66] + 0x38) + 0x78))(uVar2,&uStack_30);
      }
      uStack_4c = uVar2;
      uStack_48 = uVar4;
      puVar5 = (undefined *)(**(code **)(*(int *)(piVar11[0x66] + 0x38) + 100))();
      uVar2 = uStack_40;
      (**(code **)(*(int *)(piVar11[0x66] + 0x38) + 0x4c))
                (uStack_40,0x47504f53,&uStack_24,0,puStack_58,puVar5);
      uStack_54 = (**(code **)(*(int *)(piVar11[0x66] + 0x38) + 100))();
      uStack_30 = 0xffffffff;
      iVar3 = (**(code **)(*(int *)(piVar11[0x66] + 0x38) + 0x78))(puVar5,&uStack_30);
      uVar1 = uStack_48;
      while (uStack_48 = uVar1, iVar3 != 0) {
        (**(code **)(*(int *)(piVar11[0x66] + 0x38) + 0x50))
                  (uVar2,0x47504f53,uStack_30,0,uStack_54,0,0);
        iVar3 = (**(code **)(*(int *)(piVar11[0x66] + 0x38) + 0x78))(puVar5,&uStack_30);
        uVar1 = uStack_48;
      }
      puStack_58 = puVar5;
      if (*(int *)(puStack_44 + 8) == 10) {
LAB_0042fd68:
        uVar1 = uStack_48;
        uStack_30 = 0xffffffff;
        iVar3 = *(int *)(piVar11[0x66] + 0x38);
        while (iVar3 = (**(code **)(iVar3 + 0x78))(uVar1,&uStack_30), uVar2 = uStack_4c,
              puVar5 = puStack_58, iVar3 != 0) {
          if ((uStack_30 < (uint)piVar11[1]) && (*(short *)(param_3 + uStack_30 * 2) == 0x1fff)) {
            *(undefined2 *)(param_3 + uStack_30 * 2) = *puStack_44;
          }
          iVar3 = *(int *)(piVar11[0x66] + 0x38);
        }
      }
      else {
        iVar3 = *(int *)(&DAT_004de0c0 + *(int *)(puStack_44 + 6) * 8);
        uVar2 = uStack_4c;
        if (iVar3 != 0x159b) {
          puVar9 = &DAT_004de0c0 + *(int *)(puStack_44 + 6) * 8;
          uStack_3c = 0;
          do {
            bVar7 = (&DAT_004dcb24)[iVar3];
            puStack_38 = puVar9;
            if (bVar7 != 0) {
              pbVar12 = &DAT_004dcb24 + iVar3;
              do {
                piVar11 = piStack_50;
                pbVar12 = pbVar12 + 1;
                uVar10 = (uint)bVar7;
                if ((char)bVar7 < '\0') {
                  uVar8 = (uint)(bVar7 < 0xf0) * 8 + 7;
                  uVar6 = bVar7 < 0xf0 ^ 3;
                  if (bVar7 < 0xe0) {
                    uVar8 = 0x1f;
                    uVar6 = 1;
                  }
                  uVar10 = uVar10 & uVar8;
                  uVar8 = 0;
                  do {
                    uVar10 = pbVar12[uVar8] & 0x3f | uVar10 << 6;
                    uVar8 = uVar8 + 1;
                  } while (uVar6 != uVar8);
                  pbVar12 = pbVar12 + uVar6;
                }
                uStack_30 = 0xffffffff;
                do {
                  iVar3 = (**(code **)(*(int *)(piVar11[0x66] + 0x38) + 0x78))(uStack_4c,&uStack_30)
                  ;
                  if (iVar3 == 0) goto LAB_0042fea7;
                  uStack_34 = FUN_0041df5f(*piVar11,uVar10);
                  iVar3 = (**(code **)(*(int *)(piVar11[0x66] + 0x38) + 0x54))
                                    (uStack_40,uStack_30,&uStack_34,1,1);
                } while (iVar3 == 0);
                uStack_3c = CONCAT31((int3)((uint)iVar3 >> 8),1);
LAB_0042fea7:
                bVar7 = *pbVar12;
                puVar5 = puStack_58;
              } while (bVar7 != 0);
            }
            piVar11 = piStack_50;
            iVar3 = *(int *)(puStack_38 + 8);
            puVar9 = puStack_38 + 8;
          } while (iVar3 != 0x159b);
          uVar2 = uStack_4c;
          uVar1 = uStack_48;
          if ((char)uStack_3c != '\0') {
            if (*(int *)(puStack_44 + 8) != 10) {
              (**(code **)(*(int *)(piStack_50[0x66] + 0x38) + 0x7c))(uStack_48,uStack_54);
            }
            goto LAB_0042fd68;
          }
        }
      }
    }
    else {
      uStack_54 = 0;
      uVar1 = 0;
      puVar5 = (undefined *)0x0;
    }
  }
  (**(code **)(*(int *)(piVar11[0x66] + 0x38) + 0x68))(uVar2);
  (**(code **)(*(int *)(piVar11[0x66] + 0x38) + 0x68))(uVar1);
  (**(code **)(*(int *)(piVar11[0x66] + 0x38) + 0x68))(puVar5);
  (**(code **)(*(int *)(piVar11[0x66] + 0x38) + 0x68))(uStack_54);
  uVar1 = 0;
LAB_0042ff58:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&puStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&puStack_58);
  }
  return uVar1;
}

