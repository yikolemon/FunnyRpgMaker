/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400074aa */

short FUN_1400074aa(longlong param_1,short param_2)

{
  int iVar1;
  longlong lVar2;
  short *psVar3;
  undefined8 *puVar4;
  code *pcVar5;
  short sVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  sVar6 = -1;
  if ((*(byte *)(param_1 + 0x70) & 2) == 0) {
    if (param_2 == -1) {
      sVar6 = 0;
    }
    else {
      lVar2 = **(longlong **)(param_1 + 0x40);
      iVar1 = **(int **)(param_1 + 0x58);
      sVar6 = param_2;
      if (lVar2 == 0 || (longlong)iVar1 < 1) {
        puVar4 = (undefined8 *)**(undefined8 **)(param_1 + 0x18);
        uVar11 = (lVar2 + (longlong)iVar1 * 2) - (longlong)puVar4 >> 1;
        if (lVar2 == 0) {
          uVar11 = 0;
        }
        uVar12 = 0x40;
        if (0x1f < uVar11) {
          if (uVar11 < 0x3fffffff) {
            uVar12 = uVar11 * 4;
          }
          else {
            uVar12 = 0xfffffffe;
            if (0x7ffffffe < uVar11) {
              return -1;
            }
          }
        }
        puVar9 = (undefined8 *)FUN_140002650(uVar12);
        FUN_1400b3550(puVar9,puVar4,uVar11 * 2);
        *(ulonglong *)(param_1 + 0x68) = (longlong)puVar9 + uVar11 * 2 + 2;
        **(undefined8 **)(param_1 + 0x20) = puVar9;
        **(longlong **)(param_1 + 0x40) = (longlong)puVar9 + uVar11 * 2;
        **(undefined4 **)(param_1 + 0x58) = (int)(uVar12 + uVar11 * -2 >> 1);
        if ((*(byte *)(param_1 + 0x70) & 4) == 0) {
          lVar2 = *(longlong *)(param_1 + 0x68);
          lVar10 = (longlong)puVar9 + (**(longlong **)(param_1 + 0x38) - (longlong)puVar4);
          **(undefined8 **)(param_1 + 0x18) = puVar9;
          **(longlong **)(param_1 + 0x38) = lVar10;
          uVar7 = (undefined4)((ulonglong)(lVar2 - lVar10) >> 1);
        }
        else {
          **(undefined8 **)(param_1 + 0x18) = puVar9;
          **(undefined8 **)(param_1 + 0x38) = puVar9;
          uVar7 = 0;
        }
        **(undefined4 **)(param_1 + 0x50) = uVar7;
        uVar8 = *(uint *)(param_1 + 0x70);
        if ((uVar8 & 1) != 0) {
          if ((0x7ff < uVar11) && (0x1f < (ulonglong)((longlong)puVar4 + (-8 - puVar4[-1])))) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          FUN_1400863f0();
          uVar8 = *(uint *)(param_1 + 0x70);
        }
        *(uint *)(param_1 + 0x70) = uVar8 | 1;
        **(int **)(param_1 + 0x58) = **(int **)(param_1 + 0x58) + -1;
        psVar3 = (short *)**(longlong **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x40) = (longlong)(psVar3 + 1);
        *psVar3 = param_2;
      }
      else {
        **(int **)(param_1 + 0x58) = iVar1 + -1;
        psVar3 = (short *)**(longlong **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x40) = (longlong)(psVar3 + 1);
        *psVar3 = param_2;
        *(longlong *)(param_1 + 0x68) = lVar2 + 2;
      }
    }
  }
  return sVar6;
}

