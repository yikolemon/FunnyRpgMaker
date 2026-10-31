/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075bf62 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14075bf62(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  longlong unaff_R12;
  
  uVar6 = _DAT_150af96bb;
  piVar8 = (int *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x14);
  uVar5 = (ulonglong)_DAT_150af96bb;
  iVar7 = *(int *)(uVar5 + 0x1fbc);
  if (iVar7 != 0) {
    uVar2 = piVar8[10];
    if (iVar7 < 1 || uVar2 == 0) {
LAB_14075bfff:
      if (0 < iVar7) {
        bVar1 = *(byte *)((longlong)piVar8 + 0x2c);
        if ((*(byte *)(uVar5 + 0x27b4) & 8) != 0) {
          if (uVar2 == 0) {
            uVar5 = 0x1033cfb8;
          }
          else {
            uVar5 = (ulonglong)*(uint *)((ulonglong)uVar2 + 4);
          }
          *(ulonglong *)((longlong)piVar8 + -8) = uVar5;
          *(undefined8 *)((longlong)piVar8 + -0x10) = 0x103559bd;
          *(undefined8 *)((longlong)piVar8 + -0x18) = 0x14075c02e;
          FUN_1407518b6();
          piVar8 = (int *)(ulonglong)((int)(undefined1 *)((longlong)piVar8 + -0x10) + 8);
        }
        *(ulonglong *)((longlong)piVar8 + -8) = (ulonglong)bVar1;
        *(undefined8 *)((longlong)piVar8 + -0x10) = 0;
        *(undefined8 *)((longlong)piVar8 + -0x18) = 0x14075c03b;
        FUN_14076e1dc();
      }
    }
    else {
      uVar3 = *(uint *)(uVar5 + 0x1fc4);
      piVar8[2] = uVar3 + 4;
      piVar8[1] = iVar7;
      piVar8[3] = uVar6;
      *piVar8 = iVar7;
      piVar8[4] = uVar3;
      do {
        if (*(int *)((ulonglong)uVar3 + 4) != 0) {
          uVar6 = *(uint *)((longlong)piVar8 + 8);
          do {
            if (*(uint *)(ulonglong)uVar6 != 0) {
              *(ulonglong *)((longlong)piVar8 + -8) = (ulonglong)*(uint *)(ulonglong)uVar6;
              *(ulonglong *)((longlong)piVar8 + -0x10) = (ulonglong)uVar2;
              *(undefined8 *)((longlong)piVar8 + -0x18) = 0x14075bfd0;
              cVar4 = FUN_14075a8c7();
              piVar8 = (int *)(ulonglong)((int)(undefined1 *)((longlong)piVar8 + -0x10) + 8);
              if (cVar4 != '\0') break;
            }
            uVar6 = uVar6 + 0x28;
            if (uVar6 == 0) {
              uVar5 = (ulonglong)(uint)piVar8[3];
              iVar7 = *piVar8;
              goto LAB_14075bfff;
            }
          } while( true );
        }
        *(int *)((longlong)piVar8 + unaff_R12 + 4) = *(int *)((longlong)piVar8 + unaff_R12 + 4) + -1
        ;
        piVar8[2] = piVar8[2] + 0x28;
        uVar3 = piVar8[4];
      } while (*piVar8 != 0);
    }
  }
  return;
}

