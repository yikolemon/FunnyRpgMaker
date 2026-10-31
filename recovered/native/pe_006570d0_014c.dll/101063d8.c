/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101063d8 */

void FUN_101063d8(void)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  char *pcVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  float fVar8;
  
  iVar1 = DAT_1039d74c;
  if ((*(byte *)(DAT_1039d74c + 0x30) & 0x40) != 0) {
    FUN_100f9246();
  }
  iVar7 = 0x290;
  do {
    FUN_10126c67();
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x295);
  FUN_10126c67();
  FUN_10126c67();
  uVar5 = *(uint *)(iVar1 + 0x108);
  uVar2 = FUN_10114148();
  *(uint *)(iVar1 + 0x108) = uVar2;
  *(byte *)(iVar1 + 0x104) = (byte)(uVar2 >> 0xc) & 1;
  *(byte *)(iVar1 + 0x105) = (byte)(uVar2 >> 0xd) & 1;
  *(byte *)(iVar1 + 0x106) = (byte)(uVar2 >> 0xe) & 1;
  *(char *)(iVar1 + 0x107) = (char)(uVar2 >> 0xf);
  if (uVar5 != uVar2) {
    *(undefined8 *)(iVar1 + 0x1570) = *(undefined8 *)(iVar1 + 0x18);
  }
  if (uVar2 != 0 && uVar5 == 0) {
    *(undefined8 *)(iVar1 + 0x1578) = *(undefined8 *)(iVar1 + 0x18);
  }
  if ((*(byte *)(iVar1 + 0x34) & 1) == 0) {
    iVar7 = 0;
    do {
      *(undefined1 *)(iVar1 + 0x88c + iVar7) = 0;
      *(undefined4 *)(iVar1 + 0x898 + iVar7) = 0;
      iVar7 = iVar7 + 0x10;
    } while (iVar7 != 0x180);
  }
  pfVar3 = (float *)(iVar1 + 0x114);
  uVar5 = 0x200;
  do {
    fVar8 = pfVar3[-1];
    *pfVar3 = fVar8;
    if (*(char *)(pfVar3 + -2) == '\0') {
      pfVar3[-1] = -1.0;
    }
    else {
      if (0.0 <= fVar8) {
        fVar8 = fVar8 + *(float *)(iVar1 + 0x48);
        pfVar3[-1] = fVar8;
        if ((fVar8 != 0.0) || (NAN(fVar8))) goto LAB_10106558;
      }
      else {
        pfVar3[-1] = 0.0;
      }
      if ((uVar5 < 0x278) || (uVar5 - 0x297 < 4)) {
        *(undefined8 *)(iVar1 + 0x1580) = *(undefined8 *)(iVar1 + 0x18);
      }
    }
LAB_10106558:
    uVar5 = uVar5 + 1;
    pfVar3 = pfVar3 + 4;
    if (uVar5 == 0x29b) {
      pcVar4 = (char *)(iVar1 + 0x15a5);
      iVar7 = 0x10c;
      do {
        *(undefined4 *)(pcVar4 + -9) = *(undefined4 *)(pcVar4 + -5);
        if (*(char *)(iVar1 + iVar7) == '\0') {
          pcVar4[-0xffffffff00000005] = -1;
          pcVar4[-0xffffffff00000004] = -1;
          pcVar4[-0xffffffff00000003] = -1;
          pcVar4[-0xffffffff00000002] = -1;
        }
        if (*pcVar4 == '\x01') {
          cVar6 = *(char *)(iVar1 + iVar7);
        }
        else {
          cVar6 = '\0';
        }
        *pcVar4 = cVar6;
        pcVar4[-1] = cVar6;
        iVar7 = iVar7 + 0x10;
        pcVar4 = pcVar4 + 0xc;
      } while (iVar7 != 0xabc);
      FUN_10126c90();
      return;
    }
  } while( true );
}

