/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f97e2 */

void __thiscall FUN_100f97e2(int param_1,uint param_2,byte param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  byte local_19;
  
  if (*(char *)(param_1 + 0xbad) == '\x01') {
    local_19 = param_3;
LAB_100f9804:
    do {
      bVar1 = *(byte *)(param_1 + 0x49);
      if ((param_2 == 0 && bVar1 == 1) &&
         (param_2 = (uint)*(byte *)(param_1 + 0xb43),
         ((~*(byte *)(param_1 + 0xb43) | local_19) & 1) == 0)) {
        *(undefined1 *)(param_1 + 0xb43) = 0;
        param_2 = 1;
      }
      iVar2 = *(int *)(param_1 + 0xb0);
      iVar4 = FUN_100f9526(param_2);
      pbVar5 = (byte *)(iVar2 + 0xec + param_2);
      if (iVar4 != 0) {
        pbVar5 = (byte *)(iVar4 + 0x10);
      }
      if (*pbVar5 == local_19) {
        return;
      }
      if ((local_19 & param_2 == 0 & bVar1) != 1) {
LAB_100f98e8:
        iVar4 = *(int *)(iVar2 + 0x1480);
        *(int *)(iVar2 + 0x1480) = iVar4 + 1;
        iVar6 = *(int *)(iVar2 + 0x1464);
        uVar3 = *(undefined4 *)(iVar2 + 0x147c);
        if (iVar6 == *(int *)(iVar2 + 0x1468)) {
          if (iVar6 == 0) {
            iVar8 = 8;
          }
          else {
            iVar8 = iVar6 / 2 + iVar6;
          }
          iVar9 = iVar6 + 1;
          if (iVar6 + 1 < iVar8) {
            iVar9 = iVar8;
          }
          iVar8 = FUN_100fa1fa(iVar9 * 0x1c);
          if (*(int *)(iVar2 + 0x146c) != 0) {
            FUN_1025b2d0(iVar8,*(int *)(iVar2 + 0x146c),*(int *)(iVar2 + 0x1464) * 0x1c);
            FUN_100fa2cb(*(undefined4 *)(iVar2 + 0x146c));
          }
          *(int *)(iVar2 + 0x146c) = iVar8;
          *(int *)(iVar2 + 0x1468) = iVar9;
          iVar6 = *(int *)(iVar2 + 0x1464);
        }
        else {
          iVar8 = *(int *)(iVar2 + 0x146c);
        }
        iVar6 = iVar6 * 0x1c;
        *(undefined4 *)(iVar8 + iVar6) = 3;
        *(undefined4 *)(iVar8 + 4 + iVar6) = 1;
        *(int *)(iVar8 + 8 + iVar6) = iVar4;
        *(uint *)(iVar8 + 0xc + iVar6) = param_2;
        *(byte *)(iVar8 + 0x10 + iVar6) = local_19;
        *(undefined2 *)(iVar8 + 0x11 + iVar6) = 0;
        *(undefined1 *)(iVar8 + 0x13 + iVar6) = 0;
        *(undefined4 *)(iVar8 + 0x14 + iVar6) = uVar3;
        *(undefined4 *)(iVar8 + 0x18 + iVar6) = 0;
        *(int *)(iVar2 + 0x1464) = *(int *)(iVar2 + 0x1464) + 1;
        return;
      }
      iVar4 = FUN_100f9526(0x8000);
      pcVar7 = (char *)(iVar4 + 0x10);
      if (iVar4 == 0) {
        pcVar7 = (char *)(iVar2 + 0x107);
      }
      if (*pcVar7 != '\x01') goto LAB_100f98e8;
      if ((*(byte *)(iVar2 + 0x27b4) & 0x80) == 0) {
        *(undefined1 *)(param_1 + 0xb43) = 1;
        local_19 = 1;
        param_2 = 1;
        goto LAB_100f9804;
      }
      FUN_100f99e6("[io] Super+Left Click aliased into Right Click\n");
      *(undefined1 *)(param_1 + 0xb43) = 1;
      local_19 = 1;
      param_2 = 1;
    } while (*(char *)(param_1 + 0xbad) != '\0');
  }
  return;
}

