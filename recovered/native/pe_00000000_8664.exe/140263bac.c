/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140263bac */

void Unwind_140263bac(ulonglong param_1,longlong param_2,undefined1 *param_3,longlong param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  char unaff_BL;
  uint uVar8;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar9;
  uint in_R10D;
  ulonglong uVar7;
  
  puVar5 = (uint *)(param_4 + unaff_RDI[4] + (param_1 >> 5) * 4);
  if (param_2 == 0) {
    puVar5 = (uint *)(param_4 + unaff_RDI[4] + -4);
  }
  if ((*puVar5 & in_R10D) != 0) {
    FUN_140224e60(unaff_RBP + -0x18,*param_3);
    if ((unaff_BL == '\0') &&
       (cVar3 = FUN_140263afc(unaff_RDI + 0xe,(ulonglong)(unaff_RDI[2] - unaff_RDI[1]) >> 3,5,
                              unaff_RBP + -0x18), cVar3 == '\0')) {
      *unaff_RSI = 0;
      *(undefined8 *)(unaff_RSI + 8) = 0;
    }
    else if (unaff_RDI[1] == unaff_RDI[2]) {
      *(undefined4 *)(unaff_RBP + -0x40) = *(undefined4 *)(unaff_RBP + -0x18);
      *(undefined4 *)(unaff_RBP + -0x3c) = *(undefined4 *)(unaff_RBP + -0x14);
      *(undefined4 *)(unaff_RBP + -0x38) = *(undefined4 *)(unaff_RBP + -0x10);
      *(undefined4 *)(unaff_RBP + -0x34) = *(undefined4 *)(unaff_RBP + -0xc);
      *(undefined1 *)(unaff_RBP + -0x18) = 0;
      *(undefined8 *)(unaff_RBP + -0x10) = 0;
      FUN_140261594(*unaff_RDI,unaff_RBP + -0x40);
      uVar2 = *unaff_RDI;
      *unaff_RSI = 1;
      *(undefined8 *)(unaff_RSI + 8) = uVar2;
    }
    else {
      pcVar1 = *(char **)(unaff_RDI[2] + -8);
      if (pcVar1 == (char *)0x0) {
        *unaff_RSI = 0;
        *(undefined8 *)(unaff_RSI + 8) = 0;
      }
      else if (*pcVar1 == '\x02') {
        FUN_140227e6a(*(undefined8 *)(pcVar1 + 8),unaff_RBP + -0x18);
        lVar9 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI[2] + -8) + 8) + 8);
        *unaff_RSI = 1;
        *(longlong *)(unaff_RSI + 8) = lVar9 + -0x10;
      }
      else {
        uVar4 = unaff_RDI[0xb];
        uVar6 = (uint)uVar4 & 0x1f;
        uVar7 = (ulonglong)uVar6;
        uVar8 = 0x80000000;
        if (uVar7 != 0) {
          uVar8 = 1 << ((char)uVar6 - 1U & 0x1f);
        }
        lVar9 = (uVar4 >> 5) * 4 + unaff_RDI[8];
        uVar4 = (longlong)uVar4 >> 0x3f & 0xe000000000000000;
        puVar5 = (uint *)(lVar9 + uVar4 + (uVar7 - 1 >> 5) * 4);
        if (uVar7 == 0) {
          puVar5 = (uint *)((uVar4 - 4) + lVar9);
        }
        uVar6 = *puVar5;
        FUN_140263a5c(unaff_RDI + 8);
        if ((uVar6 & uVar8) == 0) {
          *unaff_RSI = 0;
          *(undefined8 *)(unaff_RSI + 8) = 0;
        }
        else {
          *(undefined4 *)(unaff_RBP + -0x30) = *(undefined4 *)(unaff_RBP + -0x18);
          *(undefined4 *)(unaff_RBP + -0x2c) = *(undefined4 *)(unaff_RBP + -0x14);
          *(undefined4 *)(unaff_RBP + -0x28) = *(undefined4 *)(unaff_RBP + -0x10);
          *(undefined4 *)(unaff_RBP + -0x24) = *(undefined4 *)(unaff_RBP + -0xc);
          *(undefined1 *)(unaff_RBP + -0x18) = 0;
          *(undefined8 *)(unaff_RBP + -0x10) = 0;
          FUN_140261594(unaff_RDI[0xc],unaff_RBP + -0x30);
          *unaff_RSI = 1;
          *(undefined8 *)(unaff_RSI + 8) = unaff_RDI[0xc];
        }
      }
    }
    FUN_140224c96(unaff_RBP + -0x18);
    return;
  }
  *unaff_RSI = 0;
  *(undefined8 *)(unaff_RSI + 8) = 0;
  return;
}

