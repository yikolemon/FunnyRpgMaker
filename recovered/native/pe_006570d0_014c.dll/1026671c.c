/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026671c */

undefined4 __fastcall FUN_1026671c(int param_1)

{
  byte bVar1;
  uchar uVar2;
  byte bVar3;
  uchar *puVar4;
  uchar *puVar5;
  int iVar6;
  uchar uVar7;
  byte bVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  byte *local_c;
  
  bVar1 = **(byte **)(param_1 + 8);
  if (bVar1 < 0x65) {
    if (bVar1 == 100) {
      *(undefined4 *)(param_1 + 0x28) = 3;
      goto LAB_1026688d;
    }
    if (bVar1 < 0x4a) {
      if (bVar1 == 0x49) goto LAB_10266816;
      if (bVar1 != 0x41) {
        if (bVar1 == 0x43) {
LAB_10266793:
          if (*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0) {
            *(undefined4 *)(param_1 + 0x18) = 1;
            *(undefined4 *)(param_1 + 0x1c) = 0;
          }
          FUN_102666fb();
          *(undefined4 *)(param_1 + 0x28) = 0;
          goto LAB_102667b2;
        }
        if (((bVar1 != 0x45) && (bVar1 != 0x46)) && (bVar1 != 0x47)) goto LAB_1026683d;
      }
    }
    else {
      if (bVar1 == 0x53) {
LAB_1026686c:
        FUN_102666fb();
        *(undefined4 *)(param_1 + 0x28) = 1;
LAB_102667b2:
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        return 1;
      }
      if (bVar1 == 0x58) goto LAB_10266886;
      if (bVar1 == 0x5b) {
        FUN_102666fb();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        *(undefined4 *)(param_1 + 0x28) = 8;
        if ((undefined4 *)(param_1 + 0x2c) == (undefined4 *)0x0) {
          *(undefined4 *)(param_1 + 0xc) = 0xc;
          *(undefined2 *)(param_1 + 0x14) = 0;
        }
        else {
          puVar10 = (undefined4 *)(param_1 + 0x2c);
          for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          puVar4 = *(uchar **)(param_1 + 8);
          uVar2 = *puVar4;
          uVar7 = uVar2;
          if (uVar2 == '^') {
            puVar4 = puVar4 + 1;
            *(uchar **)(param_1 + 8) = puVar4;
            uVar7 = *puVar4;
          }
          if (uVar7 == ']') {
            puVar4 = puVar4 + 1;
            *(uchar **)(param_1 + 8) = puVar4;
            *(byte *)(param_1 + 0x37) = *(byte *)(param_1 + 0x37) | 0x20;
          }
          local_c = (byte *)0x0;
          puVar5 = puVar4;
          if (*puVar4 != ']') {
            uVar7 = *puVar4;
            do {
              if (uVar7 == '\0') break;
              if (((uVar7 == '-') && (puVar5 + -1 != local_c)) && (puVar5 != puVar4)) {
                bVar1 = puVar5[1];
                if (bVar1 == 0x5d) goto LAB_10266991;
                bVar3 = puVar5[-1];
                bVar8 = bVar3;
                if (bVar3 <= bVar1) {
                  bVar8 = bVar1;
                }
                if (bVar3 <= bVar1) {
                  bVar1 = bVar3;
                }
                for (; local_c = puVar5 + 1, bVar1 != (byte)(bVar8 + 1); bVar1 = bVar1 + 1) {
                  __crt_stdio_input::scanset_buffer<unsigned_char>::set
                            ((scanset_buffer<unsigned_char> *)(param_1 + 0x2c),bVar1);
                }
              }
              else {
LAB_10266991:
                __crt_stdio_input::scanset_buffer<unsigned_char>::set
                          ((scanset_buffer<unsigned_char> *)(param_1 + 0x2c),uVar7);
              }
              puVar5 = (uchar *)(*(int *)(param_1 + 8) + 1);
              *(uchar **)(param_1 + 8) = puVar5;
              uVar7 = *puVar5;
            } while (uVar7 != ']');
          }
          pbVar9 = (byte *)(param_1 + 0x2c);
          if (*puVar5 != '\0') {
            if (uVar2 == '^') {
              for (; pbVar9 != (byte *)(param_1 + 0x4c); pbVar9 = pbVar9 + 1) {
                *pbVar9 = ~*pbVar9;
              }
            }
            *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
            return 1;
          }
          *(undefined2 *)(param_1 + 0x14) = 0;
          *(undefined4 *)(param_1 + 0xc) = 0x16;
        }
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined1 *)(param_1 + 0x24) = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(undefined1 *)(param_1 + 0x16) = 0;
        *(undefined4 *)(param_1 + 0x10) = 0;
        return 0;
      }
      if (bVar1 != 0x61) {
        if (bVar1 != 99) goto LAB_1026683d;
        goto LAB_10266793;
      }
    }
LAB_10266761:
    *(undefined4 *)(param_1 + 0x28) = 7;
  }
  else {
    if (0x6f < bVar1) {
      if (bVar1 == 0x70) {
        *(undefined4 *)(param_1 + 0x20) = 9;
      }
      else {
        if (bVar1 == 0x73) goto LAB_1026686c;
        if (bVar1 == 0x75) {
          *(undefined4 *)(param_1 + 0x28) = 5;
          goto LAB_1026688d;
        }
        if (bVar1 != 0x78) goto LAB_1026683d;
      }
LAB_10266886:
      *(undefined4 *)(param_1 + 0x28) = 6;
      goto LAB_1026688d;
    }
    if (bVar1 == 0x6f) {
      *(undefined4 *)(param_1 + 0x28) = 4;
      goto LAB_1026688d;
    }
    if (((bVar1 == 0x65) || (bVar1 == 0x66)) || (bVar1 == 0x67)) goto LAB_10266761;
    if (bVar1 != 0x69) {
      if (bVar1 != 0x6e) {
LAB_1026683d:
        *(undefined4 *)(param_1 + 0xc) = 0x16;
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined2 *)(param_1 + 0x14) = 0;
        *(undefined1 *)(param_1 + 0x16) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined1 *)(param_1 + 0x24) = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
        return 0;
      }
      *(undefined4 *)(param_1 + 0x28) = 9;
      goto LAB_1026688d;
    }
LAB_10266816:
    *(undefined4 *)(param_1 + 0x28) = 2;
  }
LAB_1026688d:
  *(byte **)(param_1 + 8) = *(byte **)(param_1 + 8) + 1;
  return 1;
}

