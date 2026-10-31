/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140077084 */

void FUN_140077084(longlong param_1,uint param_2,byte param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  byte *pbVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  
  if (*(char *)(param_1 + 0xbe5) == '\x01') {
LAB_1400770b1:
    do {
      bVar1 = *(byte *)(param_1 + 0x5d);
      if ((param_2 == 0 && bVar1 == 1) &&
         (param_2 = (uint)*(byte *)(param_1 + 0xb7b),
         ((~*(byte *)(param_1 + 0xb7b) | param_3) & 1) == 0)) {
        *(undefined1 *)(param_1 + 0xb7b) = 0;
        param_2 = 1;
      }
      lVar4 = *(longlong *)(param_1 + 0xe0);
      lVar7 = FUN_140076dd1(lVar4,3,param_2);
      pbVar8 = (byte *)(lVar4 + 0x120 + (longlong)(int)param_2);
      if (lVar7 != 0) {
        pbVar8 = (byte *)(lVar7 + 0x10);
      }
      if (*pbVar8 == param_3) {
        return;
      }
      if ((param_3 & param_2 == 0 & bVar1) != 1) {
LAB_1400771a0:
        iVar2 = *(int *)(lVar4 + 0x15a4);
        *(int *)(lVar4 + 0x15a4) = iVar2 + 1;
        iVar6 = *(int *)(lVar4 + 0x1580);
        uVar3 = *(undefined4 *)(lVar4 + 0x15a0);
        if (iVar6 == *(int *)(lVar4 + 0x1584)) {
          if (iVar6 == 0) {
            iVar9 = 8;
          }
          else {
            iVar9 = iVar6 / 2 + iVar6;
          }
          iVar11 = iVar6 + 1;
          if (iVar6 + 1 < iVar9) {
            iVar11 = iVar9;
          }
          lVar7 = FUN_140077ab4((longlong)iVar11 * 0x1c);
          if (*(longlong *)(lVar4 + 0x1588) != 0) {
            FUN_1401c5180(lVar7,*(longlong *)(lVar4 + 0x1588),
                          (longlong)*(int *)(lVar4 + 0x1580) * 0x1c);
            FUN_140077b90(*(undefined8 *)(lVar4 + 0x1588));
          }
          *(longlong *)(lVar4 + 0x1588) = lVar7;
          *(int *)(lVar4 + 0x1584) = iVar11;
          iVar6 = *(int *)(lVar4 + 0x1580);
        }
        else {
          lVar7 = *(longlong *)(lVar4 + 0x1588);
        }
        lVar5 = (longlong)iVar6 * 0x1c;
        *(undefined8 *)(lVar7 + lVar5) = 0x100000003;
        *(int *)(lVar7 + 8 + lVar5) = iVar2;
        *(uint *)(lVar7 + 0xc + lVar5) = param_2;
        *(byte *)(lVar7 + 0x10 + lVar5) = param_3;
        *(undefined2 *)(lVar7 + 0x11 + lVar5) = 0;
        *(undefined1 *)(lVar7 + 0x13 + lVar5) = 0;
        *(undefined4 *)(lVar7 + 0x14 + lVar5) = uVar3;
        *(undefined4 *)(lVar7 + 0x18 + lVar5) = 0;
        *(int *)(lVar4 + 0x1580) = *(int *)(lVar4 + 0x1580) + 1;
        return;
      }
      lVar7 = FUN_140076dd1(lVar4,5,0x8000);
      pcVar10 = (char *)(lVar7 + 0x10);
      if (lVar7 == 0) {
        pcVar10 = (char *)(lVar4 + 0x13b);
      }
      if (*pcVar10 != '\x01') goto LAB_1400771a0;
      if ((*(byte *)(lVar4 + 0x2acc) & 0x80) == 0) {
        *(undefined1 *)(param_1 + 0xb7b) = 1;
        param_2 = 1;
        param_3 = 1;
        goto LAB_1400770b1;
      }
      FUN_1400772a6("[io] Super+Left Click aliased into Right Click\n");
      *(undefined1 *)(param_1 + 0xb7b) = 1;
      param_2 = 1;
      param_3 = 1;
    } while (*(char *)(param_1 + 0xbe5) != '\0');
  }
  return;
}

