/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bdeef */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407bdeef(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong unaff_RBX;
  uint uVar6;
  int unaff_R13D;
  int unaff_R14D;
  float10 in_ST0;
  int *piVar7;
  
  uVar6 = (int)&stack0xffffffffffffffe0 - 0x20;
  piVar7 = (int *)(ulonglong)uVar6;
  *(char *)(ulonglong)_DAT_2308988b1039d74c =
       *(char *)(ulonglong)_DAT_2308988b1039d74c + (char)_DAT_2308988b1039d74c;
  if ((int)unaff_RBX == 0) {
    *piVar7 = 0x1034b34c;
    piVar7[-2] = 0x407be025;
    piVar7[-1] = 1;
    FUN_140754dc5();
  }
  else {
    if (*(char *)(unaff_RBX + 0x1ed) == '\0') {
      *piVar7 = (int)unaff_RBX;
      piVar7[-2] = 0x407bdf25;
      piVar7[-1] = 1;
      FUN_1407b9056();
    }
    piVar7[-2] = 0x407bdf2a;
    piVar7[-1] = 1;
    FUN_1407bdd1a();
    piVar7[4] = (int)(float)in_ST0;
    piVar7[3] = piVar7[4];
    piVar7[1] = piVar7[4];
    *piVar7 = 1;
    piVar7[-2] = 0x407bdf4c;
    piVar7[-1] = 1;
    FUN_1407bd234();
    *piVar7 = (int)(piVar7 + 5);
    piVar7[-2] = 0x407bdf58;
    piVar7[-1] = 1;
    FUN_14076ce6f();
    if (*(char *)(unaff_RBX + 0x200) == '\0') {
      piVar7[2] = piVar7[6];
      piVar7[-2] = 0x407bdf76;
      piVar7[-1] = 1;
      iVar2 = FUN_1407bd006();
      if (0 < iVar2) {
        do {
          *piVar7 = 0;
          piVar7[-2] = 0x407bdf86;
          piVar7[-1] = 1;
          cVar1 = FUN_1407bd4d6();
          if ((cVar1 != '\0') || (*(short *)(unaff_RBX + 0x1cc) == 0)) {
            *piVar7 = 0;
            piVar7[-2] = 0x407bdf9d;
            piVar7[-1] = 1;
            uVar3 = FUN_1407bd085();
            uVar4 = 0x10356101;
            if ((uVar3 >> 0xc & 1) == 0) {
              *piVar7 = 0;
              piVar7[-2] = 0x407bdfb0;
              piVar7[-1] = 1;
              uVar4 = FUN_1407bd01c();
            }
            *piVar7 = 0;
            piVar7[-2] = 0x407bdfba;
            piVar7[-1] = 1;
            FUN_14076b228();
            *piVar7 = uVar4;
            piVar7[-2] = 0x407bdfc2;
            piVar7[-1] = 1;
            FUN_1407be048();
            piVar7[-2] = 0x407bdfc7;
            piVar7[-1] = 1;
            FUN_14076b438();
          }
        } while (unaff_R14D != unaff_R13D);
      }
      *piVar7 = (int)(piVar7 + 5);
      piVar7[-2] = 0x407bdfd8;
      piVar7[-1] = 1;
      FUN_14076beb2();
      *piVar7 = 1;
      piVar7[-2] = 0x407bdfe4;
      piVar7[-1] = 1;
      cVar1 = FUN_14076be03();
      if (cVar1 != '\0') {
        piVar7[-2] = 0x407bdfed;
        piVar7[-1] = 1;
        iVar5 = FUN_1407bd149();
        if (((iVar5 == iVar2) && ((float)piVar7[2] <= (float)piVar7[6])) &&
           ((float)piVar7[6] < (float)piVar7[3] + (float)piVar7[2])) {
          *piVar7 = iVar2;
          piVar7[-2] = 0x407be017;
          piVar7[-1] = 1;
          FUN_1407bbea1();
        }
      }
    }
  }
  if (_DAT_150b46d31 != (piVar7[7] ^ uVar6)) {
                    /* WARNING: Subroutine does not return */
    *(code **)(piVar7 + -2) = FUN_1407be048;
    FUN_1408802b0(piVar7[7] ^ uVar6);
  }
  return;
}

